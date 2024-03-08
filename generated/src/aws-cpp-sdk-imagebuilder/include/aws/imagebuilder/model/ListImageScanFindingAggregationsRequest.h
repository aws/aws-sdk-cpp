/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListImageScanFindingAggregationsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImageScanFindingAggregations"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    
    inline const Filter& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline ListImageScanFindingAggregationsRequest& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    
    inline ListImageScanFindingAggregationsRequest& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingAggregationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingAggregationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListImageScanFindingAggregationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
