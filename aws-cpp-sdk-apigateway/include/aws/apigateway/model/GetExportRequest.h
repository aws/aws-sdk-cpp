/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

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
   * <p>Request a new export of a <a>RestApi</a> for a particular <a>Stage</a>.</p>
   */
  class AWS_APIGATEWAY_API GetExportRequest : public APIGatewayRequest
  {
  public:
    GetExportRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline GetExportRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline GetExportRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> to be exported.</p>
     */
    inline GetExportRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline GetExportRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline GetExportRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that will be exported.</p>
     */
    inline GetExportRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline const Aws::String& GetExportType() const{ return m_exportType; }

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline void SetExportType(const Aws::String& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline void SetExportType(Aws::String&& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline void SetExportType(const char* value) { m_exportTypeHasBeenSet = true; m_exportType.assign(value); }

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline GetExportRequest& WithExportType(const Aws::String& value) { SetExportType(value); return *this;}

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline GetExportRequest& WithExportType(Aws::String&& value) { SetExportType(value); return *this;}

    /**
     * <p>The type of export. Currently only 'swagger' is supported.</p>
     */
    inline GetExportRequest& WithExportType(const char* value) { SetExportType(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * export, depending on the requested <code>exportType</code>. For
     * <code>exportType</code> <code>swagger</code>, any combination of the following
     * parameters are supported: <code>integrations</code> will export the API with
     * x-amazon-apigateway-integration extensions. <code>authorizers</code> will export
     * the API with x-amazon-apigateway-authorizer extensions. <code>postman</code>
     * will export the API with Postman extensions, allowing for import to the Postman
     * tool</p>
     */
    inline GetExportRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline const Aws::String& GetAccepts() const{ return m_accepts; }

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline void SetAccepts(const Aws::String& value) { m_acceptsHasBeenSet = true; m_accepts = value; }

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline void SetAccepts(Aws::String&& value) { m_acceptsHasBeenSet = true; m_accepts = value; }

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline void SetAccepts(const char* value) { m_acceptsHasBeenSet = true; m_accepts.assign(value); }

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline GetExportRequest& WithAccepts(const Aws::String& value) { SetAccepts(value); return *this;}

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline GetExportRequest& WithAccepts(Aws::String&& value) { SetAccepts(value); return *this;}

    /**
     * <p>The content-type of the export, for example <code>application/json</code>.
     * Currently <code>application/json</code> and <code>application/yaml</code> are
     * supported for <code>exportType</code> of <code>swagger</code>. This should be
     * specified in the <code>Accept</code> header for direct API requests.</p>
     */
    inline GetExportRequest& WithAccepts(const char* value) { SetAccepts(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;
    Aws::String m_exportType;
    bool m_exportTypeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_accepts;
    bool m_acceptsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
