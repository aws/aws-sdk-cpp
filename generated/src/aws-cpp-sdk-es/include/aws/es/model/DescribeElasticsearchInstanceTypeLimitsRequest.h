/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ESPartitionInstanceType.h>
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
   * <p> Container for the parameters to <code>
   * <a>DescribeElasticsearchInstanceTypeLimits</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchInstanceTypeLimitsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeElasticsearchInstanceTypeLimitsRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticsearchInstanceTypeLimits"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeElasticsearchInstanceTypeLimitsRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline ESPartitionInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ESPartitionInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithInstanceType(ESPartitionInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline const Aws::String& GetElasticsearchVersion() const { return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    template<typename ElasticsearchVersionT = Aws::String>
    void SetElasticsearchVersion(ElasticsearchVersionT&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::forward<ElasticsearchVersionT>(value); }
    template<typename ElasticsearchVersionT = Aws::String>
    DescribeElasticsearchInstanceTypeLimitsRequest& WithElasticsearchVersion(ElasticsearchVersionT&& value) { SetElasticsearchVersion(std::forward<ElasticsearchVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ESPartitionInstanceType m_instanceType{ESPartitionInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
