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
   * <p>A request to change information about an <a>ClientCertificate</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API UpdateClientCertificateRequest : public APIGatewayRequest
  {
  public:
    UpdateClientCertificateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline UpdateClientCertificateRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline UpdateClientCertificateRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of the <a>ClientCertificate</a> resource to be updated.</p>
     */
    inline UpdateClientCertificateRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

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
    inline UpdateClientCertificateRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateClientCertificateRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateClientCertificateRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateClientCertificateRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

  private:
    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;
    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
