/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/StreamDescriptionSummary.h>
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
namespace Kinesis
{
namespace Model
{
  class DescribeStreamSummaryResult
  {
  public:
    AWS_KINESIS_API DescribeStreamSummaryResult() = default;
    AWS_KINESIS_API DescribeStreamSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline const StreamDescriptionSummary& GetStreamDescriptionSummary() const { return m_streamDescriptionSummary; }
    template<typename StreamDescriptionSummaryT = StreamDescriptionSummary>
    void SetStreamDescriptionSummary(StreamDescriptionSummaryT&& value) { m_streamDescriptionSummaryHasBeenSet = true; m_streamDescriptionSummary = std::forward<StreamDescriptionSummaryT>(value); }
    template<typename StreamDescriptionSummaryT = StreamDescriptionSummary>
    DescribeStreamSummaryResult& WithStreamDescriptionSummary(StreamDescriptionSummaryT&& value) { SetStreamDescriptionSummary(std::forward<StreamDescriptionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStreamSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StreamDescriptionSummary m_streamDescriptionSummary;
    bool m_streamDescriptionSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
