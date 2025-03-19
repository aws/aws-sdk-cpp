/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/Fragment.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class ListFragmentsResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsResult() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline const Aws::Vector<Fragment>& GetFragments() const { return m_fragments; }
    template<typename FragmentsT = Aws::Vector<Fragment>>
    void SetFragments(FragmentsT&& value) { m_fragmentsHasBeenSet = true; m_fragments = std::forward<FragmentsT>(value); }
    template<typename FragmentsT = Aws::Vector<Fragment>>
    ListFragmentsResult& WithFragments(FragmentsT&& value) { SetFragments(std::forward<FragmentsT>(value)); return *this;}
    template<typename FragmentsT = Fragment>
    ListFragmentsResult& AddFragments(FragmentsT&& value) { m_fragmentsHasBeenSet = true; m_fragments.emplace_back(std::forward<FragmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFragmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFragmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Fragment> m_fragments;
    bool m_fragmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
