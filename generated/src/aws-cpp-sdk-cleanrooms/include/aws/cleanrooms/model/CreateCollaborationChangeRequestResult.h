/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationChangeRequest.h>
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
namespace CleanRooms
{
namespace Model
{
  class CreateCollaborationChangeRequestResult
  {
  public:
    AWS_CLEANROOMS_API CreateCollaborationChangeRequestResult() = default;
    AWS_CLEANROOMS_API CreateCollaborationChangeRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateCollaborationChangeRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const CollaborationChangeRequest& GetCollaborationChangeRequest() const { return m_collaborationChangeRequest; }
    template<typename CollaborationChangeRequestT = CollaborationChangeRequest>
    void SetCollaborationChangeRequest(CollaborationChangeRequestT&& value) { m_collaborationChangeRequestHasBeenSet = true; m_collaborationChangeRequest = std::forward<CollaborationChangeRequestT>(value); }
    template<typename CollaborationChangeRequestT = CollaborationChangeRequest>
    CreateCollaborationChangeRequestResult& WithCollaborationChangeRequest(CollaborationChangeRequestT&& value) { SetCollaborationChangeRequest(std::forward<CollaborationChangeRequestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCollaborationChangeRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CollaborationChangeRequest m_collaborationChangeRequest;
    bool m_collaborationChangeRequestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
