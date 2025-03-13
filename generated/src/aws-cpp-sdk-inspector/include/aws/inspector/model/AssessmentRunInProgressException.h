/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>You cannot perform a specified action if an assessment run is currently in
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRunInProgressException">AWS
   * API Reference</a></p>
   */
  class AssessmentRunInProgressException
  {
  public:
    AWS_INSPECTOR_API AssessmentRunInProgressException() = default;
    AWS_INSPECTOR_API AssessmentRunInProgressException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunInProgressException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AssessmentRunInProgressException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const { return m_assessmentRunArns; }
    inline bool AssessmentRunArnsHasBeenSet() const { return m_assessmentRunArnsHasBeenSet; }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    void SetAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = std::forward<AssessmentRunArnsT>(value); }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    AssessmentRunInProgressException& WithAssessmentRunArns(AssessmentRunArnsT&& value) { SetAssessmentRunArns(std::forward<AssessmentRunArnsT>(value)); return *this;}
    template<typename AssessmentRunArnsT = Aws::String>
    AssessmentRunInProgressException& AddAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.emplace_back(std::forward<AssessmentRunArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boolean value that indicates whether the ARN list of the assessment runs is
     * truncated.</p>
     */
    inline bool GetAssessmentRunArnsTruncated() const { return m_assessmentRunArnsTruncated; }
    inline bool AssessmentRunArnsTruncatedHasBeenSet() const { return m_assessmentRunArnsTruncatedHasBeenSet; }
    inline void SetAssessmentRunArnsTruncated(bool value) { m_assessmentRunArnsTruncatedHasBeenSet = true; m_assessmentRunArnsTruncated = value; }
    inline AssessmentRunInProgressException& WithAssessmentRunArnsTruncated(bool value) { SetAssessmentRunArnsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const { return m_canRetry; }
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }
    inline AssessmentRunInProgressException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_assessmentRunArns;
    bool m_assessmentRunArnsHasBeenSet = false;

    bool m_assessmentRunArnsTruncated{false};
    bool m_assessmentRunArnsTruncatedHasBeenSet = false;

    bool m_canRetry{false};
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
