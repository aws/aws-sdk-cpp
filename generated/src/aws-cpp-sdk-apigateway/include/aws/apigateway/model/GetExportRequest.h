/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request a new export of a RestApi for a particular Stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetExportRequest">AWS
   * API Reference</a></p>
   */
  class GetExportRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExport"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_APIGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    GetExportRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Stage that will be exported.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    GetExportRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of export. Acceptable values are 'oas30' for OpenAPI 3.0.x and
     * 'swagger' for Swagger/OpenAPI 2.0.</p>
     */
    inline const Aws::String& GetExportType() const { return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    template<typename ExportTypeT = Aws::String>
    void SetExportType(ExportTypeT&& value) { m_exportTypeHasBeenSet = true; m_exportType = std::forward<ExportTypeT>(value); }
    template<typename ExportTypeT = Aws::String>
    GetExportRequest& WithExportType(ExportTypeT&& value) { SetExportType(std::forward<ExportTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>oas30</code> and <code>swagger</code>, any
     * combination of the following parameters are supported:
     * <code>extensions='integrations'</code> or <code>extensions='apigateway'</code>
     * will export the API with x-amazon-apigateway-integration extensions.
     * <code>extensions='authorizers'</code> will export the API with
     * x-amazon-apigateway-authorizer extensions. <code>postman</code> will export the
     * API with Postman extensions, allowing for import to the Postman tool</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    GetExportRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    GetExportRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of<code>oas30</code> and
     * <code>swagger</code>. This should be specified in the <code>Accept</code> header
     * for direct API requests.</p>
     */
    inline const Aws::String& GetAccepts() const { return m_accepts; }
    inline bool AcceptsHasBeenSet() const { return m_acceptsHasBeenSet; }
    template<typename AcceptsT = Aws::String>
    void SetAccepts(AcceptsT&& value) { m_acceptsHasBeenSet = true; m_accepts = std::forward<AcceptsT>(value); }
    template<typename AcceptsT = Aws::String>
    GetExportRequest& WithAccepts(AcceptsT&& value) { SetAccepts(std::forward<AcceptsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_exportType;
    bool m_exportTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_accepts;
    bool m_acceptsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
