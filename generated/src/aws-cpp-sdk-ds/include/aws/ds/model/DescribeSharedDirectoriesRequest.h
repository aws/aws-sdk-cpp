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
    AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesRequest();

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
    inline const Aws::String& GetOwnerDirectoryId() const{ return m_ownerDirectoryId; }
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }
    inline void SetOwnerDirectoryId(const Aws::String& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = value; }
    inline void SetOwnerDirectoryId(Aws::String&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::move(value); }
    inline void SetOwnerDirectoryId(const char* value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId.assign(value); }
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(const Aws::String& value) { SetOwnerDirectoryId(value); return *this;}
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(Aws::String&& value) { SetOwnerDirectoryId(std::move(value)); return *this;}
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(const char* value) { SetOwnerDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedDirectoryIds() const{ return m_sharedDirectoryIds; }
    inline bool SharedDirectoryIdsHasBeenSet() const { return m_sharedDirectoryIdsHasBeenSet; }
    inline void SetSharedDirectoryIds(const Aws::Vector<Aws::String>& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds = value; }
    inline void SetSharedDirectoryIds(Aws::Vector<Aws::String>&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds = std::move(value); }
    inline DescribeSharedDirectoriesRequest& WithSharedDirectoryIds(const Aws::Vector<Aws::String>& value) { SetSharedDirectoryIds(value); return *this;}
    inline DescribeSharedDirectoriesRequest& WithSharedDirectoryIds(Aws::Vector<Aws::String>&& value) { SetSharedDirectoryIds(std::move(value)); return *this;}
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(const Aws::String& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(value); return *this; }
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(Aws::String&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(std::move(value)); return *this; }
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(const char* value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeSharedDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSharedDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSharedDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline int GetLimit() const{ return m_limit; }
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

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
