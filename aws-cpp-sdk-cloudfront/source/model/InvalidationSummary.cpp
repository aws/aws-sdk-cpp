/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/InvalidationSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InvalidationSummary::InvalidationSummary() : 
    m_createTime(0.0)
{
}

InvalidationSummary::InvalidationSummary(const XmlNode& xmlNode) : 
    m_createTime(0.0)
{
  *this = xmlNode;
}

InvalidationSummary& InvalidationSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    m_createTime = StringUtils::ConvertToDouble(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = StringUtils::Trim(statusNode.GetText().c_str());
  }

  return *this;
}

void InvalidationSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode idNode = parentNode.CreateChildElement("Id");
  idNode.SetText(m_id);
  XmlNode createTimeNode = parentNode.CreateChildElement("CreateTime");
  ss << m_createTime;
  createTimeNode.SetText(ss.str());
  ss.str("");
  XmlNode statusNode = parentNode.CreateChildElement("Status");
  statusNode.SetText(m_status);
}
