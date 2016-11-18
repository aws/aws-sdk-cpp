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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/TrafficPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the
   * <code>CreateTrafficPolicy</code> request.</p>
   */
  class AWS_ROUTE53_API CreateTrafficPolicyResult
  {
  public:
    CreateTrafficPolicyResult();
    CreateTrafficPolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateTrafficPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline const TrafficPolicy& GetTrafficPolicy() const{ return m_trafficPolicy; }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline void SetTrafficPolicy(const TrafficPolicy& value) { m_trafficPolicy = value; }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline void SetTrafficPolicy(TrafficPolicy&& value) { m_trafficPolicy = value; }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithTrafficPolicy(const TrafficPolicy& value) { SetTrafficPolicy(value); return *this;}

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithTrafficPolicy(TrafficPolicy&& value) { SetTrafficPolicy(value); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:
    TrafficPolicy m_trafficPolicy;
    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws