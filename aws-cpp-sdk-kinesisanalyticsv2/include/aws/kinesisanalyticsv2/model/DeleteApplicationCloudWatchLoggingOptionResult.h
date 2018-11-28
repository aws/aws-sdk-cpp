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
#include <aws/kinesisanalyticsv2/model/CloudWatchLoggingOptionDescription.h>
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
  class AWS_KINESISANALYTICSV2_API DeleteApplicationCloudWatchLoggingOptionResult
  {
  public:
    DeleteApplicationCloudWatchLoggingOptionResult();
    DeleteApplicationCloudWatchLoggingOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteApplicationCloudWatchLoggingOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The version ID of the application. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you change the CloudWatch logging
     * options.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>The version ID of the application. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you change the CloudWatch logging
     * options.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>The version ID of the application. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you change the CloudWatch logging
     * options.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const{ return m_cloudWatchLoggingOptionDescriptions; }

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline void SetCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { m_cloudWatchLoggingOptionDescriptions = value; }

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline void SetCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { m_cloudWatchLoggingOptionDescriptions = std::move(value); }

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { SetCloudWatchLoggingOptionDescriptions(value); return *this;}

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { SetCloudWatchLoggingOptionDescriptions(std::move(value)); return *this;}

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& AddCloudWatchLoggingOptionDescriptions(const CloudWatchLoggingOptionDescription& value) { m_cloudWatchLoggingOptionDescriptions.push_back(value); return *this; }

    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionResult& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescription&& value) { m_cloudWatchLoggingOptionDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
