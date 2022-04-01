﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficPolicyInstance"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

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
    inline UpdateTrafficPolicyInstanceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

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
    inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }

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
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }

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
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}

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
    inline bool TrafficPolicyVersionHasBeenSet() const { return m_trafficPolicyVersionHasBeenSet; }

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
