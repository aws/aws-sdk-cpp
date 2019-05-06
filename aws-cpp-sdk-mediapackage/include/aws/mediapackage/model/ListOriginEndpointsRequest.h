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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class AWS_MEDIAPACKAGE_API ListOriginEndpointsRequest : public MediaPackageRequest
  {
  public:
    ListOriginEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOriginEndpoints"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline ListOriginEndpointsRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline ListOriginEndpointsRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline ListOriginEndpointsRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The upper bound on the number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The upper bound on the number of records to return.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The upper bound on the number of records to return.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The upper bound on the number of records to return.
     */
    inline ListOriginEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListOriginEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListOriginEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListOriginEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
