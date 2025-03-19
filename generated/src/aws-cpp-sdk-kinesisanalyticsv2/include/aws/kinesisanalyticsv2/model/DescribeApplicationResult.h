/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationResult() = default;
    AWS_KINESISANALYTICSV2_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides a description of the application, such as the application's Amazon
     * Resource Name (ARN), status, and latest version.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const { return m_applicationDetail; }
    template<typename ApplicationDetailT = ApplicationDetail>
    void SetApplicationDetail(ApplicationDetailT&& value) { m_applicationDetailHasBeenSet = true; m_applicationDetail = std::forward<ApplicationDetailT>(value); }
    template<typename ApplicationDetailT = ApplicationDetail>
    DescribeApplicationResult& WithApplicationDetail(ApplicationDetailT&& value) { SetApplicationDetail(std::forward<ApplicationDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationDetail m_applicationDetail;
    bool m_applicationDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
