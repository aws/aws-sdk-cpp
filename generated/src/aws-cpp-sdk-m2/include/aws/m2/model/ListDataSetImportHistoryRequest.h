/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class ListDataSetImportHistoryRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetImportHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSetImportHistory"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;

    AWS_MAINFRAMEMODERNIZATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ListDataSetImportHistoryRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ListDataSetImportHistoryRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ListDataSetImportHistoryRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline ListDataSetImportHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline ListDataSetImportHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline ListDataSetImportHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline ListDataSetImportHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
