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
   * <p>A complex type that contains information about the resource record sets that
   * you want to update based on a specified traffic policy instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyInstanceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API UpdateTrafficPolicyInstanceRequest : public Route53Request
  {
  public:
    UpdateTrafficPolicyInstanceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The TTL that you want Amazon Route 53 to assign to all of the updated
     * resource record sets.</p>
     */
    inline long long GetTTL() const{ return m_tTL; }

    /**
     * <p>The TTL that you want Amazon Route 53 to assign to all of the updated
     * resource record sets.</p>
     */
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    /**
     * <p>The TTL that you want Amazon Route 53 to assign to all of the updated
     * resource record sets.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithTTL(long long value) { SetTTL(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The version of the traffic policy that you want Amazon Route 53 to use to
     * update resource record sets for the specified traffic policy instance.</p>
     */
    inline int GetTrafficPolicyVersion() const{ return m_trafficPolicyVersion; }

    /**
     * <p>The version of the traffic policy that you want Amazon Route 53 to use to
     * update resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }

    /**
     * <p>The version of the traffic policy that you want Amazon Route 53 to use to
     * update resource record sets for the specified traffic policy instance.</p>
     */
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    long long m_tTL;
    bool m_tTLHasBeenSet;
    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet;
    int m_trafficPolicyVersion;
    bool m_trafficPolicyVersionHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
