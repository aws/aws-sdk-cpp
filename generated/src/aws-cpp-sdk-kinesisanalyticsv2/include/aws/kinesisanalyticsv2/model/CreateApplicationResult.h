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
  class CreateApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationResult() = default;
    AWS_KINESISANALYTICSV2_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>In response to your <code>CreateApplication</code> request, Managed Service
     * for Apache Flink returns a response with details of the application it
     * created.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const { return m_applicationDetail; }
    template<typename ApplicationDetailT = ApplicationDetail>
    void SetApplicationDetail(ApplicationDetailT&& value) { m_applicationDetailHasBeenSet = true; m_applicationDetail = std::forward<ApplicationDetailT>(value); }
    template<typename ApplicationDetailT = ApplicationDetail>
    CreateApplicationResult& WithApplicationDetail(ApplicationDetailT&& value) { SetApplicationDetail(std::forward<ApplicationDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
