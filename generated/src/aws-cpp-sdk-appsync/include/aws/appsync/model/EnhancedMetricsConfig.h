/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ResolverLevelMetricsBehavior.h>
#include <aws/appsync/model/DataSourceLevelMetricsBehavior.h>
#include <aws/appsync/model/OperationLevelMetricsConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Enables and controls the enhanced metrics feature. Enhanced metrics emit
   * granular data on API usage and performance such as AppSync request and error
   * counts, latency, and cache hits/misses. All enhanced metric data is sent to your
   * CloudWatch account, and you can configure the types of data that will be sent.
   * </p> <p>Enhanced metrics can be configured at the resolver, data source, and
   * operation levels. <code>EnhancedMetricsConfig</code> contains three required
   * parameters, each controlling one of these categories:</p> <ol> <li> <p>
   * <code>resolverLevelMetricsBehavior</code>: Controls how resolver metrics will be
   * emitted to CloudWatch. Resolver metrics include:</p> <ul> <li> <p>GraphQL
   * errors: The number of GraphQL errors that occurred.</p> </li> <li> <p>Requests:
   * The number of invocations that occurred during a request. </p> </li> <li>
   * <p>Latency: The time to complete a resolver invocation.</p> </li> <li> <p>Cache
   * hits: The number of cache hits during a request.</p> </li> <li> <p>Cache misses:
   * The number of cache misses during a request.</p> </li> </ul> <p>These metrics
   * can be emitted to CloudWatch per resolver or for all resolvers in the request.
   * Metrics will be recorded by API ID and resolver name.
   * <code>resolverLevelMetricsBehavior</code> accepts one of these values at a
   * time:</p> <ul> <li> <p> <code>FULL_REQUEST_RESOLVER_METRICS</code>: Records and
   * emits metric data for all resolvers in the request.</p> </li> <li> <p>
   * <code>PER_RESOLVER_METRICS</code>: Records and emits metric data for resolvers
   * that have the <code>metricsConfig</code> value set to <code>ENABLED</code>.</p>
   * </li> </ul> </li> <li> <p> <code>dataSourceLevelMetricsBehavior</code>: Controls
   * how data source metrics will be emitted to CloudWatch. Data source metrics
   * include:</p> <ul> <li> <p>Requests: The number of invocations that occured
   * during a request.</p> </li> <li> <p>Latency: The time to complete a data source
   * invocation.</p> </li> <li> <p>Errors: The number of errors that occurred during
   * a data source invocation.</p> </li> </ul> <p>These metrics can be emitted to
   * CloudWatch per data source or for all data sources in the request. Metrics will
   * be recorded by API ID and data source name.
   * <code>dataSourceLevelMetricsBehavior</code> accepts one of these values at a
   * time:</p> <ul> <li> <p> <code>FULL_REQUEST_DATA_SOURCE_METRICS</code>: Records
   * and emits metric data for all data sources in the request.</p> </li> <li> <p>
   * <code>PER_DATA_SOURCE_METRICS</code>: Records and emits metric data for data
   * sources that have the <code>metricsConfig</code> value set to
   * <code>ENABLED</code>.</p> </li> </ul> </li> <li> <p>
   * <code>operationLevelMetricsConfig</code>: Controls how operation metrics will be
   * emitted to CloudWatch. Operation metrics include:</p> <ul> <li> <p>Requests: The
   * number of times a specified GraphQL operation was called.</p> </li> <li>
   * <p>GraphQL errors: The number of GraphQL errors that occurred during a specified
   * GraphQL operation.</p> </li> </ul> <p>Metrics will be recorded by API ID and
   * operation name. You can set the value to <code>ENABLED</code> or
   * <code>DISABLED</code>.</p> </li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EnhancedMetricsConfig">AWS
   * API Reference</a></p>
   */
  class EnhancedMetricsConfig
  {
  public:
    AWS_APPSYNC_API EnhancedMetricsConfig() = default;
    AWS_APPSYNC_API EnhancedMetricsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EnhancedMetricsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Controls how resolver metrics will be emitted to CloudWatch. Resolver metrics
     * include:</p> <ul> <li> <p>GraphQL errors: The number of GraphQL errors that
     * occurred.</p> </li> <li> <p>Requests: The number of invocations that occurred
     * during a request. </p> </li> <li> <p>Latency: The time to complete a resolver
     * invocation.</p> </li> <li> <p>Cache hits: The number of cache hits during a
     * request.</p> </li> <li> <p>Cache misses: The number of cache misses during a
     * request.</p> </li> </ul> <p>These metrics can be emitted to CloudWatch per
     * resolver or for all resolvers in the request. Metrics will be recorded by API ID
     * and resolver name. <code>resolverLevelMetricsBehavior</code> accepts one of
     * these values at a time:</p> <ul> <li> <p>
     * <code>FULL_REQUEST_RESOLVER_METRICS</code>: Records and emits metric data for
     * all resolvers in the request.</p> </li> <li> <p>
     * <code>PER_RESOLVER_METRICS</code>: Records and emits metric data for resolvers
     * that have the <code>metricsConfig</code> value set to <code>ENABLED</code>.</p>
     * </li> </ul>
     */
    inline ResolverLevelMetricsBehavior GetResolverLevelMetricsBehavior() const { return m_resolverLevelMetricsBehavior; }
    inline bool ResolverLevelMetricsBehaviorHasBeenSet() const { return m_resolverLevelMetricsBehaviorHasBeenSet; }
    inline void SetResolverLevelMetricsBehavior(ResolverLevelMetricsBehavior value) { m_resolverLevelMetricsBehaviorHasBeenSet = true; m_resolverLevelMetricsBehavior = value; }
    inline EnhancedMetricsConfig& WithResolverLevelMetricsBehavior(ResolverLevelMetricsBehavior value) { SetResolverLevelMetricsBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls how data source metrics will be emitted to CloudWatch. Data source
     * metrics include:</p> <ul> <li> <p>Requests: The number of invocations that
     * occured during a request.</p> </li> <li> <p>Latency: The time to complete a data
     * source invocation.</p> </li> <li> <p>Errors: The number of errors that occurred
     * during a data source invocation.</p> </li> </ul> <p>These metrics can be emitted
     * to CloudWatch per data source or for all data sources in the request. Metrics
     * will be recorded by API ID and data source name.
     * <code>dataSourceLevelMetricsBehavior</code> accepts one of these values at a
     * time:</p> <ul> <li> <p> <code>FULL_REQUEST_DATA_SOURCE_METRICS</code>: Records
     * and emits metric data for all data sources in the request.</p> </li> <li> <p>
     * <code>PER_DATA_SOURCE_METRICS</code>: Records and emits metric data for data
     * sources that have the <code>metricsConfig</code> value set to
     * <code>ENABLED</code>.</p> </li> </ul>
     */
    inline DataSourceLevelMetricsBehavior GetDataSourceLevelMetricsBehavior() const { return m_dataSourceLevelMetricsBehavior; }
    inline bool DataSourceLevelMetricsBehaviorHasBeenSet() const { return m_dataSourceLevelMetricsBehaviorHasBeenSet; }
    inline void SetDataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior value) { m_dataSourceLevelMetricsBehaviorHasBeenSet = true; m_dataSourceLevelMetricsBehavior = value; }
    inline EnhancedMetricsConfig& WithDataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior value) { SetDataSourceLevelMetricsBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Controls how operation metrics will be emitted to CloudWatch. Operation
     * metrics include:</p> <ul> <li> <p>Requests: The number of times a specified
     * GraphQL operation was called.</p> </li> <li> <p>GraphQL errors: The number of
     * GraphQL errors that occurred during a specified GraphQL operation.</p> </li>
     * </ul> <p>Metrics will be recorded by API ID and operation name. You can set the
     * value to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline OperationLevelMetricsConfig GetOperationLevelMetricsConfig() const { return m_operationLevelMetricsConfig; }
    inline bool OperationLevelMetricsConfigHasBeenSet() const { return m_operationLevelMetricsConfigHasBeenSet; }
    inline void SetOperationLevelMetricsConfig(OperationLevelMetricsConfig value) { m_operationLevelMetricsConfigHasBeenSet = true; m_operationLevelMetricsConfig = value; }
    inline EnhancedMetricsConfig& WithOperationLevelMetricsConfig(OperationLevelMetricsConfig value) { SetOperationLevelMetricsConfig(value); return *this;}
    ///@}
  private:

    ResolverLevelMetricsBehavior m_resolverLevelMetricsBehavior{ResolverLevelMetricsBehavior::NOT_SET};
    bool m_resolverLevelMetricsBehaviorHasBeenSet = false;

    DataSourceLevelMetricsBehavior m_dataSourceLevelMetricsBehavior{DataSourceLevelMetricsBehavior::NOT_SET};
    bool m_dataSourceLevelMetricsBehaviorHasBeenSet = false;

    OperationLevelMetricsConfig m_operationLevelMetricsConfig{OperationLevelMetricsConfig::NOT_SET};
    bool m_operationLevelMetricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
