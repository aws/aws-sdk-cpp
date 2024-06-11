﻿/**
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
  class ListDataSetsRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSets"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;

    AWS_MAINFRAMEMODERNIZATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the application for which you want to list the
     * associated data sets.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ListDataSetsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ListDataSetsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ListDataSetsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter dataset name matching the specified pattern. Can use * and % as wild
     * cards.</p>
     */
    inline const Aws::String& GetNameFilter() const{ return m_nameFilter; }
    inline bool NameFilterHasBeenSet() const { return m_nameFilterHasBeenSet; }
    inline void SetNameFilter(const Aws::String& value) { m_nameFilterHasBeenSet = true; m_nameFilter = value; }
    inline void SetNameFilter(Aws::String&& value) { m_nameFilterHasBeenSet = true; m_nameFilter = std::move(value); }
    inline void SetNameFilter(const char* value) { m_nameFilterHasBeenSet = true; m_nameFilter.assign(value); }
    inline ListDataSetsRequest& WithNameFilter(const Aws::String& value) { SetNameFilter(value); return *this;}
    inline ListDataSetsRequest& WithNameFilter(Aws::String&& value) { SetNameFilter(std::move(value)); return *this;}
    inline ListDataSetsRequest& WithNameFilter(const char* value) { SetNameFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token returned from a previous call to this operation. This
     * specifies the next item to return. To return to the beginning of the list,
     * exclude this parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDataSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the data set name, which you can use to filter the list of data
     * sets.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ListDataSetsRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ListDataSetsRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ListDataSetsRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameFilter;
    bool m_nameFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
