/*
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
#include <aws/waf/model/HTTPRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>The response from a <a>GetSampledRequests</a> request includes a
   * <code>SampledHTTPRequests</code> complex type that appears as
   * <code>SampledRequests</code> in the response syntax.
   * <code>SampledHTTPRequests</code> contains one <code>SampledHTTPRequest</code>
   * object for each web request that is returned by
   * <code>GetSampledRequests</code>.</p>
   */
  class AWS_WAF_API SampledHTTPRequest
  {
  public:
    SampledHTTPRequest();
    SampledHTTPRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    SampledHTTPRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline const HTTPRequest& GetRequest() const{ return m_request; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline void SetRequest(const HTTPRequest& value) { m_requestHasBeenSet = true; m_request = value; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline void SetRequest(HTTPRequest&& value) { m_requestHasBeenSet = true; m_request = value; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline SampledHTTPRequest& WithRequest(const HTTPRequest& value) { SetRequest(value); return *this;}

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline SampledHTTPRequest& WithRequest(HTTPRequest&& value) { SetRequest(value); return *this;}

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const{ return m_weight; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline SampledHTTPRequest& WithWeight(long long value) { SetWeight(value); return *this;}

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline SampledHTTPRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline SampledHTTPRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(Aws::String&& value) { SetAction(value); return *this;}

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(const char* value) { SetAction(value); return *this;}

  private:
    HTTPRequest m_request;
    bool m_requestHasBeenSet;
    long long m_weight;
    bool m_weightHasBeenSet;
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    Aws::String m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
