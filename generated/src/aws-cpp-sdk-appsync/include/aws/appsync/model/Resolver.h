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
    AWS_APPSYNC_API Resolver() = default;
    AWS_APPSYNC_API Resolver(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Resolver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resolver type name.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    Resolver& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver field name.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    Resolver& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver data source name.</p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    Resolver& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetResolverArn() const { return m_resolverArn; }
    inline bool ResolverArnHasBeenSet() const { return m_resolverArnHasBeenSet; }
    template<typename ResolverArnT = Aws::String>
    void SetResolverArn(ResolverArnT&& value) { m_resolverArnHasBeenSet = true; m_resolverArn = std::forward<ResolverArnT>(value); }
    template<typename ResolverArnT = Aws::String>
    Resolver& WithResolverArn(ResolverArnT&& value) { SetResolverArn(std::forward<ResolverArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const { return m_requestMappingTemplate; }
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }
    template<typename RequestMappingTemplateT = Aws::String>
    void SetRequestMappingTemplate(RequestMappingTemplateT&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::forward<RequestMappingTemplateT>(value); }
    template<typename RequestMappingTemplateT = Aws::String>
    Resolver& WithRequestMappingTemplate(RequestMappingTemplateT&& value) { SetRequestMappingTemplate(std::forward<RequestMappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const { return m_responseMappingTemplate; }
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }
    template<typename ResponseMappingTemplateT = Aws::String>
    void SetResponseMappingTemplate(ResponseMappingTemplateT&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::forward<ResponseMappingTemplateT>(value); }
    template<typename ResponseMappingTemplateT = Aws::String>
    Resolver& WithResponseMappingTemplate(ResponseMappingTemplateT&& value) { SetResponseMappingTemplate(std::forward<ResponseMappingTemplateT>(value)); return *this;}
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
    inline ResolverKind GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    inline void SetKind(ResolverKind value) { m_kindHasBeenSet = true; m_kind = value; }
    inline Resolver& WithKind(ResolverKind value) { SetKind(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline const PipelineConfig& GetPipelineConfig() const { return m_pipelineConfig; }
    inline bool PipelineConfigHasBeenSet() const { return m_pipelineConfigHasBeenSet; }
    template<typename PipelineConfigT = PipelineConfig>
    void SetPipelineConfig(PipelineConfigT&& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = std::forward<PipelineConfigT>(value); }
    template<typename PipelineConfigT = PipelineConfig>
    Resolver& WithPipelineConfig(PipelineConfigT&& value) { SetPipelineConfig(std::forward<PipelineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline const SyncConfig& GetSyncConfig() const { return m_syncConfig; }
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }
    template<typename SyncConfigT = SyncConfig>
    void SetSyncConfig(SyncConfigT&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::forward<SyncConfigT>(value); }
    template<typename SyncConfigT = SyncConfig>
    Resolver& WithSyncConfig(SyncConfigT&& value) { SetSyncConfig(std::forward<SyncConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline const CachingConfig& GetCachingConfig() const { return m_cachingConfig; }
    inline bool CachingConfigHasBeenSet() const { return m_cachingConfigHasBeenSet; }
    template<typename CachingConfigT = CachingConfig>
    void SetCachingConfig(CachingConfigT&& value) { m_cachingConfigHasBeenSet = true; m_cachingConfig = std::forward<CachingConfigT>(value); }
    template<typename CachingConfigT = CachingConfig>
    Resolver& WithCachingConfig(CachingConfigT&& value) { SetCachingConfig(std::forward<CachingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const { return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline Resolver& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const AppSyncRuntime& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = AppSyncRuntime>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = AppSyncRuntime>
    Resolver& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    Resolver& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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
    inline ResolverLevelMetricsConfig GetMetricsConfig() const { return m_metricsConfig; }
    inline bool MetricsConfigHasBeenSet() const { return m_metricsConfigHasBeenSet; }
    inline void SetMetricsConfig(ResolverLevelMetricsConfig value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = value; }
    inline Resolver& WithMetricsConfig(ResolverLevelMetricsConfig value) { SetMetricsConfig(value); return *this;}
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

    ResolverKind m_kind{ResolverKind::NOT_SET};
    bool m_kindHasBeenSet = false;

    PipelineConfig m_pipelineConfig;
    bool m_pipelineConfigHasBeenSet = false;

    SyncConfig m_syncConfig;
    bool m_syncConfigHasBeenSet = false;

    CachingConfig m_cachingConfig;
    bool m_cachingConfigHasBeenSet = false;

    int m_maxBatchSize{0};
    bool m_maxBatchSizeHasBeenSet = false;

    AppSyncRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    ResolverLevelMetricsConfig m_metricsConfig{ResolverLevelMetricsConfig::NOT_SET};
    bool m_metricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
