/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/EffectivePermission.h>
#include <aws/macie2/model/BucketPermissionConfiguration.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the permissions settings that determine whether an
   * S3 bucket is publicly accessible.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketPublicAccess">AWS
   * API Reference</a></p>
   */
  class BucketPublicAccess
  {
  public:
    AWS_MACIE2_API BucketPublicAccess();
    AWS_MACIE2_API BucketPublicAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketPublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline const EffectivePermission& GetEffectivePermission() const{ return m_effectivePermission; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline void SetEffectivePermission(const EffectivePermission& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = value; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline void SetEffectivePermission(EffectivePermission&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::move(value); }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline BucketPublicAccess& WithEffectivePermission(const EffectivePermission& value) { SetEffectivePermission(value); return *this;}

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are:</p>
     * <ul><li><p>NOT_PUBLIC - The bucket isn't publicly accessible.</p></li>
     * <li><p>PUBLIC - The bucket is publicly accessible.</p></li> <li><p>UNKNOWN -
     * Amazon Macie can't determine whether the bucket is publicly
     * accessible.</p></li></ul>
     */
    inline BucketPublicAccess& WithEffectivePermission(EffectivePermission&& value) { SetEffectivePermission(std::move(value)); return *this;}


    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline const BucketPermissionConfiguration& GetPermissionConfiguration() const{ return m_permissionConfiguration; }

    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline bool PermissionConfigurationHasBeenSet() const { return m_permissionConfigurationHasBeenSet; }

    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline void SetPermissionConfiguration(const BucketPermissionConfiguration& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = value; }

    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline void SetPermissionConfiguration(BucketPermissionConfiguration&& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = std::move(value); }

    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline BucketPublicAccess& WithPermissionConfiguration(const BucketPermissionConfiguration& value) { SetPermissionConfiguration(value); return *this;}

    /**
     * <p>The account-level and bucket-level permissions settings for the bucket.</p>
     */
    inline BucketPublicAccess& WithPermissionConfiguration(BucketPermissionConfiguration&& value) { SetPermissionConfiguration(std::move(value)); return *this;}

  private:

    EffectivePermission m_effectivePermission;
    bool m_effectivePermissionHasBeenSet = false;

    BucketPermissionConfiguration m_permissionConfiguration;
    bool m_permissionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
