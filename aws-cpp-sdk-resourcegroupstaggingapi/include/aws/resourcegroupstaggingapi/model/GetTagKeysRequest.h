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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    GetTagKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTagKeys"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline GetTagKeysRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline GetTagKeysRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that additional data is available. Leave this value
     * empty for your initial request. If the response includes a PaginationToken, use
     * that string for this value to request an additional page of data.</p>
     */
    inline GetTagKeysRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
