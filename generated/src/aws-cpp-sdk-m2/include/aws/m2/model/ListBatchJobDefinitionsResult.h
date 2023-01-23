/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobDefinition.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListBatchJobDefinitionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of batch job definitions.</p>
     */
    inline const Aws::Vector<BatchJobDefinition>& GetBatchJobDefinitions() const{ return m_batchJobDefinitions; }

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline void SetBatchJobDefinitions(const Aws::Vector<BatchJobDefinition>& value) { m_batchJobDefinitions = value; }

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline void SetBatchJobDefinitions(Aws::Vector<BatchJobDefinition>&& value) { m_batchJobDefinitions = std::move(value); }

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline ListBatchJobDefinitionsResult& WithBatchJobDefinitions(const Aws::Vector<BatchJobDefinition>& value) { SetBatchJobDefinitions(value); return *this;}

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline ListBatchJobDefinitionsResult& WithBatchJobDefinitions(Aws::Vector<BatchJobDefinition>&& value) { SetBatchJobDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline ListBatchJobDefinitionsResult& AddBatchJobDefinitions(const BatchJobDefinition& value) { m_batchJobDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of batch job definitions.</p>
     */
    inline ListBatchJobDefinitionsResult& AddBatchJobDefinitions(BatchJobDefinition&& value) { m_batchJobDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListBatchJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListBatchJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListBatchJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchJobDefinition> m_batchJobDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
