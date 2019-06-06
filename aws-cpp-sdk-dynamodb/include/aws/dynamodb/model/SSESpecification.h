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
  class AWS_DYNAMODB_API SSESpecification
  {
  public:
    SSESpecification();
    SSESpecification(Aws::Utils::Json::JsonView jsonValue);
    SSESpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether server-side encryption is done using an AWS managed CMK or
     * an AWS owned CMK. If enabled (true), server-side encryption type is set to
     * <code>KMS</code> and an AWS managed CMK is used (AWS KMS charges apply). If
     * disabled (false) or not specified, server-side encryption is set to AWS owned
     * CMK.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether server-side encryption is done using an AWS managed CMK or
     * an AWS owned CMK. If enabled (true), server-side encryption type is set to
     * <code>KMS</code> and an AWS managed CMK is used (AWS KMS charges apply). If
     * disabled (false) or not specified, server-side encryption is set to AWS owned
     * CMK.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether server-side encryption is done using an AWS managed CMK or
     * an AWS owned CMK. If enabled (true), server-side encryption type is set to
     * <code>KMS</code> and an AWS managed CMK is used (AWS KMS charges apply). If
     * disabled (false) or not specified, server-side encryption is set to AWS owned
     * CMK.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether server-side encryption is done using an AWS managed CMK or
     * an AWS owned CMK. If enabled (true), server-side encryption type is set to
     * <code>KMS</code> and an AWS managed CMK is used (AWS KMS charges apply). If
     * disabled (false) or not specified, server-side encryption is set to AWS owned
     * CMK.</p>
     */
    inline SSESpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline const SSEType& GetSSEType() const{ return m_sSEType; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline bool SSETypeHasBeenSet() const { return m_sSETypeHasBeenSet; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(const SSEType& value) { m_sSETypeHasBeenSet = true; m_sSEType = value; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(SSEType&& value) { m_sSETypeHasBeenSet = true; m_sSEType = std::move(value); }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSESpecification& WithSSEType(const SSEType& value) { SetSSEType(value); return *this;}

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSESpecification& WithSSEType(SSEType&& value) { SetSSEType(std::move(value)); return *this;}


    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const{ return m_kMSMasterKeyId; }

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline void SetKMSMasterKeyId(const Aws::String& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = value; }

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline void SetKMSMasterKeyId(Aws::String&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::move(value); }

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline void SetKMSMasterKeyId(const char* value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId.assign(value); }

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(const Aws::String& value) { SetKMSMasterKeyId(value); return *this;}

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(Aws::String&& value) { SetKMSMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS Customer Master Key (CMK) which should be used for the KMS
     * encryption. To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias
     * name, or alias ARN. Note that you should only provide this parameter if the key
     * is different from the default DynamoDB Customer Master Key
     * alias/aws/dynamodb.</p>
     */
    inline SSESpecification& WithKMSMasterKeyId(const char* value) { SetKMSMasterKeyId(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    SSEType m_sSEType;
    bool m_sSETypeHasBeenSet;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
