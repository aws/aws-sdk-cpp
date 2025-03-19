/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CreateS3BucketResource.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateProtectedResource">AWS
   * API Reference</a></p>
   */
  class CreateProtectedResource
  {
  public:
    AWS_GUARDDUTY_API CreateProtectedResource() = default;
    AWS_GUARDDUTY_API CreateProtectedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CreateProtectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the protected S3 bucket resource.</p>
     */
    inline const CreateS3BucketResource& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = CreateS3BucketResource>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = CreateS3BucketResource>
    CreateProtectedResource& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}
  private:

    CreateS3BucketResource m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
