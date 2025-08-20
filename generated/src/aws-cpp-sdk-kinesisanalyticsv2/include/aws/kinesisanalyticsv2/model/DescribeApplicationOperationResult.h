/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationOperationInfoDetails.h>
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
  /**
   * <p>Provides details of the operation that corresponds to the operation ID on a
   * Managed Service for Apache Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationOperationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationOperationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult() = default;
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationOperationInfoDetails& GetApplicationOperationInfoDetails() const { return m_applicationOperationInfoDetails; }
    template<typename ApplicationOperationInfoDetailsT = ApplicationOperationInfoDetails>
    void SetApplicationOperationInfoDetails(ApplicationOperationInfoDetailsT&& value) { m_applicationOperationInfoDetailsHasBeenSet = true; m_applicationOperationInfoDetails = std::forward<ApplicationOperationInfoDetailsT>(value); }
    template<typename ApplicationOperationInfoDetailsT = ApplicationOperationInfoDetails>
    DescribeApplicationOperationResult& WithApplicationOperationInfoDetails(ApplicationOperationInfoDetailsT&& value) { SetApplicationOperationInfoDetails(std::forward<ApplicationOperationInfoDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationOperationInfoDetails m_applicationOperationInfoDetails;
    bool m_applicationOperationInfoDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
