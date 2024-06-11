﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AddApplicationCloudWatchLoggingOptionResult
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationCloudWatchLoggingOptionResult();
    AWS_KINESISANALYTICSV2_API AddApplicationCloudWatchLoggingOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationCloudWatchLoggingOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application's ARN.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }
    inline AddApplicationCloudWatchLoggingOptionResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version ID of the SQL-based Kinesis Data Analytics application.
     * Kinesis Data Analytics updates the <code>ApplicationVersionId</code> each time
     * you change the CloudWatch logging options. </p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }
    inline AddApplicationCloudWatchLoggingOptionResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptions of the current CloudWatch logging options for the SQL-based
     * Kinesis Data Analytics application.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const{ return m_cloudWatchLoggingOptionDescriptions; }
    inline void SetCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { m_cloudWatchLoggingOptionDescriptions = value; }
    inline void SetCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { m_cloudWatchLoggingOptionDescriptions = std::move(value); }
    inline AddApplicationCloudWatchLoggingOptionResult& WithCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { SetCloudWatchLoggingOptionDescriptions(value); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& WithCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { SetCloudWatchLoggingOptionDescriptions(std::move(value)); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& AddCloudWatchLoggingOptionDescriptions(const CloudWatchLoggingOptionDescription& value) { m_cloudWatchLoggingOptionDescriptions.push_back(value); return *this; }
    inline AddApplicationCloudWatchLoggingOptionResult& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescription&& value) { m_cloudWatchLoggingOptionDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddApplicationCloudWatchLoggingOptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddApplicationCloudWatchLoggingOptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
