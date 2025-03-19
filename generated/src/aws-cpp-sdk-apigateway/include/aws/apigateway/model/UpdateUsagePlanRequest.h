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
   * <p>The PATCH request to update a usage plan of a given plan Id.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsagePlanRequest">AWS
   * API Reference</a></p>
   */
  class UpdateUsagePlanRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateUsagePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUsagePlan"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Id of the to-be-updated usage plan.</p>
     */
    inline const Aws::String& GetUsagePlanId() const { return m_usagePlanId; }
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }
    template<typename UsagePlanIdT = Aws::String>
    void SetUsagePlanId(UsagePlanIdT&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::forward<UsagePlanIdT>(value); }
    template<typename UsagePlanIdT = Aws::String>
    UpdateUsagePlanRequest& WithUsagePlanId(UsagePlanIdT&& value) { SetUsagePlanId(std::forward<UsagePlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const { return m_patchOperations; }
    inline bool PatchOperationsHasBeenSet() const { return m_patchOperationsHasBeenSet; }
    template<typename PatchOperationsT = Aws::Vector<PatchOperation>>
    void SetPatchOperations(PatchOperationsT&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = std::forward<PatchOperationsT>(value); }
    template<typename PatchOperationsT = Aws::Vector<PatchOperation>>
    UpdateUsagePlanRequest& WithPatchOperations(PatchOperationsT&& value) { SetPatchOperations(std::forward<PatchOperationsT>(value)); return *this;}
    template<typename PatchOperationsT = PatchOperation>
    UpdateUsagePlanRequest& AddPatchOperations(PatchOperationsT&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.emplace_back(std::forward<PatchOperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
