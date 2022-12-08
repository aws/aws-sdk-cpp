/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/PatchOperation.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Updates an existing VpcLink of a specified identifier.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class UpdateVpcLinkRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcLink"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline UpdateVpcLinkRequest& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline UpdateVpcLinkRequest& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline UpdateVpcLinkRequest& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}


    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline bool PatchOperationsHasBeenSet() const { return m_patchOperationsHasBeenSet; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = std::move(value); }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateVpcLinkRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateVpcLinkRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(std::move(value)); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateVpcLinkRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateVpcLinkRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
