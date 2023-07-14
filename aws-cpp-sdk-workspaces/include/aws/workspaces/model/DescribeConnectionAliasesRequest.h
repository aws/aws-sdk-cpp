﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API DescribeConnectionAliasesRequest : public WorkSpacesRequest
  {
  public:
    DescribeConnectionAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectionAliases"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliasIds() const{ return m_aliasIds; }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline bool AliasIdsHasBeenSet() const { return m_aliasIdsHasBeenSet; }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline void SetAliasIds(const Aws::Vector<Aws::String>& value) { m_aliasIdsHasBeenSet = true; m_aliasIds = value; }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline void SetAliasIds(Aws::Vector<Aws::String>&& value) { m_aliasIdsHasBeenSet = true; m_aliasIds = std::move(value); }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline DescribeConnectionAliasesRequest& WithAliasIds(const Aws::Vector<Aws::String>& value) { SetAliasIds(value); return *this;}

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline DescribeConnectionAliasesRequest& WithAliasIds(Aws::Vector<Aws::String>&& value) { SetAliasIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline DescribeConnectionAliasesRequest& AddAliasIds(const Aws::String& value) { m_aliasIdsHasBeenSet = true; m_aliasIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline DescribeConnectionAliasesRequest& AddAliasIds(Aws::String&& value) { m_aliasIdsHasBeenSet = true; m_aliasIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the connection aliases to describe.</p>
     */
    inline DescribeConnectionAliasesRequest& AddAliasIds(const char* value) { m_aliasIdsHasBeenSet = true; m_aliasIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline DescribeConnectionAliasesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline DescribeConnectionAliasesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory associated with the connection alias.</p>
     */
    inline DescribeConnectionAliasesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The maximum number of connection aliases to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of connection aliases to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of connection aliases to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of connection aliases to return.</p>
     */
    inline DescribeConnectionAliasesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline DescribeConnectionAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline DescribeConnectionAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results. </p>
     */
    inline DescribeConnectionAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_aliasIds;
    bool m_aliasIdsHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
