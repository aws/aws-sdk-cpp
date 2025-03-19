/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{
  class DeleteSubnetGroupResult
  {
  public:
    AWS_DAX_API DeleteSubnetGroupResult() = default;
    AWS_DAX_API DeleteSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DeleteSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline const Aws::String& GetDeletionMessage() const { return m_deletionMessage; }
    template<typename DeletionMessageT = Aws::String>
    void SetDeletionMessage(DeletionMessageT&& value) { m_deletionMessageHasBeenSet = true; m_deletionMessage = std::forward<DeletionMessageT>(value); }
    template<typename DeletionMessageT = Aws::String>
    DeleteSubnetGroupResult& WithDeletionMessage(DeletionMessageT&& value) { SetDeletionMessage(std::forward<DeletionMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteSubnetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deletionMessage;
    bool m_deletionMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
