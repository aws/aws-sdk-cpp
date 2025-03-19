/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfigurationDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AddApplicationInputProcessingConfigurationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult() = default;
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    AddApplicationInputProcessingConfigurationResult& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version. </p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Kinesis Data Analytics assigns to each input configuration that you add to
     * your application.</p>
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    AddApplicationInputProcessingConfigurationResult& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline const InputProcessingConfigurationDescription& GetInputProcessingConfigurationDescription() const { return m_inputProcessingConfigurationDescription; }
    template<typename InputProcessingConfigurationDescriptionT = InputProcessingConfigurationDescription>
    void SetInputProcessingConfigurationDescription(InputProcessingConfigurationDescriptionT&& value) { m_inputProcessingConfigurationDescriptionHasBeenSet = true; m_inputProcessingConfigurationDescription = std::forward<InputProcessingConfigurationDescriptionT>(value); }
    template<typename InputProcessingConfigurationDescriptionT = InputProcessingConfigurationDescription>
    AddApplicationInputProcessingConfigurationResult& WithInputProcessingConfigurationDescription(InputProcessingConfigurationDescriptionT&& value) { SetInputProcessingConfigurationDescription(std::forward<InputProcessingConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddApplicationInputProcessingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    InputProcessingConfigurationDescription m_inputProcessingConfigurationDescription;
    bool m_inputProcessingConfigurationDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
