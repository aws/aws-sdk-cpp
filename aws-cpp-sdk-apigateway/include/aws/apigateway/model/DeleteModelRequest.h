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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to delete an existing model in an existing <a>RestApi</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API DeleteModelRequest : public APIGatewayRequest
  {
  public:
    DeleteModelRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline DeleteModelRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline DeleteModelRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> under which the model will be deleted.</p>
     */
    inline DeleteModelRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the model to delete.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model to delete.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to delete.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to delete.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model to delete.</p>
     */
    inline DeleteModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to delete.</p>
     */
    inline DeleteModelRequest& WithModelName(Aws::String&& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to delete.</p>
     */
    inline DeleteModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
