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

#include <aws/iam/model/ServiceLastAccessed.h>
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

ServiceLastAccessed::ServiceLastAccessed() : 
    m_serviceNameHasBeenSet(false),
    m_lastAuthenticatedHasBeenSet(false),
    m_serviceNamespaceHasBeenSet(false),
    m_lastAuthenticatedEntityHasBeenSet(false),
    m_totalAuthenticatedEntities(0),
    m_totalAuthenticatedEntitiesHasBeenSet(false)
{
}

ServiceLastAccessed::ServiceLastAccessed(const XmlNode& xmlNode) : 
    m_serviceNameHasBeenSet(false),
    m_lastAuthenticatedHasBeenSet(false),
    m_serviceNamespaceHasBeenSet(false),
    m_lastAuthenticatedEntityHasBeenSet(false),
    m_totalAuthenticatedEntities(0),
    m_totalAuthenticatedEntitiesHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceLastAccessed& ServiceLastAccessed::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceNameNode = resultNode.FirstChild("ServiceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = serviceNameNode.GetText();
      m_serviceNameHasBeenSet = true;
    }
    XmlNode lastAuthenticatedNode = resultNode.FirstChild("LastAuthenticated");
    if(!lastAuthenticatedNode.IsNull())
    {
      m_lastAuthenticated = DateTime(StringUtils::Trim(lastAuthenticatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastAuthenticatedHasBeenSet = true;
    }
    XmlNode serviceNamespaceNode = resultNode.FirstChild("ServiceNamespace");
    if(!serviceNamespaceNode.IsNull())
    {
      m_serviceNamespace = serviceNamespaceNode.GetText();
      m_serviceNamespaceHasBeenSet = true;
    }
    XmlNode lastAuthenticatedEntityNode = resultNode.FirstChild("LastAuthenticatedEntity");
    if(!lastAuthenticatedEntityNode.IsNull())
    {
      m_lastAuthenticatedEntity = lastAuthenticatedEntityNode.GetText();
      m_lastAuthenticatedEntityHasBeenSet = true;
    }
    XmlNode totalAuthenticatedEntitiesNode = resultNode.FirstChild("TotalAuthenticatedEntities");
    if(!totalAuthenticatedEntitiesNode.IsNull())
    {
      m_totalAuthenticatedEntities = StringUtils::ConvertToInt32(StringUtils::Trim(totalAuthenticatedEntitiesNode.GetText().c_str()).c_str());
      m_totalAuthenticatedEntitiesHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceLastAccessed::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_lastAuthenticatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastAuthenticated=" << StringUtils::URLEncode(m_lastAuthenticated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceNamespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceNamespace=" << StringUtils::URLEncode(m_serviceNamespace.c_str()) << "&";
  }

  if(m_lastAuthenticatedEntityHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastAuthenticatedEntity=" << StringUtils::URLEncode(m_lastAuthenticatedEntity.c_str()) << "&";
  }

  if(m_totalAuthenticatedEntitiesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalAuthenticatedEntities=" << m_totalAuthenticatedEntities << "&";
  }

}

void ServiceLastAccessed::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_lastAuthenticatedHasBeenSet)
  {
      oStream << location << ".LastAuthenticated=" << StringUtils::URLEncode(m_lastAuthenticated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceNamespaceHasBeenSet)
  {
      oStream << location << ".ServiceNamespace=" << StringUtils::URLEncode(m_serviceNamespace.c_str()) << "&";
  }
  if(m_lastAuthenticatedEntityHasBeenSet)
  {
      oStream << location << ".LastAuthenticatedEntity=" << StringUtils::URLEncode(m_lastAuthenticatedEntity.c_str()) << "&";
  }
  if(m_totalAuthenticatedEntitiesHasBeenSet)
  {
      oStream << location << ".TotalAuthenticatedEntities=" << m_totalAuthenticatedEntities << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
