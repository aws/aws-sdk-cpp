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
#include <aws/ec2/model/TransitGatewayRouteTableState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a transit gateway route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRouteTable">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayRouteTable
  {
  public:
    TransitGatewayRouteTable();
    TransitGatewayRouteTable(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayRouteTable& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayRouteTable& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTableState& GetState() const{ return m_state; }

    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline void SetState(const TransitGatewayRouteTableState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline void SetState(TransitGatewayRouteTableState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTable& WithState(const TransitGatewayRouteTableState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTable& WithState(TransitGatewayRouteTableState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this is the default association route table for the transit
     * gateway.</p>
     */
    inline bool GetDefaultAssociationRouteTable() const{ return m_defaultAssociationRouteTable; }

    /**
     * <p>Indicates whether this is the default association route table for the transit
     * gateway.</p>
     */
    inline bool DefaultAssociationRouteTableHasBeenSet() const { return m_defaultAssociationRouteTableHasBeenSet; }

    /**
     * <p>Indicates whether this is the default association route table for the transit
     * gateway.</p>
     */
    inline void SetDefaultAssociationRouteTable(bool value) { m_defaultAssociationRouteTableHasBeenSet = true; m_defaultAssociationRouteTable = value; }

    /**
     * <p>Indicates whether this is the default association route table for the transit
     * gateway.</p>
     */
    inline TransitGatewayRouteTable& WithDefaultAssociationRouteTable(bool value) { SetDefaultAssociationRouteTable(value); return *this;}


    /**
     * <p>Indicates whether this is the default propagation route table for the transit
     * gateway.</p>
     */
    inline bool GetDefaultPropagationRouteTable() const{ return m_defaultPropagationRouteTable; }

    /**
     * <p>Indicates whether this is the default propagation route table for the transit
     * gateway.</p>
     */
    inline bool DefaultPropagationRouteTableHasBeenSet() const { return m_defaultPropagationRouteTableHasBeenSet; }

    /**
     * <p>Indicates whether this is the default propagation route table for the transit
     * gateway.</p>
     */
    inline void SetDefaultPropagationRouteTable(bool value) { m_defaultPropagationRouteTableHasBeenSet = true; m_defaultPropagationRouteTable = value; }

    /**
     * <p>Indicates whether this is the default propagation route table for the transit
     * gateway.</p>
     */
    inline TransitGatewayRouteTable& WithDefaultPropagationRouteTable(bool value) { SetDefaultPropagationRouteTable(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline TransitGatewayRouteTable& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline TransitGatewayRouteTable& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline TransitGatewayRouteTable& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline TransitGatewayRouteTable& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline TransitGatewayRouteTable& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline TransitGatewayRouteTable& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet;

    TransitGatewayRouteTableState m_state;
    bool m_stateHasBeenSet;

    bool m_defaultAssociationRouteTable;
    bool m_defaultAssociationRouteTableHasBeenSet;

    bool m_defaultPropagationRouteTable;
    bool m_defaultPropagationRouteTableHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
