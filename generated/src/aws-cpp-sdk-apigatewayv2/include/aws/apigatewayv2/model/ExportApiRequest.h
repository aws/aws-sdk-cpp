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
    AWS_APIGATEWAYV2_API ExportApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline ExportApiRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ExportApiRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ExportApiRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline const Aws::String& GetExportVersion() const{ return m_exportVersion; }

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline bool ExportVersionHasBeenSet() const { return m_exportVersionHasBeenSet; }

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline void SetExportVersion(const Aws::String& value) { m_exportVersionHasBeenSet = true; m_exportVersion = value; }

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline void SetExportVersion(Aws::String&& value) { m_exportVersionHasBeenSet = true; m_exportVersion = std::move(value); }

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline void SetExportVersion(const char* value) { m_exportVersionHasBeenSet = true; m_exportVersion.assign(value); }

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline ExportApiRequest& WithExportVersion(const Aws::String& value) { SetExportVersion(value); return *this;}

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline ExportApiRequest& WithExportVersion(Aws::String&& value) { SetExportVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the API Gateway export algorithm. API Gateway uses the latest
     * version by default. Currently, the only supported version is 1.0.</p>
     */
    inline ExportApiRequest& WithExportVersion(const char* value) { SetExportVersion(value); return *this;}


    /**
     * <p>Specifies whether to include <a
     * href="https://docs.aws.amazon.com//apigateway/latest/developerguide/api-gateway-swagger-extensions.html">API
     * Gateway extensions</a> in the exported API definition. API Gateway extensions
     * are included by default.</p>
     */
    inline bool GetIncludeExtensions() const{ return m_includeExtensions; }

    /**
     * <p>Specifies whether to include <a
     * href="https://docs.aws.amazon.com//apigateway/latest/developerguide/api-gateway-swagger-extensions.html">API
     * Gateway extensions</a> in the exported API definition. API Gateway extensions
     * are included by default.</p>
     */
    inline bool IncludeExtensionsHasBeenSet() const { return m_includeExtensionsHasBeenSet; }

    /**
     * <p>Specifies whether to include <a
     * href="https://docs.aws.amazon.com//apigateway/latest/developerguide/api-gateway-swagger-extensions.html">API
     * Gateway extensions</a> in the exported API definition. API Gateway extensions
     * are included by default.</p>
     */
    inline void SetIncludeExtensions(bool value) { m_includeExtensionsHasBeenSet = true; m_includeExtensions = value; }

    /**
     * <p>Specifies whether to include <a
     * href="https://docs.aws.amazon.com//apigateway/latest/developerguide/api-gateway-swagger-extensions.html">API
     * Gateway extensions</a> in the exported API definition. API Gateway extensions
     * are included by default.</p>
     */
    inline ExportApiRequest& WithIncludeExtensions(bool value) { SetIncludeExtensions(value); return *this;}


    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline const Aws::String& GetOutputType() const{ return m_outputType; }

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline void SetOutputType(const Aws::String& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline void SetOutputType(Aws::String&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline void SetOutputType(const char* value) { m_outputTypeHasBeenSet = true; m_outputType.assign(value); }

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline ExportApiRequest& WithOutputType(const Aws::String& value) { SetOutputType(value); return *this;}

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline ExportApiRequest& WithOutputType(Aws::String&& value) { SetOutputType(std::move(value)); return *this;}

    /**
     * <p>The output type of the exported definition file. Valid values are JSON and
     * YAML.</p>
     */
    inline ExportApiRequest& WithOutputType(const char* value) { SetOutputType(value); return *this;}


    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline const Aws::String& GetSpecification() const{ return m_specification; }

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline void SetSpecification(const Aws::String& value) { m_specificationHasBeenSet = true; m_specification = value; }

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline void SetSpecification(Aws::String&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline void SetSpecification(const char* value) { m_specificationHasBeenSet = true; m_specification.assign(value); }

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline ExportApiRequest& WithSpecification(const Aws::String& value) { SetSpecification(value); return *this;}

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline ExportApiRequest& WithSpecification(Aws::String&& value) { SetSpecification(std::move(value)); return *this;}

    /**
     * <p>The version of the API specification to use. OAS30, for OpenAPI 3.0, is the
     * only supported value.</p>
     */
    inline ExportApiRequest& WithSpecification(const char* value) { SetSpecification(value); return *this;}


    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline ExportApiRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline ExportApiRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the API stage to export. If you don't specify this property, a
     * representation of the latest API configuration is exported.</p>
     */
    inline ExportApiRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_exportVersion;
    bool m_exportVersionHasBeenSet = false;

    bool m_includeExtensions;
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
