/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/ReusableDelegationSetLimitType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to create a hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimitRequest">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetLimitRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReusableDelegationSetLimit"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline const ReusableDelegationSetLimitType& GetType() const{ return m_type; }

    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline void SetType(const ReusableDelegationSetLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline void SetType(ReusableDelegationSetLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline GetReusableDelegationSetLimitRequest& WithType(const ReusableDelegationSetLimitType& value) { SetType(value); return *this;}

    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline GetReusableDelegationSetLimitRequest& WithType(ReusableDelegationSetLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::move(value); }

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline GetReusableDelegationSetLimitRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline GetReusableDelegationSetLimitRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline GetReusableDelegationSetLimitRequest& WithDelegationSetId(const char* value) { SetDelegationSetId(value); return *this;}

  private:

    ReusableDelegationSetLimitType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
