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


    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline const PrincipalMappingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(const PrincipalMappingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(PrincipalMappingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline GroupOrderingIdSummary& WithStatus(const PrincipalMappingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current processing status of actions for mapping users to their groups.
     * The status can be either <code>PROCESSING</code>, <code>SUCCEEDED</code>,
     * <code>DELETING</code>, <code>DELETED</code>, or <code>FAILED</code>.</p>
     */
    inline GroupOrderingIdSummary& WithStatus(PrincipalMappingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline GroupOrderingIdSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The last date-time an action was updated. An action can be a <code>PUT</code>
     * or <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline GroupOrderingIdSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedAt() const{ return m_receivedAt; }

    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }

    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetReceivedAt(const Aws::Utils::DateTime& value) { m_receivedAtHasBeenSet = true; m_receivedAt = value; }

    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetReceivedAt(Aws::Utils::DateTime&& value) { m_receivedAtHasBeenSet = true; m_receivedAt = std::move(value); }

    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithReceivedAt(const Aws::Utils::DateTime& value) { SetReceivedAt(value); return *this;}

    /**
     * <p>The date-time an action was received by Amazon Kendra. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithReceivedAt(Aws::Utils::DateTime&& value) { SetReceivedAt(std::move(value)); return *this;}


    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline long long GetOrderingId() const{ return m_orderingId; }

    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }

    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }

    /**
     * <p>The order in which actions should complete processing. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithOrderingId(long long value) { SetOrderingId(value); return *this;}


    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason an action could not be processed. An action can be a
     * <code>PUT</code> or <code>DELETE</code> action for mapping users to their
     * groups.</p>
     */
    inline GroupOrderingIdSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

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
