/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListBuildBatchesResult
  {
  public:
    AWS_CODEBUILD_API ListBuildBatchesResult();
    AWS_CODEBUILD_API ListBuildBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListBuildBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline ListBuildBatchesResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline ListBuildBatchesResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline ListBuildBatchesResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline ListBuildBatchesResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that contains the batch build identifiers.</p>
     */
    inline ListBuildBatchesResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline ListBuildBatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline ListBuildBatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>ListBuildBatches</code> to retrieve the next set of
     * items.</p>
     */
    inline ListBuildBatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
