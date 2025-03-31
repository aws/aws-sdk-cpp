/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/RouteServerBgpState.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The current status of a BGP session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerBgpStatus">AWS
   * API Reference</a></p>
   */
  class RouteServerBgpStatus
  {
  public:
    AWS_EC2_API RouteServerBgpStatus() = default;
    AWS_EC2_API RouteServerBgpStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerBgpStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The operational status of the BGP session. The status enables you to monitor
     * session liveness if you lack monitoring on your router/appliance.</p>
     */
    inline RouteServerBgpState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RouteServerBgpState value) { m_statusHasBeenSet = true; m_status = value; }
    inline RouteServerBgpStatus& WithStatus(RouteServerBgpState value) { SetStatus(value); return *this;}
    ///@}
  private:

    RouteServerBgpState m_status{RouteServerBgpState::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
