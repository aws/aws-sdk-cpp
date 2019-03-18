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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * List of available campaigns.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignsResponse
  {
  public:
    CampaignsResponse();
    CampaignsResponse(Aws::Utils::Json::JsonView jsonValue);
    CampaignsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of campaigns.
     */
    inline const Aws::Vector<CampaignResponse>& GetItem() const{ return m_item; }

    /**
     * A list of campaigns.
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * A list of campaigns.
     */
    inline void SetItem(const Aws::Vector<CampaignResponse>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * A list of campaigns.
     */
    inline void SetItem(Aws::Vector<CampaignResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * A list of campaigns.
     */
    inline CampaignsResponse& WithItem(const Aws::Vector<CampaignResponse>& value) { SetItem(value); return *this;}

    /**
     * A list of campaigns.
     */
    inline CampaignsResponse& WithItem(Aws::Vector<CampaignResponse>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * A list of campaigns.
     */
    inline CampaignsResponse& AddItem(const CampaignResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * A list of campaigns.
     */
    inline CampaignsResponse& AddItem(CampaignResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }


    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline CampaignsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline CampaignsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline CampaignsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CampaignResponse> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
