/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryAssociation.h>
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
namespace FSx
{
namespace Model
{
  class UpdateDataRepositoryAssociationResult
  {
  public:
    AWS_FSX_API UpdateDataRepositoryAssociationResult() = default;
    AWS_FSX_API UpdateDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateDataRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response object returned after the data repository association is
     * updated.</p>
     */
    inline const DataRepositoryAssociation& GetAssociation() const { return m_association; }
    template<typename AssociationT = DataRepositoryAssociation>
    void SetAssociation(AssociationT&& value) { m_associationHasBeenSet = true; m_association = std::forward<AssociationT>(value); }
    template<typename AssociationT = DataRepositoryAssociation>
    UpdateDataRepositoryAssociationResult& WithAssociation(AssociationT&& value) { SetAssociation(std::forward<AssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDataRepositoryAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataRepositoryAssociation m_association;
    bool m_associationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
