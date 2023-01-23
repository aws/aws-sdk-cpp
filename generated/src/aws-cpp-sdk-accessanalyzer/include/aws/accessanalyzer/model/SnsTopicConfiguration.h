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
   * <p>The proposed access control configuration for an Amazon SNS topic. You can
   * propose a configuration for a new Amazon SNS topic or an existing Amazon SNS
   * topic that you own by specifying the policy. If the configuration is for an
   * existing Amazon SNS topic and you do not specify the Amazon SNS policy, then the
   * access preview uses the existing Amazon SNS policy for the topic. If the access
   * preview is for a new resource and you do not specify the policy, then the access
   * preview assumes an Amazon SNS topic without a policy. To propose deletion of an
   * existing Amazon SNS topic policy, you can specify an empty string for the Amazon
   * SNS policy. For more information, see <a
   * href="https://docs.aws.amazon.com/sns/latest/api/API_Topic.html">Topic</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SnsTopicConfiguration">AWS
   * API Reference</a></p>
   */
  class SnsTopicConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API SnsTopicConfiguration();
    AWS_ACCESSANALYZER_API SnsTopicConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API SnsTopicConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTopicPolicy() const{ return m_topicPolicy; }

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline bool TopicPolicyHasBeenSet() const { return m_topicPolicyHasBeenSet; }

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline void SetTopicPolicy(const Aws::String& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = value; }

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline void SetTopicPolicy(Aws::String&& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = std::move(value); }

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline void SetTopicPolicy(const char* value) { m_topicPolicyHasBeenSet = true; m_topicPolicy.assign(value); }

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline SnsTopicConfiguration& WithTopicPolicy(const Aws::String& value) { SetTopicPolicy(value); return *this;}

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline SnsTopicConfiguration& WithTopicPolicy(Aws::String&& value) { SetTopicPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON policy text that defines who can access an Amazon SNS topic. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-access-policy-use-cases.html">Example
     * cases for Amazon SNS access control</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p>
     */
    inline SnsTopicConfiguration& WithTopicPolicy(const char* value) { SetTopicPolicy(value); return *this;}

  private:

    Aws::String m_topicPolicy;
    bool m_topicPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
