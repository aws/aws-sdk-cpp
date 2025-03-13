/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryAssociation.h>
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
  class DescribeDataRepositoryAssociationsResult
  {
  public:
    AWS_FSX_API DescribeDataRepositoryAssociationsResult() = default;
    AWS_FSX_API DescribeDataRepositoryAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeDataRepositoryAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline const Aws::Vector<DataRepositoryAssociation>& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = Aws::Vector<DataRepositoryAssociation>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<DataRepositoryAssociation>>
    DescribeDataRepositoryAssociationsResult& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = DataRepositoryAssociation>
    DescribeDataRepositoryAssociationsResult& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDataRepositoryAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataRepositoryAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataRepositoryAssociation> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
