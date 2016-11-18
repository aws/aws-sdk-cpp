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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/CloudWatchRegion.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
   * Route 53 health checkers to use to determine whether this health check is
   * healthy.</p>
   */
  class AWS_ROUTE53_API AlarmIdentifier
  {
  public:
    AlarmIdentifier();
    AlarmIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AlarmIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p> <p>For the current list of CloudWatch regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cw_region">Amazon
     * CloudWatch</a> in <i>AWS Regions and Endpoints</i> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline const CloudWatchRegion& GetRegion() const{ return m_region; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p> <p>For the current list of CloudWatch regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cw_region">Amazon
     * CloudWatch</a> in <i>AWS Regions and Endpoints</i> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetRegion(const CloudWatchRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p> <p>For the current list of CloudWatch regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cw_region">Amazon
     * CloudWatch</a> in <i>AWS Regions and Endpoints</i> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetRegion(CloudWatchRegion&& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p> <p>For the current list of CloudWatch regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cw_region">Amazon
     * CloudWatch</a> in <i>AWS Regions and Endpoints</i> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline AlarmIdentifier& WithRegion(const CloudWatchRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p> <p>For the current list of CloudWatch regions, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cw_region">Amazon
     * CloudWatch</a> in <i>AWS Regions and Endpoints</i> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline AlarmIdentifier& WithRegion(CloudWatchRegion&& value) { SetRegion(value); return *this;}

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline AlarmIdentifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline AlarmIdentifier& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p>
     */
    inline AlarmIdentifier& WithName(const char* value) { SetName(value); return *this;}

  private:
    CloudWatchRegion m_region;
    bool m_regionHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
