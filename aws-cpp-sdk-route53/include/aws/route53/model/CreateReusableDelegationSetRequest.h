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
   */
  class AWS_ROUTE53_API CreateReusableDelegationSetRequest : public Route53Request
  {
  public:
    CreateReusableDelegationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReusableDelegationSet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
