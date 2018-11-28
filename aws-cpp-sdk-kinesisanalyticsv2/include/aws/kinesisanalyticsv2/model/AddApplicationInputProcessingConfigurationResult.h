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
  class AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationResult
  {
  public:
    AddApplicationInputProcessingConfigurationResult();
    AddApplicationInputProcessingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddApplicationInputProcessingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>Provides the current application version.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>Provides the current application version.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputId = value; }

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputId = std::move(value); }

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline void SetInputId(const char* value) { m_inputId.assign(value); }

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Amazon Kinesis Data Analytics assigns to each input configuration that you
     * add to your application.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline const InputProcessingConfigurationDescription& GetInputProcessingConfigurationDescription() const{ return m_inputProcessingConfigurationDescription; }

    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline void SetInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { m_inputProcessingConfigurationDescription = value; }

    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline void SetInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { m_inputProcessingConfigurationDescription = std::move(value); }

    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { SetInputProcessingConfigurationDescription(value); return *this;}

    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline AddApplicationInputProcessingConfigurationResult& WithInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { SetInputProcessingConfigurationDescription(std::move(value)); return *this;}

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::String m_inputId;

    InputProcessingConfigurationDescription m_inputProcessingConfigurationDescription;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
