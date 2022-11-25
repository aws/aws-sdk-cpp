/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ValidationWarning.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ValidationWarning::ValidationWarning() : 
    m_errorsHasBeenSet(false)
{
}

ValidationWarning::ValidationWarning(const XmlNode& xmlNode) : 
    m_errorsHasBeenSet(false)
{
  *this = xmlNode;
}

ValidationWarning& ValidationWarning::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorsNode = resultNode.FirstChild("errorSet");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("item");
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("item");
      }

      m_errorsHasBeenSet = true;
    }
  }

  return *this;
}

void ValidationWarning::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location << index << locationValue << ".ErrorSet." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }

}

void ValidationWarning::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location <<  ".ErrorSet." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
