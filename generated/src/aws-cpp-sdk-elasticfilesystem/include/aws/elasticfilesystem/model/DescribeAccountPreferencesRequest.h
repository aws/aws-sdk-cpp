/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class DescribeAccountPreferencesRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeAccountPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountPreferences"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline DescribeAccountPreferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline DescribeAccountPreferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of Amazon Web Services account preferences if the response
     * payload was paginated.</p>
     */
    inline DescribeAccountPreferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) When retrieving account preferences, you can optionally specify
     * the <code>MaxItems</code> parameter to limit the number of objects returned in a
     * response. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) When retrieving account preferences, you can optionally specify
     * the <code>MaxItems</code> parameter to limit the number of objects returned in a
     * response. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) When retrieving account preferences, you can optionally specify
     * the <code>MaxItems</code> parameter to limit the number of objects returned in a
     * response. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) When retrieving account preferences, you can optionally specify
     * the <code>MaxItems</code> parameter to limit the number of objects returned in a
     * response. The default value is 100. </p>
     */
    inline DescribeAccountPreferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
