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
   * <p>Used to specify the type and Amazon Resource Name (ARN) of the CMK needed for
   * Server-Side Encryption (SSE). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DeliveryStreamEncryptionConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AWS_FIREHOSE_API DeliveryStreamEncryptionConfigurationInput
  {
  public:
    DeliveryStreamEncryptionConfigurationInput();
    DeliveryStreamEncryptionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    DeliveryStreamEncryptionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline const Aws::String& GetKeyARN() const{ return m_keyARN; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline bool KeyARNHasBeenSet() const { return m_keyARNHasBeenSet; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline void SetKeyARN(const Aws::String& value) { m_keyARNHasBeenSet = true; m_keyARN = value; }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline void SetKeyARN(Aws::String&& value) { m_keyARNHasBeenSet = true; m_keyARN = std::move(value); }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline void SetKeyARN(const char* value) { m_keyARNHasBeenSet = true; m_keyARN.assign(value); }

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(const Aws::String& value) { SetKeyARN(value); return *this;}

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(Aws::String&& value) { SetKeyARN(std::move(value)); return *this;}

    /**
     * <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you
     * must specify the Amazon Resource Name (ARN) of the CMK. If you set
     * <code>KeyType</code> to <code>AWS_OWNED_CMK</code>, Kinesis Data Firehose uses a
     * service-account CMK.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyARN(const char* value) { SetKeyARN(value); return *this;}


    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>Indicates the type of customer master key (CMK) to use for encryption. The
     * default setting is <code>AWS_OWNED_CMK</code>. For more information about CMKs,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or
     * <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to
     * CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
     * to create a grant that allows the Kinesis Data Firehose service to use the
     * customer managed CMK to perform encryption and decryption. Kinesis Data Firehose
     * manages that grant. </p> <p>When you invoke <a>StartDeliveryStreamEncryption</a>
     * to change the CMK for a delivery stream that is already encrypted with a
     * customer managed CMK, Kinesis Data Firehose schedules the grant it had on the
     * old CMK for retirement.</p>
     */
    inline DeliveryStreamEncryptionConfigurationInput& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_keyARN;
    bool m_keyARNHasBeenSet;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
