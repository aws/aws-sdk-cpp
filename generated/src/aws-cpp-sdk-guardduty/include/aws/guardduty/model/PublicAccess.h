/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/PermissionConfiguration.h>
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
   * <p>Describes the public access policies that apply to the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PublicAccess">AWS
   * API Reference</a></p>
   */
  class PublicAccess
  {
  public:
    AWS_GUARDDUTY_API PublicAccess() = default;
    AWS_GUARDDUTY_API PublicAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline const PermissionConfiguration& GetPermissionConfiguration() const { return m_permissionConfiguration; }
    inline bool PermissionConfigurationHasBeenSet() const { return m_permissionConfigurationHasBeenSet; }
    template<typename PermissionConfigurationT = PermissionConfiguration>
    void SetPermissionConfiguration(PermissionConfigurationT&& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = std::forward<PermissionConfigurationT>(value); }
    template<typename PermissionConfigurationT = PermissionConfiguration>
    PublicAccess& WithPermissionConfiguration(PermissionConfigurationT&& value) { SetPermissionConfiguration(std::forward<PermissionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline const Aws::String& GetEffectivePermission() const { return m_effectivePermission; }
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }
    template<typename EffectivePermissionT = Aws::String>
    void SetEffectivePermission(EffectivePermissionT&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::forward<EffectivePermissionT>(value); }
    template<typename EffectivePermissionT = Aws::String>
    PublicAccess& WithEffectivePermission(EffectivePermissionT&& value) { SetEffectivePermission(std::forward<EffectivePermissionT>(value)); return *this;}
    ///@}
  private:

    PermissionConfiguration m_permissionConfiguration;
    bool m_permissionConfigurationHasBeenSet = false;

    Aws::String m_effectivePermission;
    bool m_effectivePermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
