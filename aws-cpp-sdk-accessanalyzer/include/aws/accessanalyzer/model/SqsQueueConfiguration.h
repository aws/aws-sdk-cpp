/**
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
   * <p>The proposed access control configuration for an SQS queue. You can propose a
   * configuration for a new SQS queue or an existing SQS queue that you own by
   * specifying the SQS policy. If the configuration is for an existing SQS queue and
   * you do not specify the SQS policy, the access preview uses the existing SQS
   * policy for the queue. If the access preview is for a new resource and you do not
   * specify the policy, the access preview assumes an SQS queue without a policy. To
   * propose deletion of an existing SQS queue policy, you can specify an empty
   * string for the SQS policy. For more information about SQS policy limits, see <a
   * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/quotas-policies.html">Quotas
   * related to policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SqsQueueConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API SqsQueueConfiguration
  {
  public:
    SqsQueueConfiguration();
    SqsQueueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SqsQueueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline const Aws::String& GetQueuePolicy() const{ return m_queuePolicy; }

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline bool QueuePolicyHasBeenSet() const { return m_queuePolicyHasBeenSet; }

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline void SetQueuePolicy(const Aws::String& value) { m_queuePolicyHasBeenSet = true; m_queuePolicy = value; }

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline void SetQueuePolicy(Aws::String&& value) { m_queuePolicyHasBeenSet = true; m_queuePolicy = std::move(value); }

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline void SetQueuePolicy(const char* value) { m_queuePolicyHasBeenSet = true; m_queuePolicy.assign(value); }

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline SqsQueueConfiguration& WithQueuePolicy(const Aws::String& value) { SetQueuePolicy(value); return *this;}

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline SqsQueueConfiguration& WithQueuePolicy(Aws::String&& value) { SetQueuePolicy(std::move(value)); return *this;}

    /**
     * <p> The proposed resource policy for the SQS queue. </p>
     */
    inline SqsQueueConfiguration& WithQueuePolicy(const char* value) { SetQueuePolicy(value); return *this;}

  private:

    Aws::String m_queuePolicy;
    bool m_queuePolicyHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
