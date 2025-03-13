/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/StorageOptimizer.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListTableStorageOptimizersResult
  {
  public:
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult() = default;
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline const Aws::Vector<StorageOptimizer>& GetStorageOptimizerList() const { return m_storageOptimizerList; }
    template<typename StorageOptimizerListT = Aws::Vector<StorageOptimizer>>
    void SetStorageOptimizerList(StorageOptimizerListT&& value) { m_storageOptimizerListHasBeenSet = true; m_storageOptimizerList = std::forward<StorageOptimizerListT>(value); }
    template<typename StorageOptimizerListT = Aws::Vector<StorageOptimizer>>
    ListTableStorageOptimizersResult& WithStorageOptimizerList(StorageOptimizerListT&& value) { SetStorageOptimizerList(std::forward<StorageOptimizerListT>(value)); return *this;}
    template<typename StorageOptimizerListT = StorageOptimizer>
    ListTableStorageOptimizersResult& AddStorageOptimizerList(StorageOptimizerListT&& value) { m_storageOptimizerListHasBeenSet = true; m_storageOptimizerList.emplace_back(std::forward<StorageOptimizerListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTableStorageOptimizersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTableStorageOptimizersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StorageOptimizer> m_storageOptimizerList;
    bool m_storageOptimizerListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
