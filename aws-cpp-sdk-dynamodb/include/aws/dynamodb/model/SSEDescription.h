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
#include <aws/dynamodb/model/SSEStatus.h>
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
   * <p>The description of the server-side encryption status on the specified
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SSEDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API SSEDescription
  {
  public:
    SSEDescription();
    SSEDescription(Aws::Utils::Json::JsonView jsonValue);
    SSEDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline const SSEStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline void SetStatus(const SSEStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline void SetStatus(SSEStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline SSEDescription& WithStatus(const SSEStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline SSEDescription& WithStatus(SSEStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline SSEDescription& WithSSEType(const SSEType& value) { SetSSEType(value); return *this;}

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption which uses AWS Key Management Service.
     * Key is stored in your account and is managed by AWS KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSEDescription& WithSSEType(SSEType&& value) { SetSSEType(std::move(value)); return *this;}


    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyArn() const{ return m_kMSMasterKeyArn; }

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline bool KMSMasterKeyArnHasBeenSet() const { return m_kMSMasterKeyArnHasBeenSet; }

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(const Aws::String& value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn = value; }

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(Aws::String&& value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn = std::move(value); }

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(const char* value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn.assign(value); }

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(const Aws::String& value) { SetKMSMasterKeyArn(value); return *this;}

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(Aws::String&& value) { SetKMSMasterKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS customer master key (CMK) ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(const char* value) { SetKMSMasterKeyArn(value); return *this;}

  private:

    SSEStatus m_status;
    bool m_statusHasBeenSet;

    SSEType m_sSEType;
    bool m_sSETypeHasBeenSet;

    Aws::String m_kMSMasterKeyArn;
    bool m_kMSMasterKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
