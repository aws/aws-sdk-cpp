/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/SSEType.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the settings used to enable server-side encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SSESpecification">AWS
   * API Reference</a></p>
   */
  class SSESpecification
  {
  public:
    AWS_DYNAMODB_API SSESpecification();
    AWS_DYNAMODB_API SSESpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SSESpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether server-side encryption is done using an Amazon Web Services
     * managed key or an Amazon Web Services owned key. If enabled (true), server-side
     * encryption type is set to <code>KMS</code> and an Amazon Web Services managed
     * key is used (KMS charges apply). If disabled (false) or not specified,
     * server-side encryption is set to Amazon Web Services owned key.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether server-side encryption is done using an Amazon Web Services
     * managed key or an Amazon Web Services owned key. If enabled (true), server-side
     * encryption type is set to <code>KMS</code> and an Amazon Web Services managed
     * key is used (KMS charges apply). If disabled (false) or not specified,
     * server-side encryption is set to Amazon Web Services owned key.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether server-side encryption is done using an Amazon Web Services
     * managed key or an Amazon Web Services owned key. If enabled (true), server-side
     * encryption type is set to <code>KMS</code> and an Amazon Web Services managed
     * key is used (KMS charges apply). If disabled (false) or not specified,
     * server-side encryption is set to Amazon Web Services owned key.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether server-side encryption is done using an Amazon Web Services
     * managed key or an Amazon Web Services owned key. If enabled (true), server-side
     * encryption type is set to <code>KMS</code> and an Amazon Web Services managed
     * key is used (KMS charges apply). If disabled (false) or not specified,
     * server-side encryption is set to Amazon Web Services owned key.</p>
     */
    inline SSESpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline const SSEType& GetSSEType() const{ return m_sSEType; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline bool SSETypeHasBeenSet() const { return m_sSETypeHasBeenSet; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(const SSEType& value) { m_sSETypeHasBeenSet = true; m_sSEType = value; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(SSEType&& value) { m_sSETypeHasBeenSet = true; m_sSEType = std::move(value); }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSESpecification& WithSSEType(const SSEType& value) { SetSSEType(value); return *this;}

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSESpecification& WithSSEType(SSEType&& value) { SetSSEType(std::move(value)); return *this;}


    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const{ return m_kMSMasterKeyId; }

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(const Aws::String& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = value; }

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(Aws::String&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::move(value); }

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(const char* value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId.assign(value); }

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(const Aws::String& value) { SetKMSMasterKeyId(value); return *this;}

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(Aws::String&& value) { SetKMSMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key that should be used for the KMS encryption. To specify a key, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. Note that you
     * should only provide this parameter if the key is different from the default
     * DynamoDB key <code>alias/aws/dynamodb</code>.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(const char* value) { SetKMSMasterKeyId(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    SSEType m_sSEType;
    bool m_sSETypeHasBeenSet = false;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
