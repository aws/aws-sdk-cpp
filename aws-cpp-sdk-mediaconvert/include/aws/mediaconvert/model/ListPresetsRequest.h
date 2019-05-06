/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/PresetListBy.h>
#include <aws/mediaconvert/model/Order.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API ListPresetsRequest : public MediaConvertRequest
  {
  public:
    ListPresetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPresets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline ListPresetsRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline ListPresetsRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * Optionally, specify a preset category to limit responses to only presets from
     * that category.
     */
    inline ListPresetsRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline const PresetListBy& GetListBy() const{ return m_listBy; }

    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline bool ListByHasBeenSet() const { return m_listByHasBeenSet; }

    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline void SetListBy(const PresetListBy& value) { m_listByHasBeenSet = true; m_listBy = value; }

    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline void SetListBy(PresetListBy&& value) { m_listByHasBeenSet = true; m_listBy = std::move(value); }

    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline ListPresetsRequest& WithListBy(const PresetListBy& value) { SetListBy(value); return *this;}

    /**
     * Optional. When you request a list of presets, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline ListPresetsRequest& WithListBy(PresetListBy&& value) { SetListBy(std::move(value)); return *this;}


    /**
     * Optional. Number of presets, up to twenty, that will be returned at one time
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Optional. Number of presets, up to twenty, that will be returned at one time
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Optional. Number of presets, up to twenty, that will be returned at one time
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Optional. Number of presets, up to twenty, that will be returned at one time
     */
    inline ListPresetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline ListPresetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline ListPresetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of presets.
     */
    inline ListPresetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline ListPresetsRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline ListPresetsRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    PresetListBy m_listBy;
    bool m_listByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Order m_order;
    bool m_orderHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
