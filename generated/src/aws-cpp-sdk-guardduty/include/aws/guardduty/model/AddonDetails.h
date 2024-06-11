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
    AWS_GUARDDUTY_API AddonDetails();
    AWS_GUARDDUTY_API AddonDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AddonDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version of the installed EKS add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }
    inline AddonDetails& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline AddonDetails& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline AddonDetails& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the installed EKS add-on.</p>
     */
    inline const Aws::String& GetAddonStatus() const{ return m_addonStatus; }
    inline bool AddonStatusHasBeenSet() const { return m_addonStatusHasBeenSet; }
    inline void SetAddonStatus(const Aws::String& value) { m_addonStatusHasBeenSet = true; m_addonStatus = value; }
    inline void SetAddonStatus(Aws::String&& value) { m_addonStatusHasBeenSet = true; m_addonStatus = std::move(value); }
    inline void SetAddonStatus(const char* value) { m_addonStatusHasBeenSet = true; m_addonStatus.assign(value); }
    inline AddonDetails& WithAddonStatus(const Aws::String& value) { SetAddonStatus(value); return *this;}
    inline AddonDetails& WithAddonStatus(Aws::String&& value) { SetAddonStatus(std::move(value)); return *this;}
    inline AddonDetails& WithAddonStatus(const char* value) { SetAddonStatus(value); return *this;}
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
