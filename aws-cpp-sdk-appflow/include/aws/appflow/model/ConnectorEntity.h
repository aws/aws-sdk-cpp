/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The high-level entity that can be queried in Amazon AppFlow. For example, a
   * Salesforce entity might be an <i>Account</i> or <i>Opportunity</i>, whereas a
   * ServiceNow entity might be an <i>Incident</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorEntity">AWS
   * API Reference</a></p>
   */
  class ConnectorEntity
  {
  public:
    AWS_APPFLOW_API ConnectorEntity();
    AWS_APPFLOW_API ConnectorEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the connector entity. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the connector entity. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the connector entity. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the connector entity. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the connector entity. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the connector entity. </p>
     */
    inline ConnectorEntity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the connector entity. </p>
     */
    inline ConnectorEntity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the connector entity. </p>
     */
    inline ConnectorEntity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline ConnectorEntity& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline ConnectorEntity& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p> The label applied to the connector entity. </p>
     */
    inline ConnectorEntity& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p> Specifies whether the connector entity is a parent or a category and has
     * more entities nested underneath it. If another call is made with
     * <code>entitiesPath =
     * "the_current_entity_name_with_hasNestedEntities_true"</code>, then it returns
     * the nested entities underneath it. This provides a way to retrieve all supported
     * entities in a recursive fashion. </p>
     */
    inline bool GetHasNestedEntities() const{ return m_hasNestedEntities; }

    /**
     * <p> Specifies whether the connector entity is a parent or a category and has
     * more entities nested underneath it. If another call is made with
     * <code>entitiesPath =
     * "the_current_entity_name_with_hasNestedEntities_true"</code>, then it returns
     * the nested entities underneath it. This provides a way to retrieve all supported
     * entities in a recursive fashion. </p>
     */
    inline bool HasNestedEntitiesHasBeenSet() const { return m_hasNestedEntitiesHasBeenSet; }

    /**
     * <p> Specifies whether the connector entity is a parent or a category and has
     * more entities nested underneath it. If another call is made with
     * <code>entitiesPath =
     * "the_current_entity_name_with_hasNestedEntities_true"</code>, then it returns
     * the nested entities underneath it. This provides a way to retrieve all supported
     * entities in a recursive fashion. </p>
     */
    inline void SetHasNestedEntities(bool value) { m_hasNestedEntitiesHasBeenSet = true; m_hasNestedEntities = value; }

    /**
     * <p> Specifies whether the connector entity is a parent or a category and has
     * more entities nested underneath it. If another call is made with
     * <code>entitiesPath =
     * "the_current_entity_name_with_hasNestedEntities_true"</code>, then it returns
     * the nested entities underneath it. This provides a way to retrieve all supported
     * entities in a recursive fashion. </p>
     */
    inline ConnectorEntity& WithHasNestedEntities(bool value) { SetHasNestedEntities(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_hasNestedEntities;
    bool m_hasNestedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
