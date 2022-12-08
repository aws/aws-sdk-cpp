/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class ListNamespacesRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API ListNamespacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNamespaces"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline ListNamespacesRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline ListNamespacesRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the Amazon
     * QuickSight namespaces that you want to list.</p>
     */
    inline ListNamespacesRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline ListNamespacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline ListNamespacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A unique pagination token that can be used in a subsequent request. You will
     * receive a pagination token in the response body of a previous
     * <code>ListNameSpaces</code> API call if there is more data that can be returned.
     * To receive the data, make another <code>ListNamespaces</code> API call with the
     * returned token to retrieve the next page of data. Each token is valid for 24
     * hours. If you try to make a <code>ListNamespaces</code> API call with an expired
     * token, you will receive a <code>HTTP 400 InvalidNextTokenException</code>
     * error.</p>
     */
    inline ListNamespacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListNamespacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
