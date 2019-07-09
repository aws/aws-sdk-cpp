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

#include <aws/cloudsearch/model/DomainStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

DomainStatus::DomainStatus() : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_docServiceHasBeenSet(false),
    m_searchServiceHasBeenSet(false),
    m_requiresIndexDocuments(false),
    m_requiresIndexDocumentsHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_searchInstanceTypeHasBeenSet(false),
    m_searchPartitionCount(0),
    m_searchPartitionCountHasBeenSet(false),
    m_searchInstanceCount(0),
    m_searchInstanceCountHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
}

DomainStatus::DomainStatus(const XmlNode& xmlNode) : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_docServiceHasBeenSet(false),
    m_searchServiceHasBeenSet(false),
    m_requiresIndexDocuments(false),
    m_requiresIndexDocumentsHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_searchInstanceTypeHasBeenSet(false),
    m_searchPartitionCount(0),
    m_searchPartitionCountHasBeenSet(false),
    m_searchInstanceCount(0),
    m_searchInstanceCountHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
  *this = xmlNode;
}

DomainStatus& DomainStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainIdNode = resultNode.FirstChild("DomainId");
    if(!domainIdNode.IsNull())
    {
      m_domainId = domainIdNode.GetText();
      m_domainIdHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = domainNameNode.GetText();
      m_domainNameHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = aRNNode.GetText();
      m_aRNHasBeenSet = true;
    }
    XmlNode createdNode = resultNode.FirstChild("Created");
    if(!createdNode.IsNull())
    {
      m_created = StringUtils::ConvertToBool(StringUtils::Trim(createdNode.GetText().c_str()).c_str());
      m_createdHasBeenSet = true;
    }
    XmlNode deletedNode = resultNode.FirstChild("Deleted");
    if(!deletedNode.IsNull())
    {
      m_deleted = StringUtils::ConvertToBool(StringUtils::Trim(deletedNode.GetText().c_str()).c_str());
      m_deletedHasBeenSet = true;
    }
    XmlNode docServiceNode = resultNode.FirstChild("DocService");
    if(!docServiceNode.IsNull())
    {
      m_docService = docServiceNode;
      m_docServiceHasBeenSet = true;
    }
    XmlNode searchServiceNode = resultNode.FirstChild("SearchService");
    if(!searchServiceNode.IsNull())
    {
      m_searchService = searchServiceNode;
      m_searchServiceHasBeenSet = true;
    }
    XmlNode requiresIndexDocumentsNode = resultNode.FirstChild("RequiresIndexDocuments");
    if(!requiresIndexDocumentsNode.IsNull())
    {
      m_requiresIndexDocuments = StringUtils::ConvertToBool(StringUtils::Trim(requiresIndexDocumentsNode.GetText().c_str()).c_str());
      m_requiresIndexDocumentsHasBeenSet = true;
    }
    XmlNode processingNode = resultNode.FirstChild("Processing");
    if(!processingNode.IsNull())
    {
      m_processing = StringUtils::ConvertToBool(StringUtils::Trim(processingNode.GetText().c_str()).c_str());
      m_processingHasBeenSet = true;
    }
    XmlNode searchInstanceTypeNode = resultNode.FirstChild("SearchInstanceType");
    if(!searchInstanceTypeNode.IsNull())
    {
      m_searchInstanceType = searchInstanceTypeNode.GetText();
      m_searchInstanceTypeHasBeenSet = true;
    }
    XmlNode searchPartitionCountNode = resultNode.FirstChild("SearchPartitionCount");
    if(!searchPartitionCountNode.IsNull())
    {
      m_searchPartitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(searchPartitionCountNode.GetText().c_str()).c_str());
      m_searchPartitionCountHasBeenSet = true;
    }
    XmlNode searchInstanceCountNode = resultNode.FirstChild("SearchInstanceCount");
    if(!searchInstanceCountNode.IsNull())
    {
      m_searchInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(searchInstanceCountNode.GetText().c_str()).c_str());
      m_searchInstanceCountHasBeenSet = true;
    }
    XmlNode limitsNode = resultNode.FirstChild("Limits");
    if(!limitsNode.IsNull())
    {
      m_limits = limitsNode;
      m_limitsHasBeenSet = true;
    }
  }

  return *this;
}

void DomainStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_domainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DomainId=" << StringUtils::URLEncode(m_domainId.c_str()) << "&";
  }

  if(m_domainNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_createdHasBeenSet)
  {
      oStream << location << index << locationValue << ".Created=" << std::boolalpha << m_created << "&";
  }

  if(m_deletedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Deleted=" << std::boolalpha << m_deleted << "&";
  }

  if(m_docServiceHasBeenSet)
  {
      Aws::StringStream docServiceLocationAndMemberSs;
      docServiceLocationAndMemberSs << location << index << locationValue << ".DocService";
      m_docService.OutputToStream(oStream, docServiceLocationAndMemberSs.str().c_str());
  }

  if(m_searchServiceHasBeenSet)
  {
      Aws::StringStream searchServiceLocationAndMemberSs;
      searchServiceLocationAndMemberSs << location << index << locationValue << ".SearchService";
      m_searchService.OutputToStream(oStream, searchServiceLocationAndMemberSs.str().c_str());
  }

  if(m_requiresIndexDocumentsHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequiresIndexDocuments=" << std::boolalpha << m_requiresIndexDocuments << "&";
  }

  if(m_processingHasBeenSet)
  {
      oStream << location << index << locationValue << ".Processing=" << std::boolalpha << m_processing << "&";
  }

  if(m_searchInstanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SearchInstanceType=" << StringUtils::URLEncode(m_searchInstanceType.c_str()) << "&";
  }

  if(m_searchPartitionCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".SearchPartitionCount=" << m_searchPartitionCount << "&";
  }

  if(m_searchInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".SearchInstanceCount=" << m_searchInstanceCount << "&";
  }

  if(m_limitsHasBeenSet)
  {
      Aws::StringStream limitsLocationAndMemberSs;
      limitsLocationAndMemberSs << location << index << locationValue << ".Limits";
      m_limits.OutputToStream(oStream, limitsLocationAndMemberSs.str().c_str());
  }

}

void DomainStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_domainIdHasBeenSet)
  {
      oStream << location << ".DomainId=" << StringUtils::URLEncode(m_domainId.c_str()) << "&";
  }
  if(m_domainNameHasBeenSet)
  {
      oStream << location << ".DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_createdHasBeenSet)
  {
      oStream << location << ".Created=" << std::boolalpha << m_created << "&";
  }
  if(m_deletedHasBeenSet)
  {
      oStream << location << ".Deleted=" << std::boolalpha << m_deleted << "&";
  }
  if(m_docServiceHasBeenSet)
  {
      Aws::String docServiceLocationAndMember(location);
      docServiceLocationAndMember += ".DocService";
      m_docService.OutputToStream(oStream, docServiceLocationAndMember.c_str());
  }
  if(m_searchServiceHasBeenSet)
  {
      Aws::String searchServiceLocationAndMember(location);
      searchServiceLocationAndMember += ".SearchService";
      m_searchService.OutputToStream(oStream, searchServiceLocationAndMember.c_str());
  }
  if(m_requiresIndexDocumentsHasBeenSet)
  {
      oStream << location << ".RequiresIndexDocuments=" << std::boolalpha << m_requiresIndexDocuments << "&";
  }
  if(m_processingHasBeenSet)
  {
      oStream << location << ".Processing=" << std::boolalpha << m_processing << "&";
  }
  if(m_searchInstanceTypeHasBeenSet)
  {
      oStream << location << ".SearchInstanceType=" << StringUtils::URLEncode(m_searchInstanceType.c_str()) << "&";
  }
  if(m_searchPartitionCountHasBeenSet)
  {
      oStream << location << ".SearchPartitionCount=" << m_searchPartitionCount << "&";
  }
  if(m_searchInstanceCountHasBeenSet)
  {
      oStream << location << ".SearchInstanceCount=" << m_searchInstanceCount << "&";
  }
  if(m_limitsHasBeenSet)
  {
      Aws::String limitsLocationAndMember(location);
      limitsLocationAndMember += ".Limits";
      m_limits.OutputToStream(oStream, limitsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
