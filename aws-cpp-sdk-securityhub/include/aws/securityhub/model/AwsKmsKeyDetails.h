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
   * <p>Contains metadata about a customer master key (CMK).</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKmsKeyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsKmsKeyDetails
  {
  public:
    AwsKmsKeyDetails();
    AwsKmsKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsKmsKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}


    /**
     * <p>Indicates when the CMK was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline double GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Indicates when the CMK was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Indicates when the CMK was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Indicates when the CMK was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsKmsKeyDetails& WithCreationDate(double value) { SetCreationDate(value); return *this;}


    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline const Aws::String& GetKeyManager() const{ return m_keyManager; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline void SetKeyManager(const Aws::String& value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline void SetKeyManager(Aws::String&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::move(value); }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline void SetKeyManager(const char* value) { m_keyManagerHasBeenSet = true; m_keyManager.assign(value); }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(const Aws::String& value) { SetKeyManager(value); return *this;}

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(Aws::String&& value) { SetKeyManager(std::move(value)); return *this;}

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed.</p>
     */
    inline AwsKmsKeyDetails& WithKeyManager(const char* value) { SetKeyManager(value); return *this;}


    /**
     * <p>The state of the CMK.</p>
     */
    inline const Aws::String& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The state of the CMK.</p>
     */
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }

    /**
     * <p>The state of the CMK.</p>
     */
    inline void SetKeyState(const Aws::String& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of the CMK.</p>
     */
    inline void SetKeyState(Aws::String&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }

    /**
     * <p>The state of the CMK.</p>
     */
    inline void SetKeyState(const char* value) { m_keyStateHasBeenSet = true; m_keyState.assign(value); }

    /**
     * <p>The state of the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyState(const Aws::String& value) { SetKeyState(value); return *this;}

    /**
     * <p>The state of the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyState(Aws::String&& value) { SetKeyState(std::move(value)); return *this;}

    /**
     * <p>The state of the CMK.</p>
     */
    inline AwsKmsKeyDetails& WithKeyState(const char* value) { SetKeyState(value); return *this;}


    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}

    /**
     * <p>The source of the CMK's key material.</p> <p>When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material.</p> <p>When this value
     * is <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p> <p>When this value
     * is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline AwsKmsKeyDetails& WithOrigin(const char* value) { SetOrigin(value); return *this;}


    /**
     * <p>A description of the key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the key.</p>
     */
    inline AwsKmsKeyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet;

    double m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::String m_keyManager;
    bool m_keyManagerHasBeenSet;

    Aws::String m_keyState;
    bool m_keyStateHasBeenSet;

    Aws::String m_origin;
    bool m_originHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
