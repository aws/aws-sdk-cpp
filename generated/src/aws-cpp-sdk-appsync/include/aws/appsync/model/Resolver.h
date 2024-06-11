/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ResolverKind.h>
#include <aws/appsync/model/PipelineConfig.h>
#include <aws/appsync/model/SyncConfig.h>
#include <aws/appsync/model/CachingConfig.h>
#include <aws/appsync/model/AppSyncRuntime.h>
#include <aws/appsync/model/ResolverLevelMetricsConfig.h>
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
   * <p>Describes a resolver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/Resolver">AWS
   * API Reference</a></p>
   */
  class Resolver
  {
  public:
    AWS_APPSYNC_API Resolver();
    AWS_APPSYNC_API Resolver(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Resolver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resolver type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline Resolver& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline Resolver& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline Resolver& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline Resolver& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline Resolver& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline Resolver& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver data source name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline Resolver& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline Resolver& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline Resolver& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetResolverArn() const{ return m_resolverArn; }
    inline bool ResolverArnHasBeenSet() const { return m_resolverArnHasBeenSet; }
    inline void SetResolverArn(const Aws::String& value) { m_resolverArnHasBeenSet = true; m_resolverArn = value; }
    inline void SetResolverArn(Aws::String&& value) { m_resolverArnHasBeenSet = true; m_resolverArn = std::move(value); }
    inline void SetResolverArn(const char* value) { m_resolverArnHasBeenSet = true; m_resolverArn.assign(value); }
    inline Resolver& WithResolverArn(const Aws::String& value) { SetResolverArn(value); return *this;}
    inline Resolver& WithResolverArn(Aws::String&& value) { SetResolverArn(std::move(value)); return *this;}
    inline Resolver& WithResolverArn(const char* value) { SetResolverArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }
    inline Resolver& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}
    inline Resolver& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}
    inline Resolver& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }
    inline Resolver& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}
    inline Resolver& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}
    inline Resolver& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline const ResolverKind& GetKind() const{ return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    inline void SetKind(const ResolverKind& value) { m_kindHasBeenSet = true; m_kind = value; }
    inline void SetKind(ResolverKind&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }
    inline Resolver& WithKind(const ResolverKind& value) { SetKind(value); return *this;}
    inline Resolver& WithKind(ResolverKind&& value) { SetKind(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline const PipelineConfig& GetPipelineConfig() const{ return m_pipelineConfig; }
    inline bool PipelineConfigHasBeenSet() const { return m_pipelineConfigHasBeenSet; }
    inline void SetPipelineConfig(const PipelineConfig& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = value; }
    inline void SetPipelineConfig(PipelineConfig&& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = std::move(value); }
    inline Resolver& WithPipelineConfig(const PipelineConfig& value) { SetPipelineConfig(value); return *this;}
    inline Resolver& WithPipelineConfig(PipelineConfig&& value) { SetPipelineConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline const SyncConfig& GetSyncConfig() const{ return m_syncConfig; }
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }
    inline void SetSyncConfig(const SyncConfig& value) { m_syncConfigHasBeenSet = true; m_syncConfig = value; }
    inline void SetSyncConfig(SyncConfig&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::move(value); }
    inline Resolver& WithSyncConfig(const SyncConfig& value) { SetSyncConfig(value); return *this;}
    inline Resolver& WithSyncConfig(SyncConfig&& value) { SetSyncConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline const CachingConfig& GetCachingConfig() const{ return m_cachingConfig; }
    inline bool CachingConfigHasBeenSet() const { return m_cachingConfigHasBeenSet; }
    inline void SetCachingConfig(const CachingConfig& value) { m_cachingConfigHasBeenSet = true; m_cachingConfig = value; }
    inline void SetCachingConfig(CachingConfig&& value) { m_cachingConfigHasBeenSet = true; m_cachingConfig = std::move(value); }
    inline Resolver& WithCachingConfig(const CachingConfig& value) { SetCachingConfig(value); return *this;}
    inline Resolver& WithCachingConfig(CachingConfig&& value) { SetCachingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const{ return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline Resolver& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const AppSyncRuntime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const AppSyncRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(AppSyncRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline Resolver& WithRuntime(const AppSyncRuntime& value) { SetRuntime(value); return *this;}
    inline Resolver& WithRuntime(AppSyncRuntime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline Resolver& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline Resolver& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline Resolver& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables enhanced resolver metrics for specified resolvers. Note
     * that <code>metricsConfig</code> won't be used unless the
     * <code>resolverLevelMetricsBehavior</code> value is set to
     * <code>PER_RESOLVER_METRICS</code>. If the
     * <code>resolverLevelMetricsBehavior</code> is set to
     * <code>FULL_REQUEST_RESOLVER_METRICS</code> instead, <code>metricsConfig</code>
     * will be ignored. However, you can still set its value.</p> <p>
     * <code>metricsConfig</code> can be <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline const ResolverLevelMetricsConfig& GetMetricsConfig() const{ return m_metricsConfig; }
    inline bool MetricsConfigHasBeenSet() const { return m_metricsConfigHasBeenSet; }
    inline void SetMetricsConfig(const ResolverLevelMetricsConfig& value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = value; }
    inline void SetMetricsConfig(ResolverLevelMetricsConfig&& value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = std::move(value); }
    inline Resolver& WithMetricsConfig(const ResolverLevelMetricsConfig& value) { SetMetricsConfig(value); return *this;}
    inline Resolver& WithMetricsConfig(ResolverLevelMetricsConfig&& value) { SetMetricsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    Aws::String m_resolverArn;
    bool m_resolverArnHasBeenSet = false;

    Aws::String m_requestMappingTemplate;
    bool m_requestMappingTemplateHasBeenSet = false;

    Aws::String m_responseMappingTemplate;
    bool m_responseMappingTemplateHasBeenSet = false;

    ResolverKind m_kind;
    bool m_kindHasBeenSet = false;

    PipelineConfig m_pipelineConfig;
    bool m_pipelineConfigHasBeenSet = false;

    SyncConfig m_syncConfig;
    bool m_syncConfigHasBeenSet = false;

    CachingConfig m_cachingConfig;
    bool m_cachingConfigHasBeenSet = false;

    int m_maxBatchSize;
    bool m_maxBatchSizeHasBeenSet = false;

    AppSyncRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    ResolverLevelMetricsConfig m_metricsConfig;
    bool m_metricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
