/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRuleDestinationStatus.h>
#include <aws/iot/model/HttpUrlDestinationProperties.h>
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
   * <p>A topic rule destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRuleDestination">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TopicRuleDestination
  {
  public:
    TopicRuleDestination();
    TopicRuleDestination(Aws::Utils::Json::JsonView jsonValue);
    TopicRuleDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The topic rule destination URL.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline TopicRuleDestination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline TopicRuleDestination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The topic rule destination URL.</p>
     */
    inline TopicRuleDestination& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline TopicRuleDestination& WithStatus(const TopicRuleDestinationStatus& value) { SetStatus(value); return *this;}

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
    inline TopicRuleDestination& WithStatus(TopicRuleDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline TopicRuleDestination& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline TopicRuleDestination& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline TopicRuleDestination& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline const HttpUrlDestinationProperties& GetHttpUrlProperties() const{ return m_httpUrlProperties; }

    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline bool HttpUrlPropertiesHasBeenSet() const { return m_httpUrlPropertiesHasBeenSet; }

    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline void SetHttpUrlProperties(const HttpUrlDestinationProperties& value) { m_httpUrlPropertiesHasBeenSet = true; m_httpUrlProperties = value; }

    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline void SetHttpUrlProperties(HttpUrlDestinationProperties&& value) { m_httpUrlPropertiesHasBeenSet = true; m_httpUrlProperties = std::move(value); }

    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline TopicRuleDestination& WithHttpUrlProperties(const HttpUrlDestinationProperties& value) { SetHttpUrlProperties(value); return *this;}

    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline TopicRuleDestination& WithHttpUrlProperties(HttpUrlDestinationProperties&& value) { SetHttpUrlProperties(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    TopicRuleDestinationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    HttpUrlDestinationProperties m_httpUrlProperties;
    bool m_httpUrlPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
