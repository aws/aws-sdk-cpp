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
  class ResetEnabledControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API ResetEnabledControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetEnabledControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the enabled control to be reset.</p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const { return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    template<typename EnabledControlIdentifierT = Aws::String>
    void SetEnabledControlIdentifier(EnabledControlIdentifierT&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::forward<EnabledControlIdentifierT>(value); }
    template<typename EnabledControlIdentifierT = Aws::String>
    ResetEnabledControlRequest& WithEnabledControlIdentifier(EnabledControlIdentifierT&& value) { SetEnabledControlIdentifier(std::forward<EnabledControlIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
