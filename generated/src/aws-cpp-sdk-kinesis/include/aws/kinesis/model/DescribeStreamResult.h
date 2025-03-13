/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/StreamDescription.h>
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
  /**
   * <p>Represents the output for <code>DescribeStream</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeStreamOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStreamResult
  {
  public:
    AWS_KINESIS_API DescribeStreamResult() = default;
    AWS_KINESIS_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline const StreamDescription& GetStreamDescription() const { return m_streamDescription; }
    template<typename StreamDescriptionT = StreamDescription>
    void SetStreamDescription(StreamDescriptionT&& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = std::forward<StreamDescriptionT>(value); }
    template<typename StreamDescriptionT = StreamDescription>
    DescribeStreamResult& WithStreamDescription(StreamDescriptionT&& value) { SetStreamDescription(std::forward<StreamDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StreamDescription m_streamDescription;
    bool m_streamDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
