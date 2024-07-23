/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationIdNamespaceAssociation.h>
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
  class GetCollaborationIdNamespaceAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult();
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID namespace association that you requested.</p>
     */
    inline const CollaborationIdNamespaceAssociation& GetCollaborationIdNamespaceAssociation() const{ return m_collaborationIdNamespaceAssociation; }
    inline void SetCollaborationIdNamespaceAssociation(const CollaborationIdNamespaceAssociation& value) { m_collaborationIdNamespaceAssociation = value; }
    inline void SetCollaborationIdNamespaceAssociation(CollaborationIdNamespaceAssociation&& value) { m_collaborationIdNamespaceAssociation = std::move(value); }
    inline GetCollaborationIdNamespaceAssociationResult& WithCollaborationIdNamespaceAssociation(const CollaborationIdNamespaceAssociation& value) { SetCollaborationIdNamespaceAssociation(value); return *this;}
    inline GetCollaborationIdNamespaceAssociationResult& WithCollaborationIdNamespaceAssociation(CollaborationIdNamespaceAssociation&& value) { SetCollaborationIdNamespaceAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCollaborationIdNamespaceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCollaborationIdNamespaceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCollaborationIdNamespaceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CollaborationIdNamespaceAssociation m_collaborationIdNamespaceAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
