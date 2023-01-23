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
    AWS_INSPECTOR_API AssessmentRunInProgressException();
    AWS_INSPECTOR_API AssessmentRunInProgressException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunInProgressException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline AssessmentRunInProgressException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline AssessmentRunInProgressException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline AssessmentRunInProgressException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const{ return m_assessmentRunArns; }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline bool AssessmentRunArnsHasBeenSet() const { return m_assessmentRunArnsHasBeenSet; }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline void SetAssessmentRunArns(const Aws::Vector<Aws::String>& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = value; }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline void SetAssessmentRunArns(Aws::Vector<Aws::String>&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = std::move(value); }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline AssessmentRunInProgressException& WithAssessmentRunArns(const Aws::Vector<Aws::String>& value) { SetAssessmentRunArns(value); return *this;}

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline AssessmentRunInProgressException& WithAssessmentRunArns(Aws::Vector<Aws::String>&& value) { SetAssessmentRunArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline AssessmentRunInProgressException& AddAssessmentRunArns(const Aws::String& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline AssessmentRunInProgressException& AddAssessmentRunArns(Aws::String&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the assessment runs that are currently in progress.</p>
     */
    inline AssessmentRunInProgressException& AddAssessmentRunArns(const char* value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(value); return *this; }


    /**
     * <p>Boolean value that indicates whether the ARN list of the assessment runs is
     * truncated.</p>
     */
    inline bool GetAssessmentRunArnsTruncated() const{ return m_assessmentRunArnsTruncated; }

    /**
     * <p>Boolean value that indicates whether the ARN list of the assessment runs is
     * truncated.</p>
     */
    inline bool AssessmentRunArnsTruncatedHasBeenSet() const { return m_assessmentRunArnsTruncatedHasBeenSet; }

    /**
     * <p>Boolean value that indicates whether the ARN list of the assessment runs is
     * truncated.</p>
     */
    inline void SetAssessmentRunArnsTruncated(bool value) { m_assessmentRunArnsTruncatedHasBeenSet = true; m_assessmentRunArnsTruncated = value; }

    /**
     * <p>Boolean value that indicates whether the ARN list of the assessment runs is
     * truncated.</p>
     */
    inline AssessmentRunInProgressException& WithAssessmentRunArnsTruncated(bool value) { SetAssessmentRunArnsTruncated(value); return *this;}


    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const{ return m_canRetry; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline AssessmentRunInProgressException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_assessmentRunArns;
    bool m_assessmentRunArnsHasBeenSet = false;

    bool m_assessmentRunArnsTruncated;
    bool m_assessmentRunArnsTruncatedHasBeenSet = false;

    bool m_canRetry;
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
