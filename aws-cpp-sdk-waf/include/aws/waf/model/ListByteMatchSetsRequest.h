﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API ListByteMatchSetsRequest : public WAFRequest
  {
  public:
    ListByteMatchSetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline ListByteMatchSetsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline ListByteMatchSetsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code> than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>ByteMatchSets</code>. For the second and subsequent
     * <code>ListByteMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>ByteMatchSets</code>.</p>
     */
    inline ListByteMatchSetsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>Specifies the number of <code>ByteMatchSet</code> objects that you want AWS
     * WAF to return for this request. If you have more <code>ByteMatchSets</code>
     * objects than the number you specify for <code>Limit</code>, the response
     * includes a <code>NextMarker</code> value that you can use to get another batch
     * of <code>ByteMatchSet</code> objects.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the number of <code>ByteMatchSet</code> objects that you want AWS
     * WAF to return for this request. If you have more <code>ByteMatchSets</code>
     * objects than the number you specify for <code>Limit</code>, the response
     * includes a <code>NextMarker</code> value that you can use to get another batch
     * of <code>ByteMatchSet</code> objects.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the number of <code>ByteMatchSet</code> objects that you want AWS
     * WAF to return for this request. If you have more <code>ByteMatchSets</code>
     * objects than the number you specify for <code>Limit</code>, the response
     * includes a <code>NextMarker</code> value that you can use to get another batch
     * of <code>ByteMatchSet</code> objects.</p>
     */
    inline ListByteMatchSetsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
