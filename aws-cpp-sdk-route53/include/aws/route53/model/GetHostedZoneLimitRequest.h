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
#include <aws/route53/model/HostedZoneLimitType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneLimitRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetHostedZoneLimitRequest : public Route53Request
  {
  public:
    GetHostedZoneLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostedZoneLimit"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline const HostedZoneLimitType& GetType() const{ return m_type; }

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline void SetType(const HostedZoneLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline void SetType(HostedZoneLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline GetHostedZoneLimitRequest& WithType(const HostedZoneLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline GetHostedZoneLimitRequest& WithType(HostedZoneLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline GetHostedZoneLimitRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline GetHostedZoneLimitRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline GetHostedZoneLimitRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    HostedZoneLimitType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
