/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeFileCachesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeFileCachesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileCaches"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileCacheIds() const { return m_fileCacheIds; }
    inline bool FileCacheIdsHasBeenSet() const { return m_fileCacheIdsHasBeenSet; }
    template<typename FileCacheIdsT = Aws::Vector<Aws::String>>
    void SetFileCacheIds(FileCacheIdsT&& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds = std::forward<FileCacheIdsT>(value); }
    template<typename FileCacheIdsT = Aws::Vector<Aws::String>>
    DescribeFileCachesRequest& WithFileCacheIds(FileCacheIdsT&& value) { SetFileCacheIds(std::forward<FileCacheIdsT>(value)); return *this;}
    template<typename FileCacheIdsT = Aws::String>
    DescribeFileCachesRequest& AddFileCacheIds(FileCacheIdsT&& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds.emplace_back(std::forward<FileCacheIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeFileCachesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFileCachesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fileCacheIds;
    bool m_fileCacheIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
