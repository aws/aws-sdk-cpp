/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationConfiguredAudienceModelAssociation.h>
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
  class GetCollaborationConfiguredAudienceModelAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult();
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline const CollaborationConfiguredAudienceModelAssociation& GetCollaborationConfiguredAudienceModelAssociation() const{ return m_collaborationConfiguredAudienceModelAssociation; }

    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline void SetCollaborationConfiguredAudienceModelAssociation(const CollaborationConfiguredAudienceModelAssociation& value) { m_collaborationConfiguredAudienceModelAssociation = value; }

    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline void SetCollaborationConfiguredAudienceModelAssociation(CollaborationConfiguredAudienceModelAssociation&& value) { m_collaborationConfiguredAudienceModelAssociation = std::move(value); }

    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationResult& WithCollaborationConfiguredAudienceModelAssociation(const CollaborationConfiguredAudienceModelAssociation& value) { SetCollaborationConfiguredAudienceModelAssociation(value); return *this;}

    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationResult& WithCollaborationConfiguredAudienceModelAssociation(CollaborationConfiguredAudienceModelAssociation&& value) { SetCollaborationConfiguredAudienceModelAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCollaborationConfiguredAudienceModelAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCollaborationConfiguredAudienceModelAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCollaborationConfiguredAudienceModelAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CollaborationConfiguredAudienceModelAssociation m_collaborationConfiguredAudienceModelAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
