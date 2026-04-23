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
#include <aws/pinpoint/model/ApplicationResponse.h>
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
   * Get Applications Result.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ApplicationsResponse
  {
  public:
    ApplicationsResponse();
    ApplicationsResponse(Aws::Utils::Json::JsonView jsonValue);
    ApplicationsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of applications returned in this page.
     */
    inline const Aws::Vector<ApplicationResponse>& GetItem() const{ return m_item; }

    /**
     * List of applications returned in this page.
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * List of applications returned in this page.
     */
    inline void SetItem(const Aws::Vector<ApplicationResponse>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * List of applications returned in this page.
     */
    inline void SetItem(Aws::Vector<ApplicationResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * List of applications returned in this page.
     */
    inline ApplicationsResponse& WithItem(const Aws::Vector<ApplicationResponse>& value) { SetItem(value); return *this;}

    /**
     * List of applications returned in this page.
     */
    inline ApplicationsResponse& WithItem(Aws::Vector<ApplicationResponse>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * List of applications returned in this page.
     */
    inline ApplicationsResponse& AddItem(const ApplicationResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * List of applications returned in this page.
     */
    inline ApplicationsResponse& AddItem(ApplicationResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }


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
    inline ApplicationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline ApplicationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The string that you use in a subsequent request to get the next page of results
     * in a paginated response.
     */
    inline ApplicationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationResponse> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
