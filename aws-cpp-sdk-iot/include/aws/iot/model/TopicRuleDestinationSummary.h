/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRuleDestinationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/HttpUrlDestinationSummary.h>
#include <aws/iot/model/VpcDestinationSummary.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about the topic rule destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRuleDestinationSummary">AWS
   * API Reference</a></p>
   */
  class TopicRuleDestinationSummary
  {
  public:
    AWS_IOT_API TopicRuleDestinationSummary();
    AWS_IOT_API TopicRuleDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRuleDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline TopicRuleDestinationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline TopicRuleDestinationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The topic rule destination ARN.</p>
     */
    inline TopicRuleDestinationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline const TopicRuleDestinationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline void SetStatus(const TopicRuleDestinationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline void SetStatus(TopicRuleDestinationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline TopicRuleDestinationSummary& WithStatus(const TopicRuleDestinationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the topic rule destination. Valid values are:</p> <dl>
     * <dt>IN_PROGRESS</dt> <dd> <p>A topic rule destination was created but has not
     * been confirmed. You can set <code>status</code> to <code>IN_PROGRESS</code> by
     * calling <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> <dt>ENABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is allowed. You
     * can set <code>status</code> to <code>DISABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>DISABLED</dt> <dd>
     * <p>Confirmation was completed, and traffic to this destination is not allowed.
     * You can set <code>status</code> to <code>ENABLED</code> by calling
     * <code>UpdateTopicRuleDestination</code>.</p> </dd> <dt>ERROR</dt> <dd>
     * <p>Confirmation could not be completed, for example if the confirmation timed
     * out. You can call <code>GetTopicRuleDestination</code> for details about the
     * error. You can set <code>status</code> to <code>IN_PROGRESS</code> by calling
     * <code>UpdateTopicRuleDestination</code>. Calling
     * <code>UpdateTopicRuleDestination</code> causes a new confirmation challenge to
     * be sent to your confirmation endpoint.</p> </dd> </dl>
     */
    inline TopicRuleDestinationSummary& WithStatus(TopicRuleDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline TopicRuleDestinationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline TopicRuleDestinationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline TopicRuleDestinationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline TopicRuleDestinationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline TopicRuleDestinationSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline TopicRuleDestinationSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason the topic rule destination is in the current status.</p>
     */
    inline TopicRuleDestinationSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline const HttpUrlDestinationSummary& GetHttpUrlSummary() const{ return m_httpUrlSummary; }

    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline bool HttpUrlSummaryHasBeenSet() const { return m_httpUrlSummaryHasBeenSet; }

    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline void SetHttpUrlSummary(const HttpUrlDestinationSummary& value) { m_httpUrlSummaryHasBeenSet = true; m_httpUrlSummary = value; }

    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline void SetHttpUrlSummary(HttpUrlDestinationSummary&& value) { m_httpUrlSummaryHasBeenSet = true; m_httpUrlSummary = std::move(value); }

    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline TopicRuleDestinationSummary& WithHttpUrlSummary(const HttpUrlDestinationSummary& value) { SetHttpUrlSummary(value); return *this;}

    /**
     * <p>Information about the HTTP URL.</p>
     */
    inline TopicRuleDestinationSummary& WithHttpUrlSummary(HttpUrlDestinationSummary&& value) { SetHttpUrlSummary(std::move(value)); return *this;}


    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline const VpcDestinationSummary& GetVpcDestinationSummary() const{ return m_vpcDestinationSummary; }

    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline bool VpcDestinationSummaryHasBeenSet() const { return m_vpcDestinationSummaryHasBeenSet; }

    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline void SetVpcDestinationSummary(const VpcDestinationSummary& value) { m_vpcDestinationSummaryHasBeenSet = true; m_vpcDestinationSummary = value; }

    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline void SetVpcDestinationSummary(VpcDestinationSummary&& value) { m_vpcDestinationSummaryHasBeenSet = true; m_vpcDestinationSummary = std::move(value); }

    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline TopicRuleDestinationSummary& WithVpcDestinationSummary(const VpcDestinationSummary& value) { SetVpcDestinationSummary(value); return *this;}

    /**
     * <p>Information about the virtual private cloud (VPC) connection.</p>
     */
    inline TopicRuleDestinationSummary& WithVpcDestinationSummary(VpcDestinationSummary&& value) { SetVpcDestinationSummary(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    TopicRuleDestinationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    HttpUrlDestinationSummary m_httpUrlSummary;
    bool m_httpUrlSummaryHasBeenSet = false;

    VpcDestinationSummary m_vpcDestinationSummary;
    bool m_vpcDestinationSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
