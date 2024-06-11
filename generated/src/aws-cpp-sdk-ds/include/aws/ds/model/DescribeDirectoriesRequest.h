﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeDirectories</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectoriesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDirectoriesRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDirectoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectories"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const{ return m_directoryIds; }
    inline bool DirectoryIdsHasBeenSet() const { return m_directoryIdsHasBeenSet; }
    inline void SetDirectoryIds(const Aws::Vector<Aws::String>& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }
    inline void SetDirectoryIds(Aws::Vector<Aws::String>&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = std::move(value); }
    inline DescribeDirectoriesRequest& WithDirectoryIds(const Aws::Vector<Aws::String>& value) { SetDirectoryIds(value); return *this;}
    inline DescribeDirectoriesRequest& WithDirectoryIds(Aws::Vector<Aws::String>&& value) { SetDirectoryIds(std::move(value)); return *this;}
    inline DescribeDirectoriesRequest& AddDirectoryIds(const Aws::String& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }
    inline DescribeDirectoriesRequest& AddDirectoryIds(Aws::String&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(std::move(value)); return *this; }
    inline DescribeDirectoriesRequest& AddDirectoryIds(const char* value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>DescribeDirectoriesResult.NextToken</code> value from a previous
     * call to <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_directoryIds;
    bool m_directoryIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
