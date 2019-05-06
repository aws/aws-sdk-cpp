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
#include <aws/mediaconvert/model/DescribeEndpointsMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   * DescribeEndpointsRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DescribeEndpointsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DescribeEndpointsRequest : public MediaConvertRequest
  {
  public:
    DescribeEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEndpoints"; }

    Aws::String SerializePayload() const override;


    /**
     * Optional. Max number of endpoints, up to twenty, that will be returned at one
     * time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Optional. Max number of endpoints, up to twenty, that will be returned at one
     * time.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Optional. Max number of endpoints, up to twenty, that will be returned at one
     * time.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Optional. Max number of endpoints, up to twenty, that will be returned at one
     * time.
     */
    inline DescribeEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline const DescribeEndpointsMode& GetMode() const{ return m_mode; }

    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline void SetMode(const DescribeEndpointsMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline void SetMode(DescribeEndpointsMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline DescribeEndpointsRequest& WithMode(const DescribeEndpointsMode& value) { SetMode(value); return *this;}

    /**
     * Optional field, defaults to DEFAULT. Specify DEFAULT for this operation to
     * return your endpoints if any exist, or to create an endpoint for you and return
     * it if one doesn't already exist. Specify GET_ONLY to return your endpoints if
     * any exist, or an empty list if none exist.
     */
    inline DescribeEndpointsRequest& WithMode(DescribeEndpointsMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline DescribeEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline DescribeEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of endpoints.
     */
    inline DescribeEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    DescribeEndpointsMode m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
