/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayPolicyTableState.h>
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
   * <p>Describes a transit gateway policy table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPolicyTable">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPolicyTable
  {
  public:
    AWS_EC2_API TransitGatewayPolicyTable();
    AWS_EC2_API TransitGatewayPolicyTable(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyTable& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline const Aws::String& GetTransitGatewayPolicyTableId() const{ return m_transitGatewayPolicyTableId; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const Aws::String& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = value; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(Aws::String&& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const char* value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& WithTransitGatewayPolicyTableId(const Aws::String& value) { SetTransitGatewayPolicyTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& WithTransitGatewayPolicyTableId(Aws::String&& value) { SetTransitGatewayPolicyTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& WithTransitGatewayPolicyTableId(const char* value) { SetTransitGatewayPolicyTableId(value); return *this;}


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
    inline TransitGatewayPolicyTable& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayPolicyTable& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayPolicyTable& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline const TransitGatewayPolicyTableState& GetState() const{ return m_state; }

    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline void SetState(const TransitGatewayPolicyTableState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline void SetState(TransitGatewayPolicyTableState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline TransitGatewayPolicyTable& WithState(const TransitGatewayPolicyTableState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the transit gateway policy table</p>
     */
    inline TransitGatewayPolicyTable& WithState(TransitGatewayPolicyTableState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline TransitGatewayPolicyTable& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the transit gateway policy table was created.</p>
     */
    inline TransitGatewayPolicyTable& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>he key-value pairs associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTable& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayPolicyTableId;
    bool m_transitGatewayPolicyTableIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    TransitGatewayPolicyTableState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
