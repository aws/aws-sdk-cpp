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
#include <aws/es/model/ElasticsearchDomainStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DeleteElasticsearchDomain</code> request. Contains the
   * status of the pending deletion, or no status if the domain and all of its
   * resources have been deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomainResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DeleteElasticsearchDomainResult
  {
  public:
    DeleteElasticsearchDomainResult();
    DeleteElasticsearchDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteElasticsearchDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the Elasticsearch domain being deleted.</p>
     */
    inline const ElasticsearchDomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The status of the Elasticsearch domain being deleted.</p>
     */
    inline void SetDomainStatus(const ElasticsearchDomainStatus& value) { m_domainStatus = value; }

    /**
     * <p>The status of the Elasticsearch domain being deleted.</p>
     */
    inline void SetDomainStatus(ElasticsearchDomainStatus&& value) { m_domainStatus = std::move(value); }

    /**
     * <p>The status of the Elasticsearch domain being deleted.</p>
     */
    inline DeleteElasticsearchDomainResult& WithDomainStatus(const ElasticsearchDomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The status of the Elasticsearch domain being deleted.</p>
     */
    inline DeleteElasticsearchDomainResult& WithDomainStatus(ElasticsearchDomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}

  private:

    ElasticsearchDomainStatus m_domainStatus;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
