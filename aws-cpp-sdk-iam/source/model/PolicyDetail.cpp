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
#include <aws/iam/model/PolicyDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

PolicyDetail::PolicyDetail() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

PolicyDetail::PolicyDetail(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyDetail& PolicyDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = StringUtils::Trim(policyNameNode.GetText().c_str());
      m_policyNameHasBeenSet = true;
    }
    XmlNode policyDocumentNode = resultNode.FirstChild("PolicyDocument");
    if(!policyDocumentNode.IsNull())
    {
      m_policyDocument = StringUtils::Trim(policyDocumentNode.GetText().c_str());
      m_policyDocumentHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

}

void PolicyDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
