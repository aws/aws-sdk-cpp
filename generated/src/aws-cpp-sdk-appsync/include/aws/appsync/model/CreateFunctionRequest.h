/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/SyncConfig.h>
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
  class CreateFunctionRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunction"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The GraphQL API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline CreateFunctionRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline CreateFunctionRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline CreateFunctionRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline CreateFunctionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline CreateFunctionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> name. The function name does not have to be
     * unique.</p>
     */
    inline CreateFunctionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline CreateFunctionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline CreateFunctionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline CreateFunctionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline CreateFunctionRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline CreateFunctionRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline CreateFunctionRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline CreateFunctionRequest& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline CreateFunctionRequest& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline CreateFunctionRequest& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline CreateFunctionRequest& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline CreateFunctionRequest& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline CreateFunctionRequest& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}


    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline CreateFunctionRequest& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline CreateFunctionRequest& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}

    /**
     * <p>The <code>version</code> of the request mapping template. Currently, the
     * supported value is 2018-05-29. Note that when using VTL and mapping templates,
     * the <code>functionVersion</code> is required.</p>
     */
    inline CreateFunctionRequest& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}


    
    inline const SyncConfig& GetSyncConfig() const{ return m_syncConfig; }

    
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }

    
    inline void SetSyncConfig(const SyncConfig& value) { m_syncConfigHasBeenSet = true; m_syncConfig = value; }

    
    inline void SetSyncConfig(SyncConfig&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::move(value); }

    
    inline CreateFunctionRequest& WithSyncConfig(const SyncConfig& value) { SetSyncConfig(value); return *this;}

    
    inline CreateFunctionRequest& WithSyncConfig(SyncConfig&& value) { SetSyncConfig(std::move(value)); return *this;}


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
    inline CreateFunctionRequest& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}


    
    inline const AppSyncRuntime& GetRuntime() const{ return m_runtime; }

    
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    
    inline void SetRuntime(const AppSyncRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    
    inline void SetRuntime(AppSyncRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    
    inline CreateFunctionRequest& WithRuntime(const AppSyncRuntime& value) { SetRuntime(value); return *this;}

    
    inline CreateFunctionRequest& WithRuntime(AppSyncRuntime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline CreateFunctionRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline CreateFunctionRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline CreateFunctionRequest& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    Aws::String m_requestMappingTemplate;
    bool m_requestMappingTemplateHasBeenSet = false;

    Aws::String m_responseMappingTemplate;
    bool m_responseMappingTemplateHasBeenSet = false;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet = false;

    SyncConfig m_syncConfig;
    bool m_syncConfigHasBeenSet = false;

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
