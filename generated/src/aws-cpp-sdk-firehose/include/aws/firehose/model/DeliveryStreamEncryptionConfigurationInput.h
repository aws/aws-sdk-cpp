/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/KeyType.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Specifies the type and Amazon Resource Name (ARN) of the CMK to use for
   * Server-Side Encryption (SSE). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DeliveryStreamEncryptionConfigurationInput">AWS
   * API Reference</a></p>
   */
  class DeliveryStreamEncryptionConfigurationInput
  {
  public:
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfigurationInput();
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline const Aws::String& GetKeyARN() const{ return m_keyARN; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline bool KeyARNHasBeenSet() const { return m_keyARNHasBeenSet; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline void SetKeyARN(const Aws::String& value) { m_keyARNHasBeenSet = true; m_keyARN = value; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline void SetKeyARN(Aws::String&& value) { m_keyARNHasBeenSet = true; m_keyARN = std::move(value); }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline void SetKeyARN(const char* value) { m_keyARNHasBeenSet = true; m_keyARN.assign(value); }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(const Aws::String& value) { SetKeyARN(value); return *this;}

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(Aws::String&& value) { SetKeyARN(std::move(value)); return *this;}

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data
     * Firehose uses a service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(const char* value) { SetKeyARN(value); return *this;}


    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is encrypted with a customer
     * managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for
     * retirement.</p> <p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up
     * to 500 delivery streams. If a <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data
     * Firehose throws a <code>LimitExceededException</code>. </p>  <p>To
     * encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't
     * support asymmetric CMKs. For information about symmetric and asymmetric CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About
     * Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management
     * Service developer guide.</p> 
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_keyARN;
    bool m_keyARNHasBeenSet = false;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
