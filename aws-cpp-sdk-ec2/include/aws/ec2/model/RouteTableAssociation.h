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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an association between a route table and a subnet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteTableAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RouteTableAssociation
  {
  public:
    RouteTableAssociation();
    RouteTableAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    RouteTableAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline bool GetMain() const{ return m_main; }

    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }

    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline RouteTableAssociation& WithMain(bool value) { SetMain(value); return *this;}


    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const{ return m_routeTableAssociationId; }

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline void SetRouteTableAssociationId(const Aws::String& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = value; }

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline void SetRouteTableAssociationId(Aws::String&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::move(value); }

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline void SetRouteTableAssociationId(const char* value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId.assign(value); }

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(const Aws::String& value) { SetRouteTableAssociationId(value); return *this;}

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(Aws::String&& value) { SetRouteTableAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association between a route table and a subnet.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(const char* value) { SetRouteTableAssociationId(value); return *this;}


    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    bool m_main;
    bool m_mainHasBeenSet;

    Aws::String m_routeTableAssociationId;
    bool m_routeTableAssociationIdHasBeenSet;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
