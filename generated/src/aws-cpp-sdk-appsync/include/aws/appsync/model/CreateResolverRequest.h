/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
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
namespace AppSync
{
namespace Model
{

  /**
   */
  class CreateResolverRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateResolverRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolver"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    CreateResolverRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    CreateResolverRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    CreateResolverRequest& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    CreateResolverRequest& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping template to use for requests.</p> <p>A resolver uses a request
     * mapping template to convert a GraphQL expression into a format that a data
     * source can understand. Mapping templates are written in Apache Velocity Template
     * Language (VTL).</p> <p>VTL request mapping templates are optional when using an
     * Lambda data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const { return m_requestMappingTemplate; }
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }
    template<typename RequestMappingTemplateT = Aws::String>
    void SetRequestMappingTemplate(RequestMappingTemplateT&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::forward<RequestMappingTemplateT>(value); }
    template<typename RequestMappingTemplateT = Aws::String>
    CreateResolverRequest& WithRequestMappingTemplate(RequestMappingTemplateT&& value) { SetRequestMappingTemplate(std::forward<RequestMappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping template to use for responses from the data source.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const { return m_responseMappingTemplate; }
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }
    template<typename ResponseMappingTemplateT = Aws::String>
    void SetResponseMappingTemplate(ResponseMappingTemplateT&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::forward<ResponseMappingTemplateT>(value); }
    template<typename ResponseMappingTemplateT = Aws::String>
    CreateResolverRequest& WithResponseMappingTemplate(ResponseMappingTemplateT&& value) { SetResponseMappingTemplate(std::forward<ResponseMappingTemplateT>(value)); return *this;}
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
    inline CreateResolverRequest& WithKind(ResolverKind value) { SetKind(value); return *this;}
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
    CreateResolverRequest& WithPipelineConfig(PipelineConfigT&& value) { SetPipelineConfig(std::forward<PipelineConfigT>(value)); return *this;}
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
    CreateResolverRequest& WithSyncConfig(SyncConfigT&& value) { SetSyncConfig(std::forward<SyncConfigT>(value)); return *this;}
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
    CreateResolverRequest& WithCachingConfig(CachingConfigT&& value) { SetCachingConfig(std::forward<CachingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const { return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline CreateResolverRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const AppSyncRuntime& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = AppSyncRuntime>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = AppSyncRuntime>
    CreateResolverRequest& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
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
    CreateResolverRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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
    inline CreateResolverRequest& WithMetricsConfig(ResolverLevelMetricsConfig value) { SetMetricsConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

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
