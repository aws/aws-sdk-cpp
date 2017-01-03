﻿/*
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
   * <p>Updates an existing documentation version of an API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationVersionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateDocumentationVersionRequest : public APIGatewayRequest
  {
  public:
    UpdateDocumentationVersionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-updated documentation
     * version.</p>
     */
    inline UpdateDocumentationVersionRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}

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
    inline UpdateDocumentationVersionRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateDocumentationVersionRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateDocumentationVersionRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateDocumentationVersionRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet;
    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
