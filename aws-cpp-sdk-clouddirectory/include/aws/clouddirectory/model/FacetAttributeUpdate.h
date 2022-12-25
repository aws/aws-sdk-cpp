/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/FacetAttribute.h>
#include <aws/clouddirectory/model/UpdateActionType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A structure that contains information used to update an
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class FacetAttributeUpdate
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate();
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute to update.</p>
     */
    inline const FacetAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to update.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to update.</p>
     */
    inline void SetAttribute(const FacetAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to update.</p>
     */
    inline void SetAttribute(FacetAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to update.</p>
     */
    inline FacetAttributeUpdate& WithAttribute(const FacetAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to update.</p>
     */
    inline FacetAttributeUpdate& WithAttribute(FacetAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline const UpdateActionType& GetAction() const{ return m_action; }

    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline void SetAction(const UpdateActionType& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline void SetAction(UpdateActionType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline FacetAttributeUpdate& WithAction(const UpdateActionType& value) { SetAction(value); return *this;}

    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline FacetAttributeUpdate& WithAction(UpdateActionType&& value) { SetAction(std::move(value)); return *this;}

  private:

    FacetAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    UpdateActionType m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
