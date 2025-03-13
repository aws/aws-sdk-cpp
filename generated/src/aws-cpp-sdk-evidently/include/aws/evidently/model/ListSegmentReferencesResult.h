/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/RefResource.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListSegmentReferencesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSegmentReferencesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline const Aws::Vector<RefResource>& GetReferencedBy() const { return m_referencedBy; }
    template<typename ReferencedByT = Aws::Vector<RefResource>>
    void SetReferencedBy(ReferencedByT&& value) { m_referencedByHasBeenSet = true; m_referencedBy = std::forward<ReferencedByT>(value); }
    template<typename ReferencedByT = Aws::Vector<RefResource>>
    ListSegmentReferencesResult& WithReferencedBy(ReferencedByT&& value) { SetReferencedBy(std::forward<ReferencedByT>(value)); return *this;}
    template<typename ReferencedByT = RefResource>
    ListSegmentReferencesResult& AddReferencedBy(ReferencedByT&& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace_back(std::forward<ReferencedByT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSegmentReferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RefResource> m_referencedBy;
    bool m_referencedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
