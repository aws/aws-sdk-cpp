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
    AWS_GUARDDUTY_API PublicAccess();
    AWS_GUARDDUTY_API PublicAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline const PermissionConfiguration& GetPermissionConfiguration() const{ return m_permissionConfiguration; }

    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline bool PermissionConfigurationHasBeenSet() const { return m_permissionConfigurationHasBeenSet; }

    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline void SetPermissionConfiguration(const PermissionConfiguration& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = value; }

    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline void SetPermissionConfiguration(PermissionConfiguration&& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = std::move(value); }

    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline PublicAccess& WithPermissionConfiguration(const PermissionConfiguration& value) { SetPermissionConfiguration(value); return *this;}

    /**
     * <p>Contains information about how permissions are configured for the S3
     * bucket.</p>
     */
    inline PublicAccess& WithPermissionConfiguration(PermissionConfiguration&& value) { SetPermissionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline const Aws::String& GetEffectivePermission() const{ return m_effectivePermission; }

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline void SetEffectivePermission(const Aws::String& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = value; }

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline void SetEffectivePermission(Aws::String&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::move(value); }

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline void SetEffectivePermission(const char* value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission.assign(value); }

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline PublicAccess& WithEffectivePermission(const Aws::String& value) { SetEffectivePermission(value); return *this;}

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline PublicAccess& WithEffectivePermission(Aws::String&& value) { SetEffectivePermission(std::move(value)); return *this;}

    /**
     * <p>Describes the effective permission on this bucket after factoring all
     * attached policies.</p>
     */
    inline PublicAccess& WithEffectivePermission(const char* value) { SetEffectivePermission(value); return *this;}

  private:

    PermissionConfiguration m_permissionConfiguration;
    bool m_permissionConfigurationHasBeenSet = false;

    Aws::String m_effectivePermission;
    bool m_effectivePermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
