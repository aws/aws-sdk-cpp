/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/PrincipalMappingStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information on the processing of <code>PUT</code> and
   * <code>DELETE</code> actions for mapping users to their groups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GroupOrderingIdSummary">AWS
   * API Reference</a></p>
   */
  class GroupOrderingIdSummary
  {
  public:
    AWS_KENDRA_API GroupOrderingIdSummary() = default;
    AWS_KENDRA_API GroupOrderingIdSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GroupOrderingIdSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline PrincipalMappingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PrincipalMappingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GroupOrderingIdSummary& WithStatus(PrincipalMappingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when an action was last updated. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GroupOrderingIdSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when an action was received by Amazon Kendra. An action
     * can be a <code>PUT</code> or <code>DELETE</code> action for mapping users to
     * their groups.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedAt() const { return m_receivedAt; }
    inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }
    template<typename ReceivedAtT = Aws::Utils::DateTime>
    void SetReceivedAt(ReceivedAtT&& value) { m_receivedAtHasBeenSet = true; m_receivedAt = std::forward<ReceivedAtT>(value); }
    template<typename ReceivedAtT = Aws::Utils::DateTime>
    GroupOrderingIdSummary& WithReceivedAt(ReceivedAtT&& value) { SetReceivedAt(std::forward<ReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline long long GetOrderingId() const { return m_orderingId; }
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }
    inline GroupOrderingIdSummary& WithOrderingId(long long value) { SetOrderingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GroupOrderingIdSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    PrincipalMappingStatus m_status{PrincipalMappingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_receivedAt{};
    bool m_receivedAtHasBeenSet = false;

    long long m_orderingId{0};
    bool m_orderingIdHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
