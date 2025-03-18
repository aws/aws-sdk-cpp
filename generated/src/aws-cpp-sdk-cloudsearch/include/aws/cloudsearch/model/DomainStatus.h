/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DomainStatus
  {
  public:
    AWS_CLOUDSEARCH_API DomainStatus() = default;
    AWS_CLOUDSEARCH_API DomainStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DomainStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DomainStatus& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainStatus& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    DomainStatus& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the search domain is created. It can take several minutes to
     * initialize a domain when <a>CreateDomain</a> is called. Newly created search
     * domains are returned from <a>DescribeDomains</a> with a false value for Created
     * until domain creation is complete.</p>
     */
    inline bool GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }
    inline DomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the search domain has been deleted. The system must clean up
     * resources dedicated to the search domain when <a>DeleteDomain</a> is called.
     * Newly deleted search domains are returned from <a>DescribeDomains</a> with a
     * true value for IsDeleted for several minutes until resource cleanup is
     * complete.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline DomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service endpoint for updating documents in a search domain.</p>
     */
    inline const ServiceEndpoint& GetDocService() const { return m_docService; }
    inline bool DocServiceHasBeenSet() const { return m_docServiceHasBeenSet; }
    template<typename DocServiceT = ServiceEndpoint>
    void SetDocService(DocServiceT&& value) { m_docServiceHasBeenSet = true; m_docService = std::forward<DocServiceT>(value); }
    template<typename DocServiceT = ServiceEndpoint>
    DomainStatus& WithDocService(DocServiceT&& value) { SetDocService(std::forward<DocServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service endpoint for requesting search results from a search domain.</p>
     */
    inline const ServiceEndpoint& GetSearchService() const { return m_searchService; }
    inline bool SearchServiceHasBeenSet() const { return m_searchServiceHasBeenSet; }
    template<typename SearchServiceT = ServiceEndpoint>
    void SetSearchService(SearchServiceT&& value) { m_searchServiceHasBeenSet = true; m_searchService = std::forward<SearchServiceT>(value); }
    template<typename SearchServiceT = ServiceEndpoint>
    DomainStatus& WithSearchService(SearchServiceT&& value) { SetSearchService(std::forward<SearchServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if <a>IndexDocuments</a> needs to be called to activate the current
     * domain configuration.</p>
     */
    inline bool GetRequiresIndexDocuments() const { return m_requiresIndexDocuments; }
    inline bool RequiresIndexDocumentsHasBeenSet() const { return m_requiresIndexDocumentsHasBeenSet; }
    inline void SetRequiresIndexDocuments(bool value) { m_requiresIndexDocumentsHasBeenSet = true; m_requiresIndexDocuments = value; }
    inline DomainStatus& WithRequiresIndexDocuments(bool value) { SetRequiresIndexDocuments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if processing is being done to activate the current domain
     * configuration.</p>
     */
    inline bool GetProcessing() const { return m_processing; }
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }
    inline DomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type that is being used to process search requests.</p>
     */
    inline const Aws::String& GetSearchInstanceType() const { return m_searchInstanceType; }
    inline bool SearchInstanceTypeHasBeenSet() const { return m_searchInstanceTypeHasBeenSet; }
    template<typename SearchInstanceTypeT = Aws::String>
    void SetSearchInstanceType(SearchInstanceTypeT&& value) { m_searchInstanceTypeHasBeenSet = true; m_searchInstanceType = std::forward<SearchInstanceTypeT>(value); }
    template<typename SearchInstanceTypeT = Aws::String>
    DomainStatus& WithSearchInstanceType(SearchInstanceTypeT&& value) { SetSearchInstanceType(std::forward<SearchInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of partitions across which the search index is spread.</p>
     */
    inline int GetSearchPartitionCount() const { return m_searchPartitionCount; }
    inline bool SearchPartitionCountHasBeenSet() const { return m_searchPartitionCountHasBeenSet; }
    inline void SetSearchPartitionCount(int value) { m_searchPartitionCountHasBeenSet = true; m_searchPartitionCount = value; }
    inline DomainStatus& WithSearchPartitionCount(int value) { SetSearchPartitionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of search instances that are available to process search
     * requests.</p>
     */
    inline int GetSearchInstanceCount() const { return m_searchInstanceCount; }
    inline bool SearchInstanceCountHasBeenSet() const { return m_searchInstanceCountHasBeenSet; }
    inline void SetSearchInstanceCount(int value) { m_searchInstanceCountHasBeenSet = true; m_searchInstanceCount = value; }
    inline DomainStatus& WithSearchInstanceCount(int value) { SetSearchInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Limits& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = Limits>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = Limits>
    DomainStatus& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_created{false};
    bool m_createdHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    ServiceEndpoint m_docService;
    bool m_docServiceHasBeenSet = false;

    ServiceEndpoint m_searchService;
    bool m_searchServiceHasBeenSet = false;

    bool m_requiresIndexDocuments{false};
    bool m_requiresIndexDocumentsHasBeenSet = false;

    bool m_processing{false};
    bool m_processingHasBeenSet = false;

    Aws::String m_searchInstanceType;
    bool m_searchInstanceTypeHasBeenSet = false;

    int m_searchPartitionCount{0};
    bool m_searchPartitionCountHasBeenSet = false;

    int m_searchInstanceCount{0};
    bool m_searchInstanceCountHasBeenSet = false;

    Limits m_limits;
    bool m_limitsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
