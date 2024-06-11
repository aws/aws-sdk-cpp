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
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult();
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version. </p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Kinesis Data Analytics assigns to each input configuration that you add to
     * your application.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline void SetInputId(const Aws::String& value) { m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputId.assign(value); }
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline const InputProcessingConfigurationDescription& GetInputProcessingConfigurationDescription() const{ return m_inputProcessingConfigurationDescription; }
    inline void SetInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { m_inputProcessingConfigurationDescription = value; }
    inline void SetInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { m_inputProcessingConfigurationDescription = std::move(value); }
    inline AddApplicationInputProcessingConfigurationResult& WithInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { SetInputProcessingConfigurationDescription(value); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { SetInputProcessingConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddApplicationInputProcessingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddApplicationInputProcessingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::String m_inputId;

    InputProcessingConfigurationDescription m_inputProcessingConfigurationDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
