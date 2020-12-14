/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/SnsChannelConfig.h>
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
  class AWS_DEVOPSGURU_API NotificationChannelConfig
  {
  public:
    NotificationChannelConfig();
    NotificationChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    NotificationChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline const SnsChannelConfig& GetSns() const{ return m_sns; }

    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }

    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline void SetSns(const SnsChannelConfig& value) { m_snsHasBeenSet = true; m_sns = value; }

    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline void SetSns(SnsChannelConfig&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }

    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline NotificationChannelConfig& WithSns(const SnsChannelConfig& value) { SetSns(value); return *this;}

    /**
     * <p> Information about a notification channel configured in DevOps Guru to send
     * notifications when insights are created. </p> <p>If you use an Amazon SNS topic
     * in another account, you must attach a policy to it that grants DevOps Guru
     * permission to it notifications. DevOps Guru adds the required policy on your
     * behalf to send notifications using Amazon SNS in your account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
     * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
     * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
     * then you must add permissions to the CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
     * for AWS KMS–encrypted Amazon SNS topics</a>.</p>
     */
    inline NotificationChannelConfig& WithSns(SnsChannelConfig&& value) { SetSns(std::move(value)); return *this;}

  private:

    SnsChannelConfig m_sns;
    bool m_snsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
