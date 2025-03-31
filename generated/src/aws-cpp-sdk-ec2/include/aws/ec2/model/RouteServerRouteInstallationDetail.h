/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerRouteInstallationStatus.h>
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
   * <p>Describes the installation status of a route in a route table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerRouteInstallationDetail">AWS
   * API Reference</a></p>
   */
  class RouteServerRouteInstallationDetail
  {
  public:
    AWS_EC2_API RouteServerRouteInstallationDetail() = default;
    AWS_EC2_API RouteServerRouteInstallationDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerRouteInstallationDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the route table where the route is being installed.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    RouteServerRouteInstallationDetail& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current installation status of the route in the route table.</p>
     */
    inline RouteServerRouteInstallationStatus GetRouteInstallationStatus() const { return m_routeInstallationStatus; }
    inline bool RouteInstallationStatusHasBeenSet() const { return m_routeInstallationStatusHasBeenSet; }
    inline void SetRouteInstallationStatus(RouteServerRouteInstallationStatus value) { m_routeInstallationStatusHasBeenSet = true; m_routeInstallationStatus = value; }
    inline RouteServerRouteInstallationDetail& WithRouteInstallationStatus(RouteServerRouteInstallationStatus value) { SetRouteInstallationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current installation status of the route.</p>
     */
    inline const Aws::String& GetRouteInstallationStatusReason() const { return m_routeInstallationStatusReason; }
    inline bool RouteInstallationStatusReasonHasBeenSet() const { return m_routeInstallationStatusReasonHasBeenSet; }
    template<typename RouteInstallationStatusReasonT = Aws::String>
    void SetRouteInstallationStatusReason(RouteInstallationStatusReasonT&& value) { m_routeInstallationStatusReasonHasBeenSet = true; m_routeInstallationStatusReason = std::forward<RouteInstallationStatusReasonT>(value); }
    template<typename RouteInstallationStatusReasonT = Aws::String>
    RouteServerRouteInstallationDetail& WithRouteInstallationStatusReason(RouteInstallationStatusReasonT&& value) { SetRouteInstallationStatusReason(std::forward<RouteInstallationStatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    RouteServerRouteInstallationStatus m_routeInstallationStatus{RouteServerRouteInstallationStatus::NOT_SET};
    bool m_routeInstallationStatusHasBeenSet = false;

    Aws::String m_routeInstallationStatusReason;
    bool m_routeInstallationStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
