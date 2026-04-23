/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service (Amazon SNS) topic or topics to notify
   * in order to report job status.</p> <important> <p>To receive notifications, you
   * must also subscribe to the new topic in the Amazon SNS console.</p>
   * </important><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Notifications">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API Notifications
  {
  public:
    Notifications();
    Notifications(Aws::Utils::Json::JsonView jsonValue);
    Notifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline const Aws::String& GetProgressing() const{ return m_progressing; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline bool ProgressingHasBeenSet() const { return m_progressingHasBeenSet; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline void SetProgressing(const Aws::String& value) { m_progressingHasBeenSet = true; m_progressing = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline void SetProgressing(Aws::String&& value) { m_progressingHasBeenSet = true; m_progressing = std::move(value); }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline void SetProgressing(const char* value) { m_progressingHasBeenSet = true; m_progressing.assign(value); }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline Notifications& WithProgressing(const Aws::String& value) { SetProgressing(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline Notifications& WithProgressing(Aws::String&& value) { SetProgressing(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline Notifications& WithProgressing(const char* value) { SetProgressing(value); return *this;}


    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline const Aws::String& GetCompleted() const{ return m_completed; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline void SetCompleted(const Aws::String& value) { m_completedHasBeenSet = true; m_completed = value; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline void SetCompleted(Aws::String&& value) { m_completedHasBeenSet = true; m_completed = std::move(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline void SetCompleted(const char* value) { m_completedHasBeenSet = true; m_completed.assign(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline Notifications& WithCompleted(const Aws::String& value) { SetCompleted(value); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline Notifications& WithCompleted(Aws::String&& value) { SetCompleted(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline Notifications& WithCompleted(const char* value) { SetCompleted(value); return *this;}


    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline const Aws::String& GetWarning() const{ return m_warning; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline void SetWarning(const Aws::String& value) { m_warningHasBeenSet = true; m_warning = value; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline void SetWarning(Aws::String&& value) { m_warningHasBeenSet = true; m_warning = std::move(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline void SetWarning(const char* value) { m_warningHasBeenSet = true; m_warning.assign(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline Notifications& WithWarning(const Aws::String& value) { SetWarning(value); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline Notifications& WithWarning(Aws::String&& value) { SetWarning(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline Notifications& WithWarning(const char* value) { SetWarning(value); return *this;}


    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline Notifications& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline Notifications& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline Notifications& WithError(const char* value) { SetError(value); return *this;}

  private:

    Aws::String m_progressing;
    bool m_progressingHasBeenSet;

    Aws::String m_completed;
    bool m_completedHasBeenSet;

    Aws::String m_warning;
    bool m_warningHasBeenSet;

    Aws::String m_error;
    bool m_errorHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
