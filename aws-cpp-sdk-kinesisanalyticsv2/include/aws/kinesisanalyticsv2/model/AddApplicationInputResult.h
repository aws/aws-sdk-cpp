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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/InputDescription.h>
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
  class AWS_KINESISANALYTICSV2_API AddApplicationInputResult
  {
  public:
    AddApplicationInputResult();
    AddApplicationInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddApplicationInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AddApplicationInputResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline AddApplicationInputResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline AddApplicationInputResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


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
    inline AddApplicationInputResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>Describes the application input configuration. </p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const{ return m_inputDescriptions; }

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline void SetInputDescriptions(const Aws::Vector<InputDescription>& value) { m_inputDescriptions = value; }

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline void SetInputDescriptions(Aws::Vector<InputDescription>&& value) { m_inputDescriptions = std::move(value); }

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline AddApplicationInputResult& WithInputDescriptions(const Aws::Vector<InputDescription>& value) { SetInputDescriptions(value); return *this;}

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline AddApplicationInputResult& WithInputDescriptions(Aws::Vector<InputDescription>&& value) { SetInputDescriptions(std::move(value)); return *this;}

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline AddApplicationInputResult& AddInputDescriptions(const InputDescription& value) { m_inputDescriptions.push_back(value); return *this; }

    /**
     * <p>Describes the application input configuration. </p>
     */
    inline AddApplicationInputResult& AddInputDescriptions(InputDescription&& value) { m_inputDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<InputDescription> m_inputDescriptions;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
