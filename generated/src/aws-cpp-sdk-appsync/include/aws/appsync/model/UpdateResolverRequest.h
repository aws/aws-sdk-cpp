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
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class UpdateResolverRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolver"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The new type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The new type name.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The new field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The new field name.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The new data source name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The new data source name.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The new request mapping template.</p> <p>A resolver uses a request mapping
     * template to convert a GraphQL expression into a format that a data source can
     * understand. Mapping templates are written in Apache Velocity Template Language
     * (VTL).</p> <p>VTL request mapping templates are optional when using an Lambda
     * data source. For all other data sources, VTL request and response mapping
     * templates are required.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The new response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}


    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline const ResolverKind& GetKind() const{ return m_kind; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline void SetKind(const ResolverKind& value) { m_kindHasBeenSet = true; m_kind = value; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline void SetKind(ResolverKind&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline UpdateResolverRequest& WithKind(const ResolverKind& value) { SetKind(value); return *this;}

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. You can use a UNIT resolver to run a
     * GraphQL query against a single data source.</p> </li> <li> <p> <b>PIPELINE</b>:
     * A PIPELINE resolver type. You can use a PIPELINE resolver to invoke a series of
     * <code>Function</code> objects in a serial manner. You can use a pipeline
     * resolver to run a GraphQL query against multiple data sources.</p> </li> </ul>
     */
    inline UpdateResolverRequest& WithKind(ResolverKind&& value) { SetKind(std::move(value)); return *this;}


    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline const PipelineConfig& GetPipelineConfig() const{ return m_pipelineConfig; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline bool PipelineConfigHasBeenSet() const { return m_pipelineConfigHasBeenSet; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline void SetPipelineConfig(const PipelineConfig& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = value; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline void SetPipelineConfig(PipelineConfig&& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = std::move(value); }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline UpdateResolverRequest& WithPipelineConfig(const PipelineConfig& value) { SetPipelineConfig(value); return *this;}

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline UpdateResolverRequest& WithPipelineConfig(PipelineConfig&& value) { SetPipelineConfig(std::move(value)); return *this;}


    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline const SyncConfig& GetSyncConfig() const{ return m_syncConfig; }

    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }

    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline void SetSyncConfig(const SyncConfig& value) { m_syncConfigHasBeenSet = true; m_syncConfig = value; }

    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline void SetSyncConfig(SyncConfig&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::move(value); }

    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline UpdateResolverRequest& WithSyncConfig(const SyncConfig& value) { SetSyncConfig(value); return *this;}

    /**
     * <p>The <code>SyncConfig</code> for a resolver attached to a versioned data
     * source.</p>
     */
    inline UpdateResolverRequest& WithSyncConfig(SyncConfig&& value) { SetSyncConfig(std::move(value)); return *this;}


    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline const CachingConfig& GetCachingConfig() const{ return m_cachingConfig; }

    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline bool CachingConfigHasBeenSet() const { return m_cachingConfigHasBeenSet; }

    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline void SetCachingConfig(const CachingConfig& value) { m_cachingConfigHasBeenSet = true; m_cachingConfig = value; }

    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline void SetCachingConfig(CachingConfig&& value) { m_cachingConfigHasBeenSet = true; m_cachingConfig = std::move(value); }

    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline UpdateResolverRequest& WithCachingConfig(const CachingConfig& value) { SetCachingConfig(value); return *this;}

    /**
     * <p>The caching configuration for the resolver.</p>
     */
    inline UpdateResolverRequest& WithCachingConfig(CachingConfig&& value) { SetCachingConfig(std::move(value)); return *this;}


    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const{ return m_maxBatchSize; }

    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }

    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }

    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline UpdateResolverRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}


    
    inline const AppSyncRuntime& GetRuntime() const{ return m_runtime; }

    
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    
    inline void SetRuntime(const AppSyncRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    
    inline void SetRuntime(AppSyncRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    
    inline UpdateResolverRequest& WithRuntime(const AppSyncRuntime& value) { SetRuntime(value); return *this;}

    
    inline UpdateResolverRequest& WithRuntime(AppSyncRuntime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline UpdateResolverRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline UpdateResolverRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The <code>resolver</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline UpdateResolverRequest& WithCode(const char* value) { SetCode(value); return *this;}

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
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
