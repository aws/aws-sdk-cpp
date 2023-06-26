/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/AccessKeyLastUsed.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an access key for an Amazon Lightsail bucket.</p> <p>Access keys
   * grant full programmatic access to the specified bucket and its objects. You can
   * have a maximum of two access keys per bucket. Use the <a
   * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
   * action to create an access key for a specific bucket. For more information about
   * access keys, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
   * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail
   * Developer Guide</i>.</p>  <p>The <code>secretAccessKey</code> value
   * is returned only in response to the <code>CreateBucketAccessKey</code> action.
   * You can get a secret access key only when you first create an access key; you
   * cannot get the secret access key later. If you lose the secret access key, you
   * must create a new access key.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AccessKey">AWS
   * API Reference</a></p>
   */
  class AccessKey
  {
  public:
    AWS_LIGHTSAIL_API AccessKey();
    AWS_LIGHTSAIL_API AccessKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccessKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The ID of the access key.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The ID of the access key.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The ID of the access key.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The ID of the access key.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The ID of the access key.</p>
     */
    inline AccessKey& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID of the access key.</p>
     */
    inline AccessKey& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access key.</p>
     */
    inline AccessKey& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline AccessKey& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline AccessKey& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline AccessKey& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline AccessKey& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline AccessKey& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline AccessKey& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline AccessKey& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline const AccessKeyLastUsed& GetLastUsed() const{ return m_lastUsed; }

    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline bool LastUsedHasBeenSet() const { return m_lastUsedHasBeenSet; }

    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline void SetLastUsed(const AccessKeyLastUsed& value) { m_lastUsedHasBeenSet = true; m_lastUsed = value; }

    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline void SetLastUsed(AccessKeyLastUsed&& value) { m_lastUsedHasBeenSet = true; m_lastUsed = std::move(value); }

    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline AccessKey& WithLastUsed(const AccessKeyLastUsed& value) { SetLastUsed(value); return *this;}

    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline AccessKey& WithLastUsed(AccessKeyLastUsed&& value) { SetLastUsed(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    AccessKeyLastUsed m_lastUsed;
    bool m_lastUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
