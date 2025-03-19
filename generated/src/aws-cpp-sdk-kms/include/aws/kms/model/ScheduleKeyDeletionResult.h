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
    AWS_KMS_API ScheduleKeyDeletionResult() = default;
    AWS_KMS_API ScheduleKeyDeletionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ScheduleKeyDeletionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key whose deletion is scheduled.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    ScheduleKeyDeletionResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which KMS deletes the KMS key.</p> <p>If the KMS key
     * is a multi-Region primary key with replica keys, this field does not appear. The
     * deletion date for the primary key isn't known until its last replica key is
     * deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const { return m_deletionDate; }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    ScheduleKeyDeletionResult& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyState GetKeyState() const { return m_keyState; }
    inline void SetKeyState(KeyState value) { m_keyStateHasBeenSet = true; m_keyState = value; }
    inline ScheduleKeyDeletionResult& WithKeyState(KeyState value) { SetKeyState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waiting period before the KMS key is deleted. </p> <p>If the KMS key is a
     * multi-Region primary key with replicas, the waiting period begins when the last
     * of its replica keys is deleted. Otherwise, the waiting period begins
     * immediately.</p>
     */
    inline int GetPendingWindowInDays() const { return m_pendingWindowInDays; }
    inline void SetPendingWindowInDays(int value) { m_pendingWindowInDaysHasBeenSet = true; m_pendingWindowInDays = value; }
    inline ScheduleKeyDeletionResult& WithPendingWindowInDays(int value) { SetPendingWindowInDays(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ScheduleKeyDeletionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate{};
    bool m_deletionDateHasBeenSet = false;

    KeyState m_keyState{KeyState::NOT_SET};
    bool m_keyStateHasBeenSet = false;

    int m_pendingWindowInDays{0};
    bool m_pendingWindowInDaysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
