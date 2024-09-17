/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details of the S3 bucket that report generator reports are published
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_LICENSEMANAGER_API S3Location();
    AWS_LICENSEMANAGER_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the S3 bucket reports are published to.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefix of the S3 bucket reports are published to.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }
    inline S3Location& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}
    inline S3Location& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}
    inline S3Location& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
