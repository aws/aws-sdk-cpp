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
    AWS_APPSYNC_API FunctionConfiguration() = default;
    AWS_APPSYNC_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID representing the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetFunctionId() const { return m_functionId; }
    inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
    template<typename FunctionIdT = Aws::String>
    void SetFunctionId(FunctionIdT&& value) { m_functionIdHasBeenSet = true; m_functionId = std::forward<FunctionIdT>(value); }
    template<typename FunctionIdT = Aws::String>
    FunctionConfiguration& WithFunctionId(FunctionIdT&& value) { SetFunctionId(std::forward<FunctionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    FunctionConfiguration& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Function</code> object.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FunctionConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FunctionConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    FunctionConfiguration& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const { return m_requestMappingTemplate; }
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }
    template<typename RequestMappingTemplateT = Aws::String>
    void SetRequestMappingTemplate(RequestMappingTemplateT&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::forward<RequestMappingTemplateT>(value); }
    template<typename RequestMappingTemplateT = Aws::String>
    FunctionConfiguration& WithRequestMappingTemplate(RequestMappingTemplateT&& value) { SetRequestMappingTemplate(std::forward<RequestMappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const { return m_responseMappingTemplate; }
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }
    template<typename ResponseMappingTemplateT = Aws::String>
    void SetResponseMappingTemplate(ResponseMappingTemplateT&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::forward<ResponseMappingTemplateT>(value); }
    template<typename ResponseMappingTemplateT = Aws::String>
    FunctionConfiguration& WithResponseMappingTemplate(ResponseMappingTemplateT&& value) { SetResponseMappingTemplate(std::forward<ResponseMappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the request mapping template. Currently, only the 2018-05-29
     * version of the template is supported.</p>
     */
    inline const Aws::String& GetFunctionVersion() const { return m_functionVersion; }
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }
    template<typename FunctionVersionT = Aws::String>
    void SetFunctionVersion(FunctionVersionT&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::forward<FunctionVersionT>(value); }
    template<typename FunctionVersionT = Aws::String>
    FunctionConfiguration& WithFunctionVersion(FunctionVersionT&& value) { SetFunctionVersion(std::forward<FunctionVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SyncConfig& GetSyncConfig() const { return m_syncConfig; }
    inline bool SyncConfigHasBeenSet() const { return m_syncConfigHasBeenSet; }
    template<typename SyncConfigT = SyncConfig>
    void SetSyncConfig(SyncConfigT&& value) { m_syncConfigHasBeenSet = true; m_syncConfig = std::forward<SyncConfigT>(value); }
    template<typename SyncConfigT = SyncConfig>
    FunctionConfiguration& WithSyncConfig(SyncConfigT&& value) { SetSyncConfig(std::forward<SyncConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum batching size for a resolver.</p>
     */
    inline int GetMaxBatchSize() const { return m_maxBatchSize; }
    inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
    inline void SetMaxBatchSize(int value) { m_maxBatchSizeHasBeenSet = true; m_maxBatchSize = value; }
    inline FunctionConfiguration& WithMaxBatchSize(int value) { SetMaxBatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const AppSyncRuntime& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = AppSyncRuntime>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = AppSyncRuntime>
    FunctionConfiguration& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>function</code> code that contains the request and response
     * functions. When code is used, the <code>runtime</code> is required. The
     * <code>runtime</code> value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    FunctionConfiguration& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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

    int m_maxBatchSize{0};
    bool m_maxBatchSizeHasBeenSet = false;

    AppSyncRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
