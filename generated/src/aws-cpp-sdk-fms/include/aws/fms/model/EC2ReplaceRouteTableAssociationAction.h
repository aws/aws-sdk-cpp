/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Information about the ReplaceRouteTableAssociation action in Amazon
   * EC2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2ReplaceRouteTableAssociationAction">AWS
   * API Reference</a></p>
   */
  class EC2ReplaceRouteTableAssociationAction
  {
  public:
    AWS_FMS_API EC2ReplaceRouteTableAssociationAction();
    AWS_FMS_API EC2ReplaceRouteTableAssociationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2ReplaceRouteTableAssociationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the ReplaceRouteTableAssociation action in Amazon EC2.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the association ID.</p>
     */
    inline const ActionTarget& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>Information about the association ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>Information about the association ID.</p>
     */
    inline void SetAssociationId(const ActionTarget& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>Information about the association ID.</p>
     */
    inline void SetAssociationId(ActionTarget&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>Information about the association ID.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithAssociationId(const ActionTarget& value) { SetAssociationId(value); return *this;}

    /**
     * <p>Information about the association ID.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithAssociationId(ActionTarget&& value) { SetAssociationId(std::move(value)); return *this;}


    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline const ActionTarget& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline void SetRouteTableId(const ActionTarget& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline void SetRouteTableId(ActionTarget&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithRouteTableId(const ActionTarget& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>Information about the ID of the new route table to associate with the
     * subnet.</p>
     */
    inline EC2ReplaceRouteTableAssociationAction& WithRouteTableId(ActionTarget&& value) { SetRouteTableId(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_associationId;
    bool m_associationIdHasBeenSet = false;

    ActionTarget m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
