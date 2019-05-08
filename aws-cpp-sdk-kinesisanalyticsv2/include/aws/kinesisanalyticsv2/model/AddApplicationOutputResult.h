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
#include <aws/kinesisanalyticsv2/model/OutputDescription.h>
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
  class AWS_KINESISANALYTICSV2_API AddApplicationOutputResult
  {
  public:
    AddApplicationOutputResult();
    AddApplicationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddApplicationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationOutputResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationOutputResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationOutputResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline AddApplicationOutputResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const{ return m_outputDescriptions; }

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline void SetOutputDescriptions(const Aws::Vector<OutputDescription>& value) { m_outputDescriptions = value; }

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline void SetOutputDescriptions(Aws::Vector<OutputDescription>&& value) { m_outputDescriptions = std::move(value); }

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline AddApplicationOutputResult& WithOutputDescriptions(const Aws::Vector<OutputDescription>& value) { SetOutputDescriptions(value); return *this;}

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline AddApplicationOutputResult& WithOutputDescriptions(Aws::Vector<OutputDescription>&& value) { SetOutputDescriptions(std::move(value)); return *this;}

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline AddApplicationOutputResult& AddOutputDescriptions(const OutputDescription& value) { m_outputDescriptions.push_back(value); return *this; }

    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline AddApplicationOutputResult& AddOutputDescriptions(OutputDescription&& value) { m_outputDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<OutputDescription> m_outputDescriptions;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
