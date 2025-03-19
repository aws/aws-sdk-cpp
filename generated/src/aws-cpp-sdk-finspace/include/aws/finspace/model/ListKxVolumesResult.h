/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolume.h>
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
namespace finspace
{
namespace Model
{
  class ListKxVolumesResult
  {
  public:
    AWS_FINSPACE_API ListKxVolumesResult() = default;
    AWS_FINSPACE_API ListKxVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A summary of volumes. </p>
     */
    inline const Aws::Vector<KxVolume>& GetKxVolumeSummaries() const { return m_kxVolumeSummaries; }
    template<typename KxVolumeSummariesT = Aws::Vector<KxVolume>>
    void SetKxVolumeSummaries(KxVolumeSummariesT&& value) { m_kxVolumeSummariesHasBeenSet = true; m_kxVolumeSummaries = std::forward<KxVolumeSummariesT>(value); }
    template<typename KxVolumeSummariesT = Aws::Vector<KxVolume>>
    ListKxVolumesResult& WithKxVolumeSummaries(KxVolumeSummariesT&& value) { SetKxVolumeSummaries(std::forward<KxVolumeSummariesT>(value)); return *this;}
    template<typename KxVolumeSummariesT = KxVolume>
    ListKxVolumesResult& AddKxVolumeSummaries(KxVolumeSummariesT&& value) { m_kxVolumeSummariesHasBeenSet = true; m_kxVolumeSummaries.emplace_back(std::forward<KxVolumeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxVolumesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxVolumesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxVolume> m_kxVolumeSummaries;
    bool m_kxVolumeSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
