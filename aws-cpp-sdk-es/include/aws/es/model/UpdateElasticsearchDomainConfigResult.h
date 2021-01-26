/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchDomainConfig.h>
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
   * <p>The result of an <code>UpdateElasticsearchDomain</code> request. Contains the
   * status of the Elasticsearch domain being updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API UpdateElasticsearchDomainConfigResult
  {
  public:
    UpdateElasticsearchDomainConfigResult();
    UpdateElasticsearchDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateElasticsearchDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline const ElasticsearchDomainConfig& GetDomainConfig() const{ return m_domainConfig; }

    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline void SetDomainConfig(const ElasticsearchDomainConfig& value) { m_domainConfig = value; }

    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline void SetDomainConfig(ElasticsearchDomainConfig&& value) { m_domainConfig = std::move(value); }

    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline UpdateElasticsearchDomainConfigResult& WithDomainConfig(const ElasticsearchDomainConfig& value) { SetDomainConfig(value); return *this;}

    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline UpdateElasticsearchDomainConfigResult& WithDomainConfig(ElasticsearchDomainConfig&& value) { SetDomainConfig(std::move(value)); return *this;}

  private:

    ElasticsearchDomainConfig m_domainConfig;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
