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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteTableAssociation.h>
#include <aws/ec2/model/PropagatingVgw.h>
#include <aws/ec2/model/Route.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteTable">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API RouteTable
  {
  public:
    RouteTable();
    RouteTable(const Aws::Utils::Xml::XmlNode& xmlNode);
    RouteTable& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline const Aws::Vector<RouteTableAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline void SetAssociations(const Aws::Vector<RouteTableAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline void SetAssociations(Aws::Vector<RouteTableAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline RouteTable& WithAssociations(const Aws::Vector<RouteTableAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline RouteTable& WithAssociations(Aws::Vector<RouteTableAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline RouteTable& AddAssociations(const RouteTableAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    /**
     * <p>The associations between the route table and one or more subnets.</p>
     */
    inline RouteTable& AddAssociations(RouteTableAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline const Aws::Vector<PropagatingVgw>& GetPropagatingVgws() const{ return m_propagatingVgws; }

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline void SetPropagatingVgws(const Aws::Vector<PropagatingVgw>& value) { m_propagatingVgwsHasBeenSet = true; m_propagatingVgws = value; }

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline void SetPropagatingVgws(Aws::Vector<PropagatingVgw>&& value) { m_propagatingVgwsHasBeenSet = true; m_propagatingVgws = std::move(value); }

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline RouteTable& WithPropagatingVgws(const Aws::Vector<PropagatingVgw>& value) { SetPropagatingVgws(value); return *this;}

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline RouteTable& WithPropagatingVgws(Aws::Vector<PropagatingVgw>&& value) { SetPropagatingVgws(std::move(value)); return *this;}

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline RouteTable& AddPropagatingVgws(const PropagatingVgw& value) { m_propagatingVgwsHasBeenSet = true; m_propagatingVgws.push_back(value); return *this; }

    /**
     * <p>Any virtual private gateway (VGW) propagating routes.</p>
     */
    inline RouteTable& AddPropagatingVgws(PropagatingVgw&& value) { m_propagatingVgwsHasBeenSet = true; m_propagatingVgws.push_back(std::move(value)); return *this; }


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
    inline RouteTable& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTable& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTable& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>The routes in the route table.</p>
     */
    inline const Aws::Vector<Route>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The routes in the route table.</p>
     */
    inline void SetRoutes(const Aws::Vector<Route>& value) { m_routesHasBeenSet = true; m_routes = value; }

    /**
     * <p>The routes in the route table.</p>
     */
    inline void SetRoutes(Aws::Vector<Route>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    /**
     * <p>The routes in the route table.</p>
     */
    inline RouteTable& WithRoutes(const Aws::Vector<Route>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The routes in the route table.</p>
     */
    inline RouteTable& WithRoutes(Aws::Vector<Route>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The routes in the route table.</p>
     */
    inline RouteTable& AddRoutes(const Route& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    /**
     * <p>The routes in the route table.</p>
     */
    inline RouteTable& AddRoutes(Route&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline RouteTable& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline RouteTable& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline RouteTable& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline RouteTable& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline RouteTable& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline RouteTable& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline RouteTable& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<RouteTableAssociation> m_associations;
    bool m_associationsHasBeenSet;

    Aws::Vector<PropagatingVgw> m_propagatingVgws;
    bool m_propagatingVgwsHasBeenSet;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet;

    Aws::Vector<Route> m_routes;
    bool m_routesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
