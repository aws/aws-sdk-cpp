/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchActionCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/LaunchActionType.h>
#include <aws/drs/model/LaunchActionParameter.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Launch action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchAction">AWS
   * API Reference</a></p>
   */
  class LaunchAction
  {
  public:
    AWS_DRS_API LaunchAction();
    AWS_DRS_API LaunchAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Launch action code.</p>
     */
    inline const Aws::String& GetActionCode() const{ return m_actionCode; }

    /**
     * <p>Launch action code.</p>
     */
    inline bool ActionCodeHasBeenSet() const { return m_actionCodeHasBeenSet; }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(const Aws::String& value) { m_actionCodeHasBeenSet = true; m_actionCode = value; }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(Aws::String&& value) { m_actionCodeHasBeenSet = true; m_actionCode = std::move(value); }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(const char* value) { m_actionCodeHasBeenSet = true; m_actionCode.assign(value); }

    /**
     * <p>Launch action code.</p>
     */
    inline LaunchAction& WithActionCode(const Aws::String& value) { SetActionCode(value); return *this;}

    /**
     * <p>Launch action code.</p>
     */
    inline LaunchAction& WithActionCode(Aws::String&& value) { SetActionCode(std::move(value)); return *this;}

    /**
     * <p>Launch action code.</p>
     */
    inline LaunchAction& WithActionCode(const char* value) { SetActionCode(value); return *this;}


    
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    
    inline LaunchAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    
    inline LaunchAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    
    inline LaunchAction& WithActionId(const char* value) { SetActionId(value); return *this;}


    
    inline const Aws::String& GetActionVersion() const{ return m_actionVersion; }

    
    inline bool ActionVersionHasBeenSet() const { return m_actionVersionHasBeenSet; }

    
    inline void SetActionVersion(const Aws::String& value) { m_actionVersionHasBeenSet = true; m_actionVersion = value; }

    
    inline void SetActionVersion(Aws::String&& value) { m_actionVersionHasBeenSet = true; m_actionVersion = std::move(value); }

    
    inline void SetActionVersion(const char* value) { m_actionVersionHasBeenSet = true; m_actionVersion.assign(value); }

    
    inline LaunchAction& WithActionVersion(const Aws::String& value) { SetActionVersion(value); return *this;}

    
    inline LaunchAction& WithActionVersion(Aws::String&& value) { SetActionVersion(std::move(value)); return *this;}

    
    inline LaunchAction& WithActionVersion(const char* value) { SetActionVersion(value); return *this;}


    /**
     * <p>Whether the launch action is active.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Whether the launch action is active.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Whether the launch action is active.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Whether the launch action is active.</p>
     */
    inline LaunchAction& WithActive(bool value) { SetActive(value); return *this;}


    
    inline const LaunchActionCategory& GetCategory() const{ return m_category; }

    
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    
    inline void SetCategory(const LaunchActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    
    inline void SetCategory(LaunchActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    
    inline LaunchAction& WithCategory(const LaunchActionCategory& value) { SetCategory(value); return *this;}

    
    inline LaunchAction& WithCategory(LaunchActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline LaunchAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline LaunchAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline LaunchAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline LaunchAction& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline LaunchAction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline LaunchAction& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline bool GetOptional() const{ return m_optional; }

    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }

    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }

    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline LaunchAction& WithOptional(bool value) { SetOptional(value); return *this;}


    
    inline int GetOrder() const{ return m_order; }

    
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    
    inline LaunchAction& WithOrder(int value) { SetOrder(value); return *this;}


    
    inline const Aws::Map<Aws::String, LaunchActionParameter>& GetParameters() const{ return m_parameters; }

    
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    
    inline void SetParameters(const Aws::Map<Aws::String, LaunchActionParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    
    inline void SetParameters(Aws::Map<Aws::String, LaunchActionParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    
    inline LaunchAction& WithParameters(const Aws::Map<Aws::String, LaunchActionParameter>& value) { SetParameters(value); return *this;}

    
    inline LaunchAction& WithParameters(Aws::Map<Aws::String, LaunchActionParameter>&& value) { SetParameters(std::move(value)); return *this;}

    
    inline LaunchAction& AddParameters(const Aws::String& key, const LaunchActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    
    inline LaunchAction& AddParameters(Aws::String&& key, const LaunchActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    
    inline LaunchAction& AddParameters(const Aws::String& key, LaunchActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    
    inline LaunchAction& AddParameters(Aws::String&& key, LaunchActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    
    inline LaunchAction& AddParameters(const char* key, LaunchActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    
    inline LaunchAction& AddParameters(const char* key, const LaunchActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Launch action type.</p>
     */
    inline const LaunchActionType& GetType() const{ return m_type; }

    /**
     * <p>Launch action type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Launch action type.</p>
     */
    inline void SetType(const LaunchActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Launch action type.</p>
     */
    inline void SetType(LaunchActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Launch action type.</p>
     */
    inline LaunchAction& WithType(const LaunchActionType& value) { SetType(value); return *this;}

    /**
     * <p>Launch action type.</p>
     */
    inline LaunchAction& WithType(LaunchActionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_actionCode;
    bool m_actionCodeHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionVersion;
    bool m_actionVersionHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    LaunchActionCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_optional;
    bool m_optionalHasBeenSet = false;

    int m_order;
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, LaunchActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    LaunchActionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
