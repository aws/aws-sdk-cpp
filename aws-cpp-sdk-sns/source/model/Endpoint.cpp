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
#include <aws/sns/model/Endpoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Endpoint::Endpoint() : 
    m_endpointArnHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Endpoint::Endpoint(const XmlNode& xmlNode) : 
    m_endpointArnHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = xmlNode;
}

Endpoint& Endpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode endpointArnNode = resultNode.FirstChild("EndpointArn");
    if(!endpointArnNode.IsNull())
    {
      m_endpointArn = StringUtils::Trim(endpointArnNode.GetText().c_str());
      m_endpointArnHasBeenSet = true;
    }
    XmlNode attributesNode = resultNode.FirstChild("Attributes");
    attributesNode = attributesNode.FirstChild("entry");
    if(!attributesNode.IsNull())
    {
      while(!attributesNode.IsNull())
      {
        XmlNode keyNode = attributesNode.FirstChild("key");
        XmlNode valueNode = attributesNode.FirstChild("value");
        m_attributes[StringUtils::Trim(keyNode.GetText().c_str())] =
            StringUtils::Trim(valueNode.GetText().c_str());
        attributesNode = attributesNode.NextNode("entry");
      }

      m_attributesHasBeenSet = true;
    }
  }

  return *this;
}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_endpointArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointArn=" << StringUtils::URLEncode(m_endpointArn.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
  }
}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_endpointArnHasBeenSet)
  {
      oStream << location << ".EndpointArn=" << StringUtils::URLEncode(m_endpointArn.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
  }
}
