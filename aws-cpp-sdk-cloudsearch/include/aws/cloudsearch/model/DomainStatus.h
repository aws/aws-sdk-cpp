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

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/ServiceEndpoint.h>
#include <aws/cloudsearch/model/Limits.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The current status of the search domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DomainStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DomainStatus
  {
  public:
    DomainStatus();
    DomainStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    DomainStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    
    inline DomainStatus& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    
    inline DomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    
    inline DomainStatus& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DomainStatus& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline DomainStatus& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const Aws::String& GetARN() const{ return m_aRN; }

    
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    
    inline DomainStatus& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    
    inline DomainStatus& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    
    inline DomainStatus& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>True if the search domain is created. It can take several minutes to
     * initialize a domain when <a>CreateDomain</a> is called. Newly created search
     * domains are returned from <a>DescribeDomains</a> with a false value for Created
     * until domain creation is complete.</p>
     */
    inline bool GetCreated() const{ return m_created; }

    /**
     * <p>True if the search domain is created. It can take several minutes to
     * initialize a domain when <a>CreateDomain</a> is called. Newly created search
     * domains are returned from <a>DescribeDomains</a> with a false value for Created
     * until domain creation is complete.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>True if the search domain is created. It can take several minutes to
     * initialize a domain when <a>CreateDomain</a> is called. Newly created search
     * domains are returned from <a>DescribeDomains</a> with a false value for Created
     * until domain creation is complete.</p>
     */
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>True if the search domain is created. It can take several minutes to
     * initialize a domain when <a>CreateDomain</a> is called. Newly created search
     * domains are returned from <a>DescribeDomains</a> with a false value for Created
     * until domain creation is complete.</p>
     */
    inline DomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}


    /**
     * <p>True if the search domain has been deleted. The system must clean up
     * resources dedicated to the search domain when <a>DeleteDomain</a> is called.
     * Newly deleted search domains are returned from <a>DescribeDomains</a> with a
     * true value for IsDeleted for several minutes until resource cleanup is
     * complete.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>True if the search domain has been deleted. The system must clean up
     * resources dedicated to the search domain when <a>DeleteDomain</a> is called.
     * Newly deleted search domains are returned from <a>DescribeDomains</a> with a
     * true value for IsDeleted for several minutes until resource cleanup is
     * complete.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>True if the search domain has been deleted. The system must clean up
     * resources dedicated to the search domain when <a>DeleteDomain</a> is called.
     * Newly deleted search domains are returned from <a>DescribeDomains</a> with a
     * true value for IsDeleted for several minutes until resource cleanup is
     * complete.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>True if the search domain has been deleted. The system must clean up
     * resources dedicated to the search domain when <a>DeleteDomain</a> is called.
     * Newly deleted search domains are returned from <a>DescribeDomains</a> with a
     * true value for IsDeleted for several minutes until resource cleanup is
     * complete.</p>
     */
    inline DomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline const ServiceEndpoint& GetDocService() const{ return m_docService; }

    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline bool DocServiceHasBeenSet() const { return m_docServiceHasBeenSet; }

    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline void SetDocService(const ServiceEndpoint& value) { m_docServiceHasBeenSet = true; m_docService = value; }

    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline void SetDocService(ServiceEndpoint&& value) { m_docServiceHasBeenSet = true; m_docService = std::move(value); }

    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline DomainStatus& WithDocService(const ServiceEndpoint& value) { SetDocService(value); return *this;}

    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline DomainStatus& WithDocService(ServiceEndpoint&& value) { SetDocService(std::move(value)); return *this;}


    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline const ServiceEndpoint& GetSearchService() const{ return m_searchService; }

    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline bool SearchServiceHasBeenSet() const { return m_searchServiceHasBeenSet; }

    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline void SetSearchService(const ServiceEndpoint& value) { m_searchServiceHasBeenSet = true; m_searchService = value; }

    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline void SetSearchService(ServiceEndpoint&& value) { m_searchServiceHasBeenSet = true; m_searchService = std::move(value); }

    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline DomainStatus& WithSearchService(const ServiceEndpoint& value) { SetSearchService(value); return *this;}

    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline DomainStatus& WithSearchService(ServiceEndpoint&& value) { SetSearchService(std::move(value)); return *this;}


    /**
     * <p>True if <a>IndexDocuments</a> needs to be called to activate the current
     * domain configuration.</p>
     */
    inline bool GetRequiresIndexDocuments() const{ return m_requiresIndexDocuments; }

    /**
     * <p>True if <a>IndexDocuments</a> needs to be called to activate the current
     * domain configuration.</p>
     */
    inline bool RequiresIndexDocumentsHasBeenSet() const { return m_requiresIndexDocumentsHasBeenSet; }

    /**
     * <p>True if <a>IndexDocuments</a> needs to be called to activate the current
     * domain configuration.</p>
     */
    inline void SetRequiresIndexDocuments(bool value) { m_requiresIndexDocumentsHasBeenSet = true; m_requiresIndexDocuments = value; }

    /**
     * <p>True if <a>IndexDocuments</a> needs to be called to activate the current
     * domain configuration.</p>
     */
    inline DomainStatus& WithRequiresIndexDocuments(bool value) { SetRequiresIndexDocuments(value); return *this;}


    /**
     * <p>True if processing is being done to activate the current domain
     * configuration.</p>
     */
    inline bool GetProcessing() const{ return m_processing; }

    /**
     * <p>True if processing is being done to activate the current domain
     * configuration.</p>
     */
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }

    /**
     * <p>True if processing is being done to activate the current domain
     * configuration.</p>
     */
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }

    /**
     * <p>True if processing is being done to activate the current domain
     * configuration.</p>
     */
    inline DomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}


    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline const Aws::String& GetSearchInstanceType() const{ return m_searchInstanceType; }

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline bool SearchInstanceTypeHasBeenSet() const { return m_searchInstanceTypeHasBeenSet; }

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline void SetSearchInstanceType(const Aws::String& value) { m_searchInstanceTypeHasBeenSet = true; m_searchInstanceType = value; }

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline void SetSearchInstanceType(Aws::String&& value) { m_searchInstanceTypeHasBeenSet = true; m_searchInstanceType = std::move(value); }

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline void SetSearchInstanceType(const char* value) { m_searchInstanceTypeHasBeenSet = true; m_searchInstanceType.assign(value); }

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline DomainStatus& WithSearchInstanceType(const Aws::String& value) { SetSearchInstanceType(value); return *this;}

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline DomainStatus& WithSearchInstanceType(Aws::String&& value) { SetSearchInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline DomainStatus& WithSearchInstanceType(const char* value) { SetSearchInstanceType(value); return *this;}


    /**
     * <p>The number of partitions across which the search index is spread.</p>
     */
    inline int GetSearchPartitionCount() const{ return m_searchPartitionCount; }

    /**
     * <p>The number of partitions across which the search index is spread.</p>
     */
    inline bool SearchPartitionCountHasBeenSet() const { return m_searchPartitionCountHasBeenSet; }

    /**
     * <p>The number of partitions across which the search index is spread.</p>
     */
    inline void SetSearchPartitionCount(int value) { m_searchPartitionCountHasBeenSet = true; m_searchPartitionCount = value; }

    /**
     * <p>The number of partitions across which the search index is spread.</p>
     */
    inline DomainStatus& WithSearchPartitionCount(int value) { SetSearchPartitionCount(value); return *this;}


    /**
     * <p>The number of search instances that are available to process search
     * requests.</p>
     */
    inline int GetSearchInstanceCount() const{ return m_searchInstanceCount; }

    /**
     * <p>The number of search instances that are available to process search
     * requests.</p>
     */
    inline bool SearchInstanceCountHasBeenSet() const { return m_searchInstanceCountHasBeenSet; }

    /**
     * <p>The number of search instances that are available to process search
     * requests.</p>
     */
    inline void SetSearchInstanceCount(int value) { m_searchInstanceCountHasBeenSet = true; m_searchInstanceCount = value; }

    /**
     * <p>The number of search instances that are available to process search
     * requests.</p>
     */
    inline DomainStatus& WithSearchInstanceCount(int value) { SetSearchInstanceCount(value); return *this;}


    
    inline const Limits& GetLimits() const{ return m_limits; }

    
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    
    inline void SetLimits(const Limits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    
    inline void SetLimits(Limits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    
    inline DomainStatus& WithLimits(const Limits& value) { SetLimits(value); return *this;}

    
    inline DomainStatus& WithLimits(Limits&& value) { SetLimits(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    bool m_created;
    bool m_createdHasBeenSet;

    bool m_deleted;
    bool m_deletedHasBeenSet;

    ServiceEndpoint m_docService;
    bool m_docServiceHasBeenSet;

    ServiceEndpoint m_searchService;
    bool m_searchServiceHasBeenSet;

    bool m_requiresIndexDocuments;
    bool m_requiresIndexDocumentsHasBeenSet;

    bool m_processing;
    bool m_processingHasBeenSet;

    Aws::String m_searchInstanceType;
    bool m_searchInstanceTypeHasBeenSet;

    int m_searchPartitionCount;
    bool m_searchPartitionCountHasBeenSet;

    int m_searchInstanceCount;
    bool m_searchInstanceCountHasBeenSet;

    Limits m_limits;
    bool m_limitsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
