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
    AWS_APIGATEWAY_API GetExportRequest();

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
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline GetExportRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline GetExportRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline GetExportRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Stage that will be exported.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline GetExportRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline GetExportRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline GetExportRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of export. Acceptable values are 'oas30' for OpenAPI 3.0.x and
     * 'swagger' for Swagger/OpenAPI 2.0.</p>
     */
    inline const Aws::String& GetExportType() const{ return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    inline void SetExportType(const Aws::String& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }
    inline void SetExportType(Aws::String&& value) { m_exportTypeHasBeenSet = true; m_exportType = std::move(value); }
    inline void SetExportType(const char* value) { m_exportTypeHasBeenSet = true; m_exportType.assign(value); }
    inline GetExportRequest& WithExportType(const Aws::String& value) { SetExportType(value); return *this;}
    inline GetExportRequest& WithExportType(Aws::String&& value) { SetExportType(std::move(value)); return *this;}
    inline GetExportRequest& WithExportType(const char* value) { SetExportType(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline GetExportRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline GetExportRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetExportRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline GetExportRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline GetExportRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetExportRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetExportRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetExportRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline GetExportRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of<code>oas30</code> and
     * <code>swagger</code>. This should be specified in the <code>Accept</code> header
     * for direct API requests.</p>
     */
    inline const Aws::String& GetAccepts() const{ return m_accepts; }
    inline bool AcceptsHasBeenSet() const { return m_acceptsHasBeenSet; }
    inline void SetAccepts(const Aws::String& value) { m_acceptsHasBeenSet = true; m_accepts = value; }
    inline void SetAccepts(Aws::String&& value) { m_acceptsHasBeenSet = true; m_accepts = std::move(value); }
    inline void SetAccepts(const char* value) { m_acceptsHasBeenSet = true; m_accepts.assign(value); }
    inline GetExportRequest& WithAccepts(const Aws::String& value) { SetAccepts(value); return *this;}
    inline GetExportRequest& WithAccepts(Aws::String&& value) { SetAccepts(std::move(value)); return *this;}
    inline GetExportRequest& WithAccepts(const char* value) { SetAccepts(value); return *this;}
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
