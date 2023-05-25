/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ParameterConstraints.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ParameterConstraints::ParameterConstraints() : 
    m_allowedValuesHasBeenSet(false)
{
}

ParameterConstraints::ParameterConstraints(const XmlNode& xmlNode) : 
    m_allowedValuesHasBeenSet(false)
{
  *this = xmlNode;
}

ParameterConstraints& ParameterConstraints::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowedValuesNode = resultNode.FirstChild("AllowedValues");
    if(!allowedValuesNode.IsNull())
    {
      XmlNode allowedValuesMember = allowedValuesNode.FirstChild("member");
      while(!allowedValuesMember.IsNull())
      {
        m_allowedValues.push_back(allowedValuesMember.GetText());
        allowedValuesMember = allowedValuesMember.NextNode("member");
      }

      m_allowedValuesHasBeenSet = true;
    }
  }

  return *this;
}

void ParameterConstraints::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowedValuesHasBeenSet)
  {
      unsigned allowedValuesIdx = 1;
      for(auto& item : m_allowedValues)
      {
        oStream << location << index << locationValue << ".AllowedValues.member." << allowedValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ParameterConstraints::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowedValuesHasBeenSet)
  {
      unsigned allowedValuesIdx = 1;
      for(auto& item : m_allowedValues)
      {
        oStream << location << ".AllowedValues.member." << allowedValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
