/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class ExportApiRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API ExportApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ExportApiRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline const Aws::String& GetExportVersion() const { return m_exportVersion; }
    inline bool ExportVersionHasBeenSet() const { return m_exportVersionHasBeenSet; }
    template<typename ExportVersionT = Aws::String>
    void SetExportVersion(ExportVersionT&& value) { m_exportVersionHasBeenSet = true; m_exportVersion = std::forward<ExportVersionT>(value); }
    template<typename ExportVersionT = Aws::String>
    ExportApiRequest& WithExportVersion(ExportVersionT&& value) { SetExportVersion(std::forward<ExportVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include <a
     * href="https://docs.aws.amazon.com//apigateway/latest/developerguide/api-gateway-swagger-extensions.html">API
     * Gateway extensions</a> in the exported API definition. API Gateway extensions
     * are included by default.</p>
     */
    inline bool GetIncludeExtensions() const { return m_includeExtensions; }
    inline bool IncludeExtensionsHasBeenSet() const { return m_includeExtensionsHasBeenSet; }
    inline void SetIncludeExtensions(bool value) { m_includeExtensionsHasBeenSet = true; m_includeExtensions = value; }
    inline ExportApiRequest& WithIncludeExtensions(bool value) { SetIncludeExtensions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline const Aws::String& GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    template<typename OutputTypeT = Aws::String>
    void SetOutputType(OutputTypeT&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::forward<OutputTypeT>(value); }
    template<typename OutputTypeT = Aws::String>
    ExportApiRequest& WithOutputType(OutputTypeT&& value) { SetOutputType(std::forward<OutputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline const Aws::String& GetSpecification() const { return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    template<typename SpecificationT = Aws::String>
    void SetSpecification(SpecificationT&& value) { m_specificationHasBeenSet = true; m_specification = std::forward<SpecificationT>(value); }
    template<typename SpecificationT = Aws::String>
    ExportApiRequest& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    ExportApiRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_exportVersion;
    bool m_exportVersionHasBeenSet = false;

    bool m_includeExtensions{false};
    bool m_includeExtensionsHasBeenSet = false;

    Aws::String m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::String m_specification;
    bool m_specificationHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
