/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains metadata about an KMS key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKmsKeyDetails">AWS
   * API Reference</a></p>
   */
  class AwsKmsKeyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsKmsKeyDetails();
    AWS_SECURITYHUB_API AwsKmsKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKmsKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}


    /**
     * <p>Indicates when the KMS key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline double GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Indicates when the KMS key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Indicates when the KMS key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Indicates when the KMS key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsKmsKeyDetails& WithCreationDate(double value) { SetCreationDate(value); return *this;}


    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline const Aws::String& GetKeyManager() const{ return m_keyManager; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline void SetKeyManager(const Aws::String& value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline void SetKeyManager(Aws::String&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::move(value); }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline void SetKeyManager(const char* value) { m_keyManagerHasBeenSet = true; m_keyManager.assign(value); }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(const Aws::String& value) { SetKeyManager(value); return *this;}

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(Aws::String&& value) { SetKeyManager(std::move(value)); return *this;}

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(const char* value) { SetKeyManager(value); return *this;}


    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline void SetKeyState(const Aws::String& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline void SetKeyState(Aws::String&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline void SetKeyState(const char* value) { m_keyStateHasBeenSet = true; m_keyState.assign(value); }

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline AwsKmsKeyDetails& WithKeyState(const Aws::String& value) { SetKeyState(value); return *this;}

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline AwsKmsKeyDetails& WithKeyState(Aws::String&& value) { SetKeyState(std::move(value)); return *this;}

    /**
     * <p>The state of the KMS key. Valid values are as follows:</p> <ul> <li> <p>
     * <code>Disabled</code> </p> </li> <li> <p> <code>Enabled</code> </p> </li> <li>
     * <p> <code>PendingDeletion</code> </p> </li> <li> <p> <code>PendingImport</code>
     * </p> </li> <li> <p> <code>Unavailable</code> </p> </li> </ul>
     */
    inline AwsKmsKeyDetails& WithKeyState(const char* value) { SetKeyState(value); return *this;}


    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}

    /**
     * <p>The source of the KMS key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, KMS created the key material.</p> <p>When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the KMS key lacks key material.</p> <p>When this
     * value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(const char* value) { SetOrigin(value); return *this;}


    /**
     * <p>A description of the KMS key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the KMS key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the KMS key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the KMS key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the KMS key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the KMS key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline bool GetKeyRotationStatus() const{ return m_keyRotationStatus; }

    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline bool KeyRotationStatusHasBeenSet() const { return m_keyRotationStatusHasBeenSet; }

    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline void SetKeyRotationStatus(bool value) { m_keyRotationStatusHasBeenSet = true; m_keyRotationStatus = value; }

    /**
     * <p>Whether the key has key rotation enabled.</p>
     */
    inline AwsKmsKeyDetails& WithKeyRotationStatus(bool value) { SetKeyRotationStatus(value); return *this;}

  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    double m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_keyManager;
    bool m_keyManagerHasBeenSet = false;

    Aws::String m_keyState;
    bool m_keyStateHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_keyRotationStatus;
    bool m_keyRotationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
