/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRuleDestinationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/HttpUrlDestinationProperties.h>
#include <aws/iot/model/VpcDestinationProperties.h>
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
  class TopicRuleDestination
  {
  public:
    AWS_IOT_API TopicRuleDestination() = default;
    AWS_IOT_API TopicRuleDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRuleDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic rule destination URL.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TopicRuleDestination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline TopicRuleDestinationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TopicRuleDestinationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TopicRuleDestination& WithStatus(TopicRuleDestinationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the topic rule destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TopicRuleDestination& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the topic rule destination was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    TopicRuleDestination& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details or reason why the topic rule destination is in the current
     * status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TopicRuleDestination& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the HTTP URL.</p>
     */
    inline const HttpUrlDestinationProperties& GetHttpUrlProperties() const { return m_httpUrlProperties; }
    inline bool HttpUrlPropertiesHasBeenSet() const { return m_httpUrlPropertiesHasBeenSet; }
    template<typename HttpUrlPropertiesT = HttpUrlDestinationProperties>
    void SetHttpUrlProperties(HttpUrlPropertiesT&& value) { m_httpUrlPropertiesHasBeenSet = true; m_httpUrlProperties = std::forward<HttpUrlPropertiesT>(value); }
    template<typename HttpUrlPropertiesT = HttpUrlDestinationProperties>
    TopicRuleDestination& WithHttpUrlProperties(HttpUrlPropertiesT&& value) { SetHttpUrlProperties(std::forward<HttpUrlPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the virtual private cloud (VPC) connection.</p>
     */
    inline const VpcDestinationProperties& GetVpcProperties() const { return m_vpcProperties; }
    inline bool VpcPropertiesHasBeenSet() const { return m_vpcPropertiesHasBeenSet; }
    template<typename VpcPropertiesT = VpcDestinationProperties>
    void SetVpcProperties(VpcPropertiesT&& value) { m_vpcPropertiesHasBeenSet = true; m_vpcProperties = std::forward<VpcPropertiesT>(value); }
    template<typename VpcPropertiesT = VpcDestinationProperties>
    TopicRuleDestination& WithVpcProperties(VpcPropertiesT&& value) { SetVpcProperties(std::forward<VpcPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    TopicRuleDestinationStatus m_status{TopicRuleDestinationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    HttpUrlDestinationProperties m_httpUrlProperties;
    bool m_httpUrlPropertiesHasBeenSet = false;

    VpcDestinationProperties m_vpcProperties;
    bool m_vpcPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
