/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class StartRemoteMoveResult
  {
  public:
    AWS_TRANSFER_API StartRemoteMoveResult() = default;
    AWS_TRANSFER_API StartRemoteMoveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API StartRemoteMoveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a unique identifier for the move/rename operation.</p>
     */
    inline const Aws::String& GetMoveId() const { return m_moveId; }
    template<typename MoveIdT = Aws::String>
    void SetMoveId(MoveIdT&& value) { m_moveIdHasBeenSet = true; m_moveId = std::forward<MoveIdT>(value); }
    template<typename MoveIdT = Aws::String>
    StartRemoteMoveResult& WithMoveId(MoveIdT&& value) { SetMoveId(std::forward<MoveIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartRemoteMoveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_moveId;
    bool m_moveIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
