/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the <code> <a>DescribeInstanceTypeLimits</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInstanceTypeLimitsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DescribeInstanceTypeLimitsRequest : public OpenSearchServiceRequest
  {
  public:
    DescribeInstanceTypeLimitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceTypeLimits"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain you want to modify. Only include this value if you're
     * querying OpenSearch <code> <a>Limits</a> </code> for an existing domain. </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The instance type for an OpenSearch cluster for which OpenSearch <code>
     * <a>Limits</a> </code> are needed. </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> Version of OpenSearch for which <code> <a>Limits</a> </code> are needed.
     * </p>
     */
    inline DescribeInstanceTypeLimitsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
