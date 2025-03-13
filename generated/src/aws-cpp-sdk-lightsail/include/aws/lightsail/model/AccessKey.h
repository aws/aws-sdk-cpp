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
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-creating-bucket-access-keys">Creating
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
    AWS_LIGHTSAIL_API AccessKey() = default;
    AWS_LIGHTSAIL_API AccessKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccessKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    AccessKey& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret access key used to sign requests.</p> <p>You should store the
     * secret access key in a safe location. We recommend that you delete the access
     * key if the secret access key is compromised.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    AccessKey& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the access key.</p> <p>A status of <code>Active</code> means
     * that the key is valid, while <code>Inactive</code> means it is not.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline AccessKey& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the access key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AccessKey& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the last time the access key was used.</p> 
     * <p>This object does not include data in the response of a <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
     * action. If the access key has not been used, the <code>region</code> and
     * <code>serviceName</code> values are <code>N/A</code>, and the
     * <code>lastUsedDate</code> value is null.</p> 
     */
    inline const AccessKeyLastUsed& GetLastUsed() const { return m_lastUsed; }
    inline bool LastUsedHasBeenSet() const { return m_lastUsedHasBeenSet; }
    template<typename LastUsedT = AccessKeyLastUsed>
    void SetLastUsed(LastUsedT&& value) { m_lastUsedHasBeenSet = true; m_lastUsed = std::forward<LastUsedT>(value); }
    template<typename LastUsedT = AccessKeyLastUsed>
    AccessKey& WithLastUsed(LastUsedT&& value) { SetLastUsed(std::forward<LastUsedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    AccessKeyLastUsed m_lastUsed;
    bool m_lastUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
