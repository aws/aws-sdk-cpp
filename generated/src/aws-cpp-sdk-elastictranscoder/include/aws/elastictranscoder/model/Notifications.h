﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * in order to report job status.</p>  <p>To receive notifications, you
   * must also subscribe to the new topic in the Amazon SNS console.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Notifications">AWS
   * API Reference</a></p>
   */
  class Notifications
  {
  public:
    AWS_ELASTICTRANSCODER_API Notifications();
    AWS_ELASTICTRANSCODER_API Notifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Notifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline const Aws::String& GetProgressing() const{ return m_progressing; }
    inline bool ProgressingHasBeenSet() const { return m_progressingHasBeenSet; }
    inline void SetProgressing(const Aws::String& value) { m_progressingHasBeenSet = true; m_progressing = value; }
    inline void SetProgressing(Aws::String&& value) { m_progressingHasBeenSet = true; m_progressing = std::move(value); }
    inline void SetProgressing(const char* value) { m_progressingHasBeenSet = true; m_progressing.assign(value); }
    inline Notifications& WithProgressing(const Aws::String& value) { SetProgressing(value); return *this;}
    inline Notifications& WithProgressing(Aws::String&& value) { SetProgressing(std::move(value)); return *this;}
    inline Notifications& WithProgressing(const char* value) { SetProgressing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline const Aws::String& GetCompleted() const{ return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    inline void SetCompleted(const Aws::String& value) { m_completedHasBeenSet = true; m_completed = value; }
    inline void SetCompleted(Aws::String&& value) { m_completedHasBeenSet = true; m_completed = std::move(value); }
    inline void SetCompleted(const char* value) { m_completedHasBeenSet = true; m_completed.assign(value); }
    inline Notifications& WithCompleted(const Aws::String& value) { SetCompleted(value); return *this;}
    inline Notifications& WithCompleted(Aws::String&& value) { SetCompleted(std::move(value)); return *this;}
    inline Notifications& WithCompleted(const char* value) { SetCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline const Aws::String& GetWarning() const{ return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(const Aws::String& value) { m_warningHasBeenSet = true; m_warning = value; }
    inline void SetWarning(Aws::String&& value) { m_warningHasBeenSet = true; m_warning = std::move(value); }
    inline void SetWarning(const char* value) { m_warningHasBeenSet = true; m_warning.assign(value); }
    inline Notifications& WithWarning(const Aws::String& value) { SetWarning(value); return *this;}
    inline Notifications& WithWarning(Aws::String&& value) { SetWarning(std::move(value)); return *this;}
    inline Notifications& WithWarning(const char* value) { SetWarning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline Notifications& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline Notifications& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline Notifications& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    Aws::String m_progressing;
    bool m_progressingHasBeenSet = false;

    Aws::String m_completed;
    bool m_completedHasBeenSet = false;

    Aws::String m_warning;
    bool m_warningHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
