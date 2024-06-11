/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/SyncConfig.h>
#include <aws/appsync/model/AppSyncRuntime.h>
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
   * <p>A function is a reusable entity. You can use multiple functions to compose
   * the resolver logic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class FunctionConfiguration
  {
  public:
    AWS_APPSYNC_API FunctionConfiguration();
    AWS_APPSYNC_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID representing the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetFunctionId() const{ return m_functionId; }
    inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
    inline void SetFunctionId(const Aws::String& value) { m_functionIdHasBeenSet = true; m_functionId = value; }
    inline void SetFunctionId(Aws::String&& value) { m_functionIdHasBeenSet = true; m_functionId = std::move(value); }
    inline void SetFunctionId(const char* value) { m_functionIdHasBeenSet = true; m_functionId.assign(value); }
    inline FunctionConfiguration& WithFunctionId(const Aws::String& value) { SetFunctionId(value); return *this;}
    inline FunctionConfiguration& WithFunctionId(Aws::String&& value) { SetFunctionId(std::move(value)); return *this;}
    inline FunctionConfiguration& WithFunctionId(const char* value) { SetFunctionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }
    inline FunctionConfiguration& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}
    inline FunctionConfiguration& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}
    inline FunctionConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FunctionConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FunctionConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FunctionConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FunctionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FunctionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FunctionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline FunctionConfiguration& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline FunctionConfiguration& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline FunctionConfiguration& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }
    inline FunctionConfiguration& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}
    inline FunctionConfiguration& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}
    inline FunctionConfiguration& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }
    inline FunctionConfiguration& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}
    inline FunctionConfiguration& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}
    inline FunctionConfiguration& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the request mapping template. Currently, only the 2018-05-29
     * version of the template is supported.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }
    inline FunctionConfiguration& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}
    inline FunctionConfiguration& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}
    inline FunctionConfiguration& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const SyncConfig& GetSyncConfig() const{ return m_syncConfig; }
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }
    inline void SetSyncConfig(const SyncConfig& value) { m_syncConfigHasBeenSet = true; m_syncConfig = value; }
    inline void SetSyncConfig(SyncConfig&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::move(value); }
    inline FunctionConfiguration& WithSyncConfig(const SyncConfig& value) { SetSyncConfig(value); return *this;}
    inline FunctionConfiguration& WithSyncConfig(SyncConfig&& value) { SetSyncConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const{ return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline FunctionConfiguration& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const AppSyncRuntime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const AppSyncRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(AppSyncRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline FunctionConfiguration& WithRuntime(const AppSyncRuntime& value) { SetRuntime(value); return *this;}
    inline FunctionConfiguration& WithRuntime(AppSyncRuntime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline FunctionConfiguration& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline FunctionConfiguration& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline FunctionConfiguration& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}
  private:

    Aws::String m_functionId;
    bool m_functionIdHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

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
