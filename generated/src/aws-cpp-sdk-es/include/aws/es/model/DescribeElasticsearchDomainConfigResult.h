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
   * <p>The result of a <code>DescribeElasticsearchDomainConfig</code> request.
   * Contains the configuration information of the requested domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class DescribeElasticsearchDomainConfigResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline const ElasticsearchDomainConfig& GetDomainConfig() const{ return m_domainConfig; }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline void SetDomainConfig(const ElasticsearchDomainConfig& value) { m_domainConfig = value; }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline void SetDomainConfig(ElasticsearchDomainConfig&& value) { m_domainConfig = std::move(value); }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline DescribeElasticsearchDomainConfigResult& WithDomainConfig(const ElasticsearchDomainConfig& value) { SetDomainConfig(value); return *this;}

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline DescribeElasticsearchDomainConfigResult& WithDomainConfig(ElasticsearchDomainConfig&& value) { SetDomainConfig(std::move(value)); return *this;}

  private:

    ElasticsearchDomainConfig m_domainConfig;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
