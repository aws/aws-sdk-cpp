/**
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
    AWS_ELASTICTRANSCODER_API Notifications() = default;
    AWS_ELASTICTRANSCODER_API Notifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Notifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process the job.</p>
     */
    inline const Aws::String& GetProgressing() const { return m_progressing; }
    inline bool ProgressingHasBeenSet() const { return m_progressingHasBeenSet; }
    template<typename ProgressingT = Aws::String>
    void SetProgressing(ProgressingT&& value) { m_progressingHasBeenSet = true; m_progressing = std::forward<ProgressingT>(value); }
    template<typename ProgressingT = Aws::String>
    Notifications& WithProgressing(ProgressingT&& value) { SetProgressing(std::forward<ProgressingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder has
     * finished processing the job.</p>
     */
    inline const Aws::String& GetCompleted() const { return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    template<typename CompletedT = Aws::String>
    void SetCompleted(CompletedT&& value) { m_completedHasBeenSet = true; m_completed = std::forward<CompletedT>(value); }
    template<typename CompletedT = Aws::String>
    Notifications& WithCompleted(CompletedT&& value) { SetCompleted(std::forward<CompletedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters a warning condition.</p>
     */
    inline const Aws::String& GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    template<typename WarningT = Aws::String>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = Aws::String>
    Notifications& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    Notifications& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
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
