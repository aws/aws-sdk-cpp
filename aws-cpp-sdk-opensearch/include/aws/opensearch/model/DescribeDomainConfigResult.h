/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainConfig.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeDomainConfig</code> request. Contains the
   * configuration information of the requested domain. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DescribeDomainConfigResult
  {
  public:
    DescribeDomainConfigResult();
    DescribeDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeDomainConfig</code> request. </p>
     */
    inline const DomainConfig& GetDomainConfig() const{ return m_domainConfig; }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeDomainConfig</code> request. </p>
     */
    inline void SetDomainConfig(const DomainConfig& value) { m_domainConfig = value; }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeDomainConfig</code> request. </p>
     */
    inline void SetDomainConfig(DomainConfig&& value) { m_domainConfig = std::move(value); }

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeDomainConfig</code> request. </p>
     */
    inline DescribeDomainConfigResult& WithDomainConfig(const DomainConfig& value) { SetDomainConfig(value); return *this;}

    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeDomainConfig</code> request. </p>
     */
    inline DescribeDomainConfigResult& WithDomainConfig(DomainConfig&& value) { SetDomainConfig(std::move(value)); return *this;}

  private:

    DomainConfig m_domainConfig;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
