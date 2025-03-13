/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/ApplicationDetail.h>
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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplicationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationResult
  {
  public:
    AWS_KINESISANALYTICS_API DescribeApplicationResult() = default;
    AWS_KINESISANALYTICS_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
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
} // namespace KinesisAnalytics
} // namespace Aws
