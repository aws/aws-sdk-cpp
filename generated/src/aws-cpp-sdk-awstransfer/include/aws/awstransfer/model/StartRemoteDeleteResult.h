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
  class StartRemoteDeleteResult
  {
  public:
    AWS_TRANSFER_API StartRemoteDeleteResult() = default;
    AWS_TRANSFER_API StartRemoteDeleteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API StartRemoteDeleteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a unique identifier for the delete operation.</p>
     */
    inline const Aws::String& GetDeleteId() const { return m_deleteId; }
    template<typename DeleteIdT = Aws::String>
    void SetDeleteId(DeleteIdT&& value) { m_deleteIdHasBeenSet = true; m_deleteId = std::forward<DeleteIdT>(value); }
    template<typename DeleteIdT = Aws::String>
    StartRemoteDeleteResult& WithDeleteId(DeleteIdT&& value) { SetDeleteId(std::forward<DeleteIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartRemoteDeleteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deleteId;
    bool m_deleteIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
