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
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult();
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline const Aws::Vector<StorageOptimizer>& GetStorageOptimizerList() const{ return m_storageOptimizerList; }

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline void SetStorageOptimizerList(const Aws::Vector<StorageOptimizer>& value) { m_storageOptimizerList = value; }

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline void SetStorageOptimizerList(Aws::Vector<StorageOptimizer>&& value) { m_storageOptimizerList = std::move(value); }

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline ListTableStorageOptimizersResult& WithStorageOptimizerList(const Aws::Vector<StorageOptimizer>& value) { SetStorageOptimizerList(value); return *this;}

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline ListTableStorageOptimizersResult& WithStorageOptimizerList(Aws::Vector<StorageOptimizer>&& value) { SetStorageOptimizerList(std::move(value)); return *this;}

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline ListTableStorageOptimizersResult& AddStorageOptimizerList(const StorageOptimizer& value) { m_storageOptimizerList.push_back(value); return *this; }

    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline ListTableStorageOptimizersResult& AddStorageOptimizerList(StorageOptimizer&& value) { m_storageOptimizerList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListTableStorageOptimizersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListTableStorageOptimizersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListTableStorageOptimizersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StorageOptimizer> m_storageOptimizerList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
