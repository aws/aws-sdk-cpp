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
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticsearchInstanceTypeLimits"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> DomainName represents the name of the Domain that we are trying to modify.
     * This should be present only if we are querying for Elasticsearch <code>
     * <a>Limits</a> </code> for existing domain. </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline const ESPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline void SetInstanceType(const ESPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline void SetInstanceType(ESPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithInstanceType(const ESPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The instance type for an Elasticsearch cluster for which Elasticsearch
     * <code> <a>Limits</a> </code> are needed. </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithInstanceType(ESPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}

    /**
     * <p> Version of Elasticsearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeElasticsearchInstanceTypeLimitsRequest& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ESPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
