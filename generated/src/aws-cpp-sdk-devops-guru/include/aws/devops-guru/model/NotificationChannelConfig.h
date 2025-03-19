/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/SnsChannelConfig.h>
#include <aws/devops-guru/model/NotificationFilterConfig.h>
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
   * <p> Information about notification channels you have configured with DevOps
   * Guru. The one supported notification channel is Amazon Simple Notification
   * Service (Amazon SNS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/NotificationChannelConfig">AWS
   * API Reference</a></p>
   */
  class NotificationChannelConfig
  {
  public:
    AWS_DEVOPSGURU_API NotificationChannelConfig() = default;
    AWS_DEVOPSGURU_API NotificationChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API NotificationChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to send it notifications. DevOps Guru adds the required policy on
     * your behalf to send notifications using Amazon SNS in your account. DevOps Guru
     * only supports standard SNS topics. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic that is
     * encrypted by an Amazon Web Services Key Management Service customer-managed key
     * (CMK), then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline const SnsChannelConfig& GetSns() const { return m_sns; }
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
    template<typename SnsT = SnsChannelConfig>
    void SetSns(SnsT&& value) { m_snsHasBeenSet = true; m_sns = std::forward<SnsT>(value); }
    template<typename SnsT = SnsChannelConfig>
    NotificationChannelConfig& WithSns(SnsT&& value) { SetSns(std::forward<SnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The filter configurations for the Amazon SNS notification topic you use with
     * DevOps Guru. If you do not provide filter configurations, the default
     * configurations are to receive notifications for all message types of
     * <code>High</code> or <code>Medium</code> severity. </p>
     */
    inline const NotificationFilterConfig& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = NotificationFilterConfig>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = NotificationFilterConfig>
    NotificationChannelConfig& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}
  private:

    SnsChannelConfig m_sns;
    bool m_snsHasBeenSet = false;

    NotificationFilterConfig m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
