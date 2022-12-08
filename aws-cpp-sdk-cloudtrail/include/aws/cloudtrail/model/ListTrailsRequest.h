/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListTrailsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListTrailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrails"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline ListTrailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline ListTrailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline ListTrailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
