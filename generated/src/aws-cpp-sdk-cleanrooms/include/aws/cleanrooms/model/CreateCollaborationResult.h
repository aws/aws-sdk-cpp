/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Collaboration.h>
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
  class CreateCollaborationResult
  {
  public:
    AWS_CLEANROOMS_API CreateCollaborationResult();
    AWS_CLEANROOMS_API CreateCollaborationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateCollaborationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collaboration.</p>
     */
    inline const Collaboration& GetCollaboration() const{ return m_collaboration; }
    inline void SetCollaboration(const Collaboration& value) { m_collaboration = value; }
    inline void SetCollaboration(Collaboration&& value) { m_collaboration = std::move(value); }
    inline CreateCollaborationResult& WithCollaboration(const Collaboration& value) { SetCollaboration(value); return *this;}
    inline CreateCollaborationResult& WithCollaboration(Collaboration&& value) { SetCollaboration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCollaborationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCollaborationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCollaborationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Collaboration m_collaboration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
