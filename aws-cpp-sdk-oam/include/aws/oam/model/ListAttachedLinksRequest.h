/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class ListAttachedLinksRequest : public OAMRequest
  {
  public:
    AWS_OAM_API ListAttachedLinksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttachedLinks"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Limits the number of returned links to the specified number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limits the number of returned links to the specified number.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limits the number of returned links to the specified number.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limits the number of returned links to the specified number.</p>
     */
    inline ListAttachedLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline ListAttachedLinksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline ListAttachedLinksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline ListAttachedLinksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const{ return m_sinkIdentifier; }

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline void SetSinkIdentifier(const Aws::String& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = value; }

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline void SetSinkIdentifier(Aws::String&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::move(value); }

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline void SetSinkIdentifier(const char* value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier.assign(value); }

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline ListAttachedLinksRequest& WithSinkIdentifier(const Aws::String& value) { SetSinkIdentifier(value); return *this;}

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline ListAttachedLinksRequest& WithSinkIdentifier(Aws::String&& value) { SetSinkIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline ListAttachedLinksRequest& WithSinkIdentifier(const char* value) { SetSinkIdentifier(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
