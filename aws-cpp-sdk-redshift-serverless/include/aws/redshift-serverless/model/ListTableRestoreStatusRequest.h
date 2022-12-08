/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class ListTableRestoreStatusRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTableRestoreStatus"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use nextToken to display the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use nextToken to display the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use nextToken to display the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use nextToken to display the next page of results.</p>
     */
    inline ListTableRestoreStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline ListTableRestoreStatusRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline ListTableRestoreStatusRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The namespace from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations .</p>
     */
    inline ListTableRestoreStatusRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline ListTableRestoreStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline ListTableRestoreStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * nextToken, you can include the returned <code>nextToken</code> in following
     * <code>ListTableRestoreStatus</code> operations. This will return results on the
     * next page.</p>
     */
    inline ListTableRestoreStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline ListTableRestoreStatusRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline ListTableRestoreStatusRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The workgroup from which to list all of the statuses of
     * <code>RestoreTableFromSnapshot</code> operations.</p>
     */
    inline ListTableRestoreStatusRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
