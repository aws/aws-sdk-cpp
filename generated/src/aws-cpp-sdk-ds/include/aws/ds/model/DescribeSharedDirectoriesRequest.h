/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeSharedDirectoriesRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSharedDirectories"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline const Aws::String& GetOwnerDirectoryId() const { return m_ownerDirectoryId; }
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }
    template<typename OwnerDirectoryIdT = Aws::String>
    void SetOwnerDirectoryId(OwnerDirectoryIdT&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::forward<OwnerDirectoryIdT>(value); }
    template<typename OwnerDirectoryIdT = Aws::String>
    DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(OwnerDirectoryIdT&& value) { SetOwnerDirectoryId(std::forward<OwnerDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedDirectoryIds() const { return m_sharedDirectoryIds; }
    inline bool SharedDirectoryIdsHasBeenSet() const { return m_sharedDirectoryIdsHasBeenSet; }
    template<typename SharedDirectoryIdsT = Aws::Vector<Aws::String>>
    void SetSharedDirectoryIds(SharedDirectoryIdsT&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds = std::forward<SharedDirectoryIdsT>(value); }
    template<typename SharedDirectoryIdsT = Aws::Vector<Aws::String>>
    DescribeSharedDirectoriesRequest& WithSharedDirectoryIds(SharedDirectoryIdsT&& value) { SetSharedDirectoryIds(std::forward<SharedDirectoryIdsT>(value)); return *this;}
    template<typename SharedDirectoryIdsT = Aws::String>
    DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(SharedDirectoryIdsT&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.emplace_back(std::forward<SharedDirectoryIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSharedDirectoriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeSharedDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerDirectoryId;
    bool m_ownerDirectoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedDirectoryIds;
    bool m_sharedDirectoryIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
