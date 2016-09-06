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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/PatchOperation.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to update an existing model in an existing <a>RestApi</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API UpdateModelRequest : public APIGatewayRequest
  {
  public:
    UpdateModelRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline UpdateModelRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline UpdateModelRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the model exists.</p>
     */
    inline UpdateModelRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the model to update.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to update.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(Aws::String&& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to update.</p>
     */
    inline UpdateModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateModelRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateModelRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateModelRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateModelRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;
    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
