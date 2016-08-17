/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>Permission</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API Permission
  {
  public:
    Permission();
    Permission(const Aws::Utils::Json::JsonValue& jsonValue);
    Permission& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline const Aws::String& GetGranteeType() const{ return m_granteeType; }

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline void SetGranteeType(const Aws::String& value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline void SetGranteeType(Aws::String&& value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline void SetGranteeType(const char* value) { m_granteeTypeHasBeenSet = true; m_granteeType.assign(value); }

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline Permission& WithGranteeType(const Aws::String& value) { SetGranteeType(value); return *this;}

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline Permission& WithGranteeType(Aws::String&& value) { SetGranteeType(value); return *this;}

    /**
     * <p>The type of value that appears in the Grantee object: <ul>
     * <li><code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution. <important>A
     * canonical user ID is not the same as an AWS account number.</important></li>
     * <li><code>Email</code>: The registered email address of an AWS account.</li>
     * <li><code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</li> </ul> </p>
     */
    inline Permission& WithGranteeType(const char* value) { SetGranteeType(value); return *this;}

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline const Aws::String& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline void SetGrantee(const Aws::String& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline void SetGrantee(Aws::String&& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline void SetGrantee(const char* value) { m_granteeHasBeenSet = true; m_grantee.assign(value); }

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline Permission& WithGrantee(const Aws::String& value) { SetGrantee(value); return *this;}

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline Permission& WithGrantee(Aws::String&& value) { SetGrantee(value); return *this;}

    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline Permission& WithGrantee(const char* value) { SetGrantee(value); return *this;}

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccess() const{ return m_access; }

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline void SetAccess(const Aws::Vector<Aws::String>& value) { m_accessHasBeenSet = true; m_access = value; }

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline void SetAccess(Aws::Vector<Aws::String>&& value) { m_accessHasBeenSet = true; m_access = value; }

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline Permission& WithAccess(const Aws::Vector<Aws::String>& value) { SetAccess(value); return *this;}

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline Permission& WithAccess(Aws::Vector<Aws::String>&& value) { SetAccess(value); return *this;}

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline Permission& AddAccess(const Aws::String& value) { m_accessHasBeenSet = true; m_access.push_back(value); return *this; }

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline Permission& AddAccess(Aws::String&& value) { m_accessHasBeenSet = true; m_access.push_back(value); return *this; }

    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: <ul> <li><code>READ</code>: The grantee can read
     * the thumbnails and metadata for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</li> <li><code>READ_ACP</code>: The grantee can read the
     * object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> <li><code>WRITE_ACP</code>: The grantee can write the ACL for the
     * thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</li>
     * <li><code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</li> </ul> </p>
     */
    inline Permission& AddAccess(const char* value) { m_accessHasBeenSet = true; m_access.push_back(value); return *this; }

  private:
    Aws::String m_granteeType;
    bool m_granteeTypeHasBeenSet;
    Aws::String m_grantee;
    bool m_granteeHasBeenSet;
    Aws::Vector<Aws::String> m_access;
    bool m_accessHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
