/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
