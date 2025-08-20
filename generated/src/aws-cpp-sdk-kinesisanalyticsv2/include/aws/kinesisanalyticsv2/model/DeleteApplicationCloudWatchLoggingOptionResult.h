/**
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
  class DeleteApplicationCloudWatchLoggingOptionResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationCloudWatchLoggingOptionResult() = default;
    AWS_KINESISANALYTICSV2_API DeleteApplicationCloudWatchLoggingOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DeleteApplicationCloudWatchLoggingOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the application. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you change the CloudWatch logging
     * options.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline DeleteApplicationCloudWatchLoggingOptionResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptions of the remaining CloudWatch logging options for the
     * application.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const { return m_cloudWatchLoggingOptionDescriptions; }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    void SetCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = std::forward<CloudWatchLoggingOptionDescriptionsT>(value); }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    DeleteApplicationCloudWatchLoggingOptionResult& WithCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { SetCloudWatchLoggingOptionDescriptions(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionDescriptionsT = CloudWatchLoggingOptionDescription>
    DeleteApplicationCloudWatchLoggingOptionResult& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.emplace_back(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operation ID that can be used to track the request.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    DeleteApplicationCloudWatchLoggingOptionResult& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteApplicationCloudWatchLoggingOptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;
    bool m_cloudWatchLoggingOptionDescriptionsHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
