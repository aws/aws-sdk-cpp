/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/EncryptionType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A complex type that contains optional Amazon Web Services Key Management
   * Service (KMS) encryption settings for your Network Firewall resources. Your data
   * is encrypted by default with an Amazon Web Services owned key that Amazon Web
   * Services owns and manages for you. You can use either the Amazon Web Services
   * owned key, or provide your own customer managed key. To learn more about KMS
   * encryption of your Network Firewall resources, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-encryption-at-rest.html">Encryption
   * at rest with Amazon Web Services Key Managment Service</a> in the <i>Network
   * Firewall Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API EncryptionConfiguration();
    AWS_NETWORKFIREWALL_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline EncryptionConfiguration& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline EncryptionConfiguration& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) customer
     * managed key. You can use any of the key identifiers that KMS supports, unless
     * you're using a key that's managed by another account. If you're using a key
     * managed by another account, then specify the key ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * ID</a> in the <i>Amazon Web Services KMS Developer Guide</i>.</p>
     */
    inline EncryptionConfiguration& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline const EncryptionType& GetType() const{ return m_type; }

    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline EncryptionConfiguration& WithType(const EncryptionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services KMS key to use for encryption of your Network
     * Firewall resources.</p>
     */
    inline EncryptionConfiguration& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    EncryptionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
