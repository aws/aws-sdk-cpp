/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IdNamespaceAssociation.h>
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
  class GetIdNamespaceAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetIdNamespaceAssociationResult();
    AWS_CLEANROOMS_API GetIdNamespaceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetIdNamespaceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID namespace association that you requested.</p>
     */
    inline const IdNamespaceAssociation& GetIdNamespaceAssociation() const{ return m_idNamespaceAssociation; }
    inline void SetIdNamespaceAssociation(const IdNamespaceAssociation& value) { m_idNamespaceAssociation = value; }
    inline void SetIdNamespaceAssociation(IdNamespaceAssociation&& value) { m_idNamespaceAssociation = std::move(value); }
    inline GetIdNamespaceAssociationResult& WithIdNamespaceAssociation(const IdNamespaceAssociation& value) { SetIdNamespaceAssociation(value); return *this;}
    inline GetIdNamespaceAssociationResult& WithIdNamespaceAssociation(IdNamespaceAssociation&& value) { SetIdNamespaceAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdNamespaceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdNamespaceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdNamespaceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdNamespaceAssociation m_idNamespaceAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
