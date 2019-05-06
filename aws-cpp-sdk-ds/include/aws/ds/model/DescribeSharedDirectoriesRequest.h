/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesRequest : public DirectoryServiceRequest
  {
  public:
    DescribeSharedDirectoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSharedDirectories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline const Aws::String& GetOwnerDirectoryId() const{ return m_ownerDirectoryId; }

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline bool OwnerDirectoryIdHasBeenSet() const { return m_ownerDirectoryIdHasBeenSet; }

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(const Aws::String& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = value; }

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(Aws::String&& value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId = std::move(value); }

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline void SetOwnerDirectoryId(const char* value) { m_ownerDirectoryIdHasBeenSet = true; m_ownerDirectoryId.assign(value); }

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(const Aws::String& value) { SetOwnerDirectoryId(value); return *this;}

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(Aws::String&& value) { SetOwnerDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Returns the identifier of the directory in the directory owner account. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithOwnerDirectoryId(const char* value) { SetOwnerDirectoryId(value); return *this;}


    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedDirectoryIds() const{ return m_sharedDirectoryIds; }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline bool SharedDirectoryIdsHasBeenSet() const { return m_sharedDirectoryIdsHasBeenSet; }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline void SetSharedDirectoryIds(const Aws::Vector<Aws::String>& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds = value; }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline void SetSharedDirectoryIds(Aws::Vector<Aws::String>&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds = std::move(value); }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithSharedDirectoryIds(const Aws::Vector<Aws::String>& value) { SetSharedDirectoryIds(value); return *this;}

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithSharedDirectoryIds(Aws::Vector<Aws::String>&& value) { SetSharedDirectoryIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(const Aws::String& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(Aws::String&& value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers of all shared directories in your account. </p>
     */
    inline DescribeSharedDirectoriesRequest& AddSharedDirectoryIds(const char* value) { m_sharedDirectoryIdsHasBeenSet = true; m_sharedDirectoryIds.push_back(value); return *this; }


    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>DescribeSharedDirectoriesResult.NextToken</code> value from a
     * previous call to <a>DescribeSharedDirectories</a>. Pass null if this is the
     * first call. </p>
     */
    inline DescribeSharedDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of shared directories to return in the response object.</p>
     */
    inline DescribeSharedDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_ownerDirectoryId;
    bool m_ownerDirectoryIdHasBeenSet;

    Aws::Vector<Aws::String> m_sharedDirectoryIds;
    bool m_sharedDirectoryIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
