/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListOrdersRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListOrdersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrders"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostIdentifierFilter() const{ return m_outpostIdentifierFilter; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline bool OutpostIdentifierFilterHasBeenSet() const { return m_outpostIdentifierFilterHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifierFilter(const Aws::String& value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifierFilter(Aws::String&& value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifierFilter(const char* value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListOrdersRequest& WithOutpostIdentifierFilter(const Aws::String& value) { SetOutpostIdentifierFilter(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListOrdersRequest& WithOutpostIdentifierFilter(Aws::String&& value) { SetOutpostIdentifierFilter(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListOrdersRequest& WithOutpostIdentifierFilter(const char* value) { SetOutpostIdentifierFilter(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListOrdersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOrdersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListOrdersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListOrdersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_outpostIdentifierFilter;
    bool m_outpostIdentifierFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
