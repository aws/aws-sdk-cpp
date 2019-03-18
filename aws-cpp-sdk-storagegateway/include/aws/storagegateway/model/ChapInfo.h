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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes Challenge-Handshake Authentication Protocol (CHAP) information that
   * supports authentication between your gateway and iSCSI initiators.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ChapInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ChapInfo
  {
  public:
    ChapInfo();
    ChapInfo(Aws::Utils::Json::JsonView jsonValue);
    ChapInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetTargetARN(const Aws::String& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetTargetARN(Aws::String&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetTargetARN(const char* value) { m_targetARNHasBeenSet = true; m_targetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline ChapInfo& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline ChapInfo& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p> Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline ChapInfo& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}


    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline const Aws::String& GetSecretToAuthenticateInitiator() const{ return m_secretToAuthenticateInitiator; }

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline bool SecretToAuthenticateInitiatorHasBeenSet() const { return m_secretToAuthenticateInitiatorHasBeenSet; }

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline void SetSecretToAuthenticateInitiator(const Aws::String& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = value; }

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline void SetSecretToAuthenticateInitiator(Aws::String&& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = std::move(value); }

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline void SetSecretToAuthenticateInitiator(const char* value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator.assign(value); }

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline ChapInfo& WithSecretToAuthenticateInitiator(const Aws::String& value) { SetSecretToAuthenticateInitiator(value); return *this;}

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline ChapInfo& WithSecretToAuthenticateInitiator(Aws::String&& value) { SetSecretToAuthenticateInitiator(std::move(value)); return *this;}

    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline ChapInfo& WithSecretToAuthenticateInitiator(const char* value) { SetSecretToAuthenticateInitiator(value); return *this;}


    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline bool InitiatorNameHasBeenSet() const { return m_initiatorNameHasBeenSet; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = value; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = std::move(value); }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(const char* value) { m_initiatorNameHasBeenSet = true; m_initiatorName.assign(value); }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline ChapInfo& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline ChapInfo& WithInitiatorName(Aws::String&& value) { SetInitiatorName(std::move(value)); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline ChapInfo& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}


    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline const Aws::String& GetSecretToAuthenticateTarget() const{ return m_secretToAuthenticateTarget; }

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline bool SecretToAuthenticateTargetHasBeenSet() const { return m_secretToAuthenticateTargetHasBeenSet; }

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline void SetSecretToAuthenticateTarget(const Aws::String& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = value; }

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline void SetSecretToAuthenticateTarget(Aws::String&& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = std::move(value); }

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline void SetSecretToAuthenticateTarget(const char* value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget.assign(value); }

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline ChapInfo& WithSecretToAuthenticateTarget(const Aws::String& value) { SetSecretToAuthenticateTarget(value); return *this;}

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline ChapInfo& WithSecretToAuthenticateTarget(Aws::String&& value) { SetSecretToAuthenticateTarget(std::move(value)); return *this;}

    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p>
     */
    inline ChapInfo& WithSecretToAuthenticateTarget(const char* value) { SetSecretToAuthenticateTarget(value); return *this;}

  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet;

    Aws::String m_secretToAuthenticateInitiator;
    bool m_secretToAuthenticateInitiatorHasBeenSet;

    Aws::String m_initiatorName;
    bool m_initiatorNameHasBeenSet;

    Aws::String m_secretToAuthenticateTarget;
    bool m_secretToAuthenticateTargetHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
