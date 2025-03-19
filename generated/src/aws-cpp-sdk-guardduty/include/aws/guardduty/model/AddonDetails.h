/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the installed EKS add-on (GuardDuty security
   * agent).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AddonDetails">AWS
   * API Reference</a></p>
   */
  class AddonDetails
  {
  public:
    AWS_GUARDDUTY_API AddonDetails() = default;
    AWS_GUARDDUTY_API AddonDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AddonDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version of the installed EKS add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    AddonDetails& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the installed EKS add-on.</p>
     */
    inline const Aws::String& GetAddonStatus() const { return m_addonStatus; }
    inline bool AddonStatusHasBeenSet() const { return m_addonStatusHasBeenSet; }
    template<typename AddonStatusT = Aws::String>
    void SetAddonStatus(AddonStatusT&& value) { m_addonStatusHasBeenSet = true; m_addonStatus = std::forward<AddonStatusT>(value); }
    template<typename AddonStatusT = Aws::String>
    AddonDetails& WithAddonStatus(AddonStatusT&& value) { SetAddonStatus(std::forward<AddonStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::String m_addonStatus;
    bool m_addonStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
