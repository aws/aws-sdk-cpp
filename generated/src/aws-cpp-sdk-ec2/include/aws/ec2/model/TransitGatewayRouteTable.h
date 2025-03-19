/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TransitGatewayRouteTable
  {
  public:
    AWS_EC2_API TransitGatewayRouteTable() = default;
    AWS_EC2_API TransitGatewayRouteTable(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTable& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const { return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    void SetTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::forward<TransitGatewayRouteTableIdT>(value); }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    TransitGatewayRouteTable& WithTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { SetTransitGatewayRouteTableId(std::forward<TransitGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    TransitGatewayRouteTable& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway route table.</p>
     */
    inline TransitGatewayRouteTableState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayRouteTableState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayRouteTable& WithState(TransitGatewayRouteTableState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default association route table for the transit
     * gateway.</p>
     */
    inline bool GetDefaultAssociationRouteTable() const { return m_defaultAssociationRouteTable; }
    inline bool DefaultAssociationRouteTableHasBeenSet() const { return m_defaultAssociationRouteTableHasBeenSet; }
    inline void SetDefaultAssociationRouteTable(bool value) { m_defaultAssociationRouteTableHasBeenSet = true; m_defaultAssociationRouteTable = value; }
    inline TransitGatewayRouteTable& WithDefaultAssociationRouteTable(bool value) { SetDefaultAssociationRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default propagation route table for the transit
     * gateway.</p>
     */
    inline bool GetDefaultPropagationRouteTable() const { return m_defaultPropagationRouteTable; }
    inline bool DefaultPropagationRouteTableHasBeenSet() const { return m_defaultPropagationRouteTableHasBeenSet; }
    inline void SetDefaultPropagationRouteTable(bool value) { m_defaultPropagationRouteTableHasBeenSet = true; m_defaultPropagationRouteTable = value; }
    inline TransitGatewayRouteTable& WithDefaultPropagationRouteTable(bool value) { SetDefaultPropagationRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransitGatewayRouteTable& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the route table.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransitGatewayRouteTable& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransitGatewayRouteTable& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    TransitGatewayRouteTableState m_state{TransitGatewayRouteTableState::NOT_SET};
    bool m_stateHasBeenSet = false;

    bool m_defaultAssociationRouteTable{false};
    bool m_defaultAssociationRouteTableHasBeenSet = false;

    bool m_defaultPropagationRouteTable{false};
    bool m_defaultPropagationRouteTableHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
