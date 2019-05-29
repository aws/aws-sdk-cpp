/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of an Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsS3BucketDetails
  {
  public:
    AwsS3BucketDetails();
    AwsS3BucketDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsS3BucketDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerName() const{ return m_ownerName; }

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerName(const Aws::String& value) { m_ownerNameHasBeenSet = true; m_ownerName = value; }

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerName(Aws::String&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::move(value); }

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline void SetOwnerName(const char* value) { m_ownerNameHasBeenSet = true; m_ownerName.assign(value); }

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerName(const Aws::String& value) { SetOwnerName(value); return *this;}

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerName(Aws::String&& value) { SetOwnerName(std::move(value)); return *this;}

    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline AwsS3BucketDetails& WithOwnerName(const char* value) { SetOwnerName(value); return *this;}

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
