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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>Gets information about a specified traffic policy instance.</p> <p>To get
   * information about a traffic policy instance, send a <code>GET</code> request to
   * the <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance/<i>Id</i>
   * </code> resource.</p>
   */
  class AWS_ROUTE53_API GetTrafficPolicyInstanceRequest : public Route53Request
  {
  public:
    GetTrafficPolicyInstanceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline GetTrafficPolicyInstanceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline GetTrafficPolicyInstanceRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy instance that you want to get information
     * about.</p>
     */
    inline GetTrafficPolicyInstanceRequest& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
