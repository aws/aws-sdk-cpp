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
  class GetEnabledControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API GetEnabledControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEnabledControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const{ return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    inline void SetEnabledControlIdentifier(const Aws::String& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = value; }
    inline void SetEnabledControlIdentifier(Aws::String&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::move(value); }
    inline void SetEnabledControlIdentifier(const char* value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier.assign(value); }
    inline GetEnabledControlRequest& WithEnabledControlIdentifier(const Aws::String& value) { SetEnabledControlIdentifier(value); return *this;}
    inline GetEnabledControlRequest& WithEnabledControlIdentifier(Aws::String&& value) { SetEnabledControlIdentifier(std::move(value)); return *this;}
    inline GetEnabledControlRequest& WithEnabledControlIdentifier(const char* value) { SetEnabledControlIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
