﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/S3KeyFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

S3KeyFilter::S3KeyFilter() : 
    m_filterRulesHasBeenSet(false)
{
}

S3KeyFilter::S3KeyFilter(const XmlNode& xmlNode) : 
    m_filterRulesHasBeenSet(false)
{
  *this = xmlNode;
}

S3KeyFilter& S3KeyFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode filterRulesNode = resultNode.FirstChild("FilterRule");
    if(!filterRulesNode.IsNull())
    {
      XmlNode filterRuleMember = filterRulesNode;
      while(!filterRuleMember.IsNull())
      {
        m_filterRules.push_back(filterRuleMember);
        filterRuleMember = filterRuleMember.NextNode("FilterRule");
      }

      m_filterRulesHasBeenSet = true;
    }
  }

  return *this;
}

void S3KeyFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_filterRulesHasBeenSet)
  {
   for(const auto& item : m_filterRules)
   {
     XmlNode filterRulesNode = parentNode.CreateChildElement("FilterRule");
     item.AddToNode(filterRulesNode);
   }
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
