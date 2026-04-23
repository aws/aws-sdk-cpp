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
#include <aws/route53/model/HostedZoneLimitType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the type of limit that you specified in the
   * request and the current value for that limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneLimit">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API HostedZoneLimit
  {
  public:
    HostedZoneLimit();
    HostedZoneLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    HostedZoneLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline const HostedZoneLimitType& GetType() const{ return m_type; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline void SetType(const HostedZoneLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline void SetType(HostedZoneLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline HostedZoneLimit& WithType(const HostedZoneLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline HostedZoneLimit& WithType(HostedZoneLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current value for the limit that is specified by <code>Type</code>.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The current value for the limit that is specified by <code>Type</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value for the limit that is specified by <code>Type</code>.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the limit that is specified by <code>Type</code>.</p>
     */
    inline HostedZoneLimit& WithValue(long long value) { SetValue(value); return *this;}

  private:

    HostedZoneLimitType m_type;
    bool m_typeHasBeenSet;

    long long m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
