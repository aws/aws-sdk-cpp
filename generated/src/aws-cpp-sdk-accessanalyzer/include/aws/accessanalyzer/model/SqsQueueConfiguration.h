﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon SQS queue. You can
   * propose a configuration for a new Amazon SQS queue or an existing Amazon SQS
   * queue that you own by specifying the Amazon SQS policy. If the configuration is
   * for an existing Amazon SQS queue and you do not specify the Amazon SQS policy,
   * the access preview uses the existing Amazon SQS policy for the queue. If the
   * access preview is for a new resource and you do not specify the policy, the
   * access preview assumes an Amazon SQS queue without a policy. To propose deletion
   * of an existing Amazon SQS queue policy, you can specify an empty string for the
   * Amazon SQS policy. For more information about Amazon SQS policy limits, see <a
   * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/quotas-policies.html">Quotas
   * related to policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SqsQueueConfiguration">AWS
   * API Reference</a></p>
   */
  class SqsQueueConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API SqsQueueConfiguration() = default;
    AWS_ACCESSANALYZER_API SqsQueueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API SqsQueueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The proposed resource policy for the Amazon SQS queue. </p>
     */
    inline const Aws::String& GetQueuePolicy() const { return m_queuePolicy; }
    inline bool QueuePolicyHasBeenSet() const { return m_queuePolicyHasBeenSet; }
    template<typename QueuePolicyT = Aws::String>
    void SetQueuePolicy(QueuePolicyT&& value) { m_queuePolicyHasBeenSet = true; m_queuePolicy = std::forward<QueuePolicyT>(value); }
    template<typename QueuePolicyT = Aws::String>
    SqsQueueConfiguration& WithQueuePolicy(QueuePolicyT&& value) { SetQueuePolicy(std::forward<QueuePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queuePolicy;
    bool m_queuePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
