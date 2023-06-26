/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameSparks
{
namespace Model
{

  /**
   */
  class ListExtensionsRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API ListExtensionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExtensions"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;

    AWS_GAMESPARKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline ListExtensionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
