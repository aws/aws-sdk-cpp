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
  class CreateIdNamespaceAssociationResult
  {
  public:
    AWS_CLEANROOMS_API CreateIdNamespaceAssociationResult() = default;
    AWS_CLEANROOMS_API CreateIdNamespaceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateIdNamespaceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID namespace association that was created.</p>
     */
    inline const IdNamespaceAssociation& GetIdNamespaceAssociation() const { return m_idNamespaceAssociation; }
    template<typename IdNamespaceAssociationT = IdNamespaceAssociation>
    void SetIdNamespaceAssociation(IdNamespaceAssociationT&& value) { m_idNamespaceAssociationHasBeenSet = true; m_idNamespaceAssociation = std::forward<IdNamespaceAssociationT>(value); }
    template<typename IdNamespaceAssociationT = IdNamespaceAssociation>
    CreateIdNamespaceAssociationResult& WithIdNamespaceAssociation(IdNamespaceAssociationT&& value) { SetIdNamespaceAssociation(std::forward<IdNamespaceAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateIdNamespaceAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdNamespaceAssociation m_idNamespaceAssociation;
    bool m_idNamespaceAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
