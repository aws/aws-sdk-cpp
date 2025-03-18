/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListDetectorsResult
  {
  public:
    AWS_GUARDDUTY_API ListDetectorsResult() = default;
    AWS_GUARDDUTY_API ListDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of detector IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetectorIds() const { return m_detectorIds; }
    template<typename DetectorIdsT = Aws::Vector<Aws::String>>
    void SetDetectorIds(DetectorIdsT&& value) { m_detectorIdsHasBeenSet = true; m_detectorIds = std::forward<DetectorIdsT>(value); }
    template<typename DetectorIdsT = Aws::Vector<Aws::String>>
    ListDetectorsResult& WithDetectorIds(DetectorIdsT&& value) { SetDetectorIds(std::forward<DetectorIdsT>(value)); return *this;}
    template<typename DetectorIdsT = Aws::String>
    ListDetectorsResult& AddDetectorIds(DetectorIdsT&& value) { m_detectorIdsHasBeenSet = true; m_detectorIds.emplace_back(std::forward<DetectorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDetectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDetectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_detectorIds;
    bool m_detectorIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
