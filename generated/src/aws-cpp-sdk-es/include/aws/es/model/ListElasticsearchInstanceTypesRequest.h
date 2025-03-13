/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the <code>
   * <a>ListElasticsearchInstanceTypes</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypesRequest">AWS
   * API Reference</a></p>
   */
  class ListElasticsearchInstanceTypesRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListElasticsearchInstanceTypes"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline const Aws::String& GetElasticsearchVersion() const { return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    template<typename ElasticsearchVersionT = Aws::String>
    void SetElasticsearchVersion(ElasticsearchVersionT&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::forward<ElasticsearchVersionT>(value); }
    template<typename ElasticsearchVersionT = Aws::String>
    ListElasticsearchInstanceTypesRequest& WithElasticsearchVersion(ElasticsearchVersionT&& value) { SetElasticsearchVersion(std::forward<ElasticsearchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ListElasticsearchInstanceTypesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 30 else it wont be honored. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListElasticsearchInstanceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListElasticsearchInstanceTypesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
