/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/NotificationMessageType.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> The filter configurations for the Amazon SNS notification topic you use with
   * DevOps Guru. You can choose to specify which events or message types to receive
   * notifications for. You can also choose to specify which severity levels to
   * receive notifications for. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/NotificationFilterConfig">AWS
   * API Reference</a></p>
   */
  class NotificationFilterConfig
  {
  public:
    AWS_DEVOPSGURU_API NotificationFilterConfig() = default;
    AWS_DEVOPSGURU_API NotificationFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API NotificationFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The severity levels that you want to receive notifications for. For example,
     * you can choose to receive notifications only for insights with <code>HIGH</code>
     * and <code>MEDIUM</code> severity levels. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a>. </p>
     */
    inline const Aws::Vector<InsightSeverity>& GetSeverities() const { return m_severities; }
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }
    template<typename SeveritiesT = Aws::Vector<InsightSeverity>>
    void SetSeverities(SeveritiesT&& value) { m_severitiesHasBeenSet = true; m_severities = std::forward<SeveritiesT>(value); }
    template<typename SeveritiesT = Aws::Vector<InsightSeverity>>
    NotificationFilterConfig& WithSeverities(SeveritiesT&& value) { SetSeverities(std::forward<SeveritiesT>(value)); return *this;}
    inline NotificationFilterConfig& AddSeverities(InsightSeverity value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The events that you want to receive notifications for. For example, you can
     * choose to receive notifications only when the severity level is upgraded or a
     * new insight is created. </p>
     */
    inline const Aws::Vector<NotificationMessageType>& GetMessageTypes() const { return m_messageTypes; }
    inline bool MessageTypesHasBeenSet() const { return m_messageTypesHasBeenSet; }
    template<typename MessageTypesT = Aws::Vector<NotificationMessageType>>
    void SetMessageTypes(MessageTypesT&& value) { m_messageTypesHasBeenSet = true; m_messageTypes = std::forward<MessageTypesT>(value); }
    template<typename MessageTypesT = Aws::Vector<NotificationMessageType>>
    NotificationFilterConfig& WithMessageTypes(MessageTypesT&& value) { SetMessageTypes(std::forward<MessageTypesT>(value)); return *this;}
    inline NotificationFilterConfig& AddMessageTypes(NotificationMessageType value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<InsightSeverity> m_severities;
    bool m_severitiesHasBeenSet = false;

    Aws::Vector<NotificationMessageType> m_messageTypes;
    bool m_messageTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
