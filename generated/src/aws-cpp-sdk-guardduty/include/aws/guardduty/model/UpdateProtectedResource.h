/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/UpdateS3BucketResource.h>
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
   * <p>Information about the protected resource that is associated with the created
   * Malware Protection plan. Presently, <code>S3Bucket</code> is the only supported
   * protected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateProtectedResource">AWS
   * API Reference</a></p>
   */
  class UpdateProtectedResource
  {
  public:
    AWS_GUARDDUTY_API UpdateProtectedResource();
    AWS_GUARDDUTY_API UpdateProtectedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UpdateProtectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the protected S3 bucket resource.</p>
     */
    inline const UpdateS3BucketResource& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const UpdateS3BucketResource& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(UpdateS3BucketResource&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline UpdateProtectedResource& WithS3Bucket(const UpdateS3BucketResource& value) { SetS3Bucket(value); return *this;}
    inline UpdateProtectedResource& WithS3Bucket(UpdateS3BucketResource&& value) { SetS3Bucket(std::move(value)); return *this;}
    ///@}
  private:

    UpdateS3BucketResource m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
