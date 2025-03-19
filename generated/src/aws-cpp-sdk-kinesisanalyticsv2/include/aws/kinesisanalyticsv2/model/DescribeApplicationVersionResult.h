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
  class DescribeApplicationVersionResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult() = default;
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationDetail& GetApplicationVersionDetail() const { return m_applicationVersionDetail; }
    template<typename ApplicationVersionDetailT = ApplicationDetail>
    void SetApplicationVersionDetail(ApplicationVersionDetailT&& value) { m_applicationVersionDetailHasBeenSet = true; m_applicationVersionDetail = std::forward<ApplicationVersionDetailT>(value); }
    template<typename ApplicationVersionDetailT = ApplicationDetail>
    DescribeApplicationVersionResult& WithApplicationVersionDetail(ApplicationVersionDetailT&& value) { SetApplicationVersionDetail(std::forward<ApplicationVersionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationDetail m_applicationVersionDetail;
    bool m_applicationVersionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
