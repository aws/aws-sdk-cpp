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
#include <aws/iam/model/PolicyToSimulate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

PolicyToSimulate::PolicyToSimulate() : 
    m_policyIdentifierHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

PolicyToSimulate::PolicyToSimulate(const XmlNode& xmlNode) : 
    m_policyIdentifierHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyToSimulate& PolicyToSimulate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyIdentifierNode = resultNode.FirstChild("PolicyIdentifier");
    if(!policyIdentifierNode.IsNull())
    {
      m_policyIdentifier = StringUtils::Trim(policyIdentifierNode.GetText().c_str());
      m_policyIdentifierHasBeenSet = true;
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

void PolicyToSimulate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyIdentifier=" << StringUtils::URLEncode(m_policyIdentifier.c_str()) << "&";
  }
  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }
}

void PolicyToSimulate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyIdentifierHasBeenSet)
  {
      oStream << location << ".PolicyIdentifier=" << StringUtils::URLEncode(m_policyIdentifier.c_str()) << "&";
  }
  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }
}
