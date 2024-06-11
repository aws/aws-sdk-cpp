﻿/**
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
  class DisableBaselineRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API DisableBaselineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableBaseline"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the <code>EnabledBaseline</code> resource to be deactivated, in
     * ARN format.</p>
     */
    inline const Aws::String& GetEnabledBaselineIdentifier() const{ return m_enabledBaselineIdentifier; }
    inline bool EnabledBaselineIdentifierHasBeenSet() const { return m_enabledBaselineIdentifierHasBeenSet; }
    inline void SetEnabledBaselineIdentifier(const Aws::String& value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier = value; }
    inline void SetEnabledBaselineIdentifier(Aws::String&& value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier = std::move(value); }
    inline void SetEnabledBaselineIdentifier(const char* value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier.assign(value); }
    inline DisableBaselineRequest& WithEnabledBaselineIdentifier(const Aws::String& value) { SetEnabledBaselineIdentifier(value); return *this;}
    inline DisableBaselineRequest& WithEnabledBaselineIdentifier(Aws::String&& value) { SetEnabledBaselineIdentifier(std::move(value)); return *this;}
    inline DisableBaselineRequest& WithEnabledBaselineIdentifier(const char* value) { SetEnabledBaselineIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_enabledBaselineIdentifier;
    bool m_enabledBaselineIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
