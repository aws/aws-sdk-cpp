/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class GetControlOperationRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API GetControlOperationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetControlOperation"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    GetControlOperationRequest& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
