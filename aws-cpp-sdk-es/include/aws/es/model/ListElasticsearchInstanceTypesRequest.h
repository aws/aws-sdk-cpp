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
  class AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesRequest : public ElasticsearchServiceRequest
  {
  public:
    ListElasticsearchInstanceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListElasticsearchInstanceTypes"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}

    /**
     * <p>Version of Elasticsearch for which list of supported elasticsearch instance
     * types are needed. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}


    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for list of available
     * Elasticsearch instance types when modifying existing domain. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 30 else it wont be honored. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 30 else it wont be honored. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 30 else it wont be honored. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 30 else it wont be honored. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination. </p>
     */
    inline ListElasticsearchInstanceTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
