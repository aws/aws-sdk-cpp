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
   * Provides details of the operation corresponding to the operation-ID on a Managed
   * Service for Apache Flink application<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationOperationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationOperationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult();
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationOperationInfoDetails& GetApplicationOperationInfoDetails() const{ return m_applicationOperationInfoDetails; }
    inline void SetApplicationOperationInfoDetails(const ApplicationOperationInfoDetails& value) { m_applicationOperationInfoDetails = value; }
    inline void SetApplicationOperationInfoDetails(ApplicationOperationInfoDetails&& value) { m_applicationOperationInfoDetails = std::move(value); }
    inline DescribeApplicationOperationResult& WithApplicationOperationInfoDetails(const ApplicationOperationInfoDetails& value) { SetApplicationOperationInfoDetails(value); return *this;}
    inline DescribeApplicationOperationResult& WithApplicationOperationInfoDetails(ApplicationOperationInfoDetails&& value) { SetApplicationOperationInfoDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeApplicationOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeApplicationOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeApplicationOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationOperationInfoDetails m_applicationOperationInfoDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
