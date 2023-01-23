/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/KeyState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class ScheduleKeyDeletionResult
  {
  public:
    AWS_KMS_API ScheduleKeyDeletionResult();
    AWS_KMS_API ScheduleKeyDeletionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ScheduleKeyDeletionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDate = value; }

    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDate = std::move(value); }

    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline ScheduleKeyDeletionResult& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline ScheduleKeyDeletionResult& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(const KeyState& value) { m_keyState = value; }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(KeyState&& value) { m_keyState = std::move(value); }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyState(KeyState&& value) { SetKeyState(std::move(value)); return *this;}


    /**
     * <p>The waiting period before the KMS key is deleted. </p> <p>If the KMS key is a
     * multi-Region primary key with replicas, the waiting period begins when the last
     * of its replica keys is deleted. Otherwise, the waiting period begins
     * immediately.</p>
     */
    inline int GetPendingWindowInDays() const{ return m_pendingWindowInDays; }

    /**
     * <p>The waiting period before the KMS key is deleted. </p> <p>If the KMS key is a
     * multi-Region primary key with replicas, the waiting period begins when the last
     * of its replica keys is deleted. Otherwise, the waiting period begins
     * immediately.</p>
     */
    inline void SetPendingWindowInDays(int value) { m_pendingWindowInDays = value; }

    /**
     * <p>The waiting period before the KMS key is deleted. </p> <p>If the KMS key is a
     * multi-Region primary key with replicas, the waiting period begins when the last
     * of its replica keys is deleted. Otherwise, the waiting period begins
     * immediately.</p>
     */
    inline ScheduleKeyDeletionResult& WithPendingWindowInDays(int value) { SetPendingWindowInDays(value); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::DateTime m_deletionDate;

    KeyState m_keyState;

    int m_pendingWindowInDays;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
