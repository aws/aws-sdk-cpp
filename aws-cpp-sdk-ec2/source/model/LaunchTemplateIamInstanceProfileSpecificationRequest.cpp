﻿/*
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

#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecificationRequest.h>
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

LaunchTemplateIamInstanceProfileSpecificationRequest::LaunchTemplateIamInstanceProfileSpecificationRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

LaunchTemplateIamInstanceProfileSpecificationRequest::LaunchTemplateIamInstanceProfileSpecificationRequest(const XmlNode& xmlNode) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateIamInstanceProfileSpecificationRequest& LaunchTemplateIamInstanceProfileSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = StringUtils::Trim(arnNode.GetText().c_str());
      m_arnHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateIamInstanceProfileSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

}

void LaunchTemplateIamInstanceProfileSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
