/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamSummary.h>
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
   * <p>Represents the output for <code>ListStreams</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListStreamsOutput">AWS
   * API Reference</a></p>
   */
  class ListStreamsResult
  {
  public:
    AWS_KINESIS_API ListStreamsResult() = default;
    AWS_KINESIS_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStreamNames() const { return m_streamNames; }
    template<typename StreamNamesT = Aws::Vector<Aws::String>>
    void SetStreamNames(StreamNamesT&& value) { m_streamNamesHasBeenSet = true; m_streamNames = std::forward<StreamNamesT>(value); }
    template<typename StreamNamesT = Aws::Vector<Aws::String>>
    ListStreamsResult& WithStreamNames(StreamNamesT&& value) { SetStreamNames(std::forward<StreamNamesT>(value)); return *this;}
    template<typename StreamNamesT = Aws::String>
    ListStreamsResult& AddStreamNames(StreamNamesT&& value) { m_streamNamesHasBeenSet = true; m_streamNames.emplace_back(std::forward<StreamNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, there are more streams available to list.</p>
     */
    inline bool GetHasMoreStreams() const { return m_hasMoreStreams; }
    inline void SetHasMoreStreams(bool value) { m_hasMoreStreamsHasBeenSet = true; m_hasMoreStreams = value; }
    inline ListStreamsResult& WithHasMoreStreams(bool value) { SetHasMoreStreams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<StreamSummary>& GetStreamSummaries() const { return m_streamSummaries; }
    template<typename StreamSummariesT = Aws::Vector<StreamSummary>>
    void SetStreamSummaries(StreamSummariesT&& value) { m_streamSummariesHasBeenSet = true; m_streamSummaries = std::forward<StreamSummariesT>(value); }
    template<typename StreamSummariesT = Aws::Vector<StreamSummary>>
    ListStreamsResult& WithStreamSummaries(StreamSummariesT&& value) { SetStreamSummaries(std::forward<StreamSummariesT>(value)); return *this;}
    template<typename StreamSummariesT = StreamSummary>
    ListStreamsResult& AddStreamSummaries(StreamSummariesT&& value) { m_streamSummariesHasBeenSet = true; m_streamSummaries.emplace_back(std::forward<StreamSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_streamNames;
    bool m_streamNamesHasBeenSet = false;

    bool m_hasMoreStreams{false};
    bool m_hasMoreStreamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StreamSummary> m_streamSummaries;
    bool m_streamSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
