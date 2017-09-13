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
  class AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult
  {
  public:
    DescribeElasticsearchDomainConfigResult();
    DescribeElasticsearchDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeElasticsearchDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
