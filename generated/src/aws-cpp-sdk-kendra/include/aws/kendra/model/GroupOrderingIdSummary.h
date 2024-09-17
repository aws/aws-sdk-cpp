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
    AWS_KENDRA_API GroupOrderingIdSummary();
    AWS_KENDRA_API GroupOrderingIdSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GroupOrderingIdSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline const PrincipalMappingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PrincipalMappingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PrincipalMappingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GroupOrderingIdSummary& WithStatus(const PrincipalMappingStatus& value) { SetStatus(value); return *this;}
    inline GroupOrderingIdSummary& WithStatus(PrincipalMappingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when an action was last updated. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline GroupOrderingIdSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GroupOrderingIdSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when an action was received by Amazon Kendra. An action
     * can be a <code>PUT</code> or <code>DELETE</code> action for mapping users to
     * their groups.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedAt() const{ return m_receivedAt; }
    inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }
    inline void SetReceivedAt(const Aws::Utils::DateTime& value) { m_receivedAtHasBeenSet = true; m_receivedAt = value; }
    inline void SetReceivedAt(Aws::Utils::DateTime&& value) { m_receivedAtHasBeenSet = true; m_receivedAt = std::move(value); }
    inline GroupOrderingIdSummary& WithReceivedAt(const Aws::Utils::DateTime& value) { SetReceivedAt(value); return *this;}
    inline GroupOrderingIdSummary& WithReceivedAt(Aws::Utils::DateTime&& value) { SetReceivedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline long long GetOrderingId() const{ return m_orderingId; }
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
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline GroupOrderingIdSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GroupOrderingIdSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GroupOrderingIdSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    PrincipalMappingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_receivedAt;
    bool m_receivedAtHasBeenSet = false;

    long long m_orderingId;
    bool m_orderingIdHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
