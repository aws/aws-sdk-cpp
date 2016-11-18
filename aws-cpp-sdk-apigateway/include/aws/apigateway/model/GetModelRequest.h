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
   * <p>Request to list information about a model in an existing <a>RestApi</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API GetModelRequest : public APIGatewayRequest
  {
  public:
    GetModelRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline GetModelRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline GetModelRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Model</a> exists.</p>
     */
    inline GetModelRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(Aws::String&& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline bool GetFlatten() const{ return m_flatten; }

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline void SetFlatten(bool value) { m_flattenHasBeenSet = true; m_flatten = value; }

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline GetModelRequest& WithFlatten(bool value) { SetFlatten(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;
    bool m_flatten;
    bool m_flattenHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
