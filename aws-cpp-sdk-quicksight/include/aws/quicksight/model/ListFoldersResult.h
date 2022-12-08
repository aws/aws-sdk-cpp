/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class ListFoldersResult
  {
  public:
    AWS_QUICKSIGHT_API ListFoldersResult();
    AWS_QUICKSIGHT_API ListFoldersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListFoldersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListFoldersResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline const Aws::Vector<FolderSummary>& GetFolderSummaryList() const{ return m_folderSummaryList; }

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline void SetFolderSummaryList(const Aws::Vector<FolderSummary>& value) { m_folderSummaryList = value; }

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline void SetFolderSummaryList(Aws::Vector<FolderSummary>&& value) { m_folderSummaryList = std::move(value); }

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline ListFoldersResult& WithFolderSummaryList(const Aws::Vector<FolderSummary>& value) { SetFolderSummaryList(value); return *this;}

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline ListFoldersResult& WithFolderSummaryList(Aws::Vector<FolderSummary>&& value) { SetFolderSummaryList(std::move(value)); return *this;}

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline ListFoldersResult& AddFolderSummaryList(const FolderSummary& value) { m_folderSummaryList.push_back(value); return *this; }

    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline ListFoldersResult& AddFolderSummaryList(FolderSummary&& value) { m_folderSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListFoldersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListFoldersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListFoldersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListFoldersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListFoldersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListFoldersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_status;

    Aws::Vector<FolderSummary> m_folderSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
