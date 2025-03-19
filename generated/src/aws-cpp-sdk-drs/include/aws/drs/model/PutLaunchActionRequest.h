/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchActionCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/LaunchActionParameter.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class PutLaunchActionRequest : public DrsRequest
  {
  public:
    AWS_DRS_API PutLaunchActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLaunchAction"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Launch action code.</p>
     */
    inline const Aws::String& GetActionCode() const { return m_actionCode; }
    inline bool ActionCodeHasBeenSet() const { return m_actionCodeHasBeenSet; }
    template<typename ActionCodeT = Aws::String>
    void SetActionCode(ActionCodeT&& value) { m_actionCodeHasBeenSet = true; m_actionCode = std::forward<ActionCodeT>(value); }
    template<typename ActionCodeT = Aws::String>
    PutLaunchActionRequest& WithActionCode(ActionCodeT&& value) { SetActionCode(std::forward<ActionCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    PutLaunchActionRequest& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetActionVersion() const { return m_actionVersion; }
    inline bool ActionVersionHasBeenSet() const { return m_actionVersionHasBeenSet; }
    template<typename ActionVersionT = Aws::String>
    void SetActionVersion(ActionVersionT&& value) { m_actionVersionHasBeenSet = true; m_actionVersion = std::forward<ActionVersionT>(value); }
    template<typename ActionVersionT = Aws::String>
    PutLaunchActionRequest& WithActionVersion(ActionVersionT&& value) { SetActionVersion(std::forward<ActionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch action is active.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PutLaunchActionRequest& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    
    inline LaunchActionCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(LaunchActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline PutLaunchActionRequest& WithCategory(LaunchActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutLaunchActionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutLaunchActionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline bool GetOptional() const { return m_optional; }
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline PutLaunchActionRequest& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}

    ///@{
    
    inline int GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline PutLaunchActionRequest& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, LaunchActionParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, LaunchActionParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, LaunchActionParameter>>
    PutLaunchActionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = LaunchActionParameter>
    PutLaunchActionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    PutLaunchActionRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionCode;
    bool m_actionCodeHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionVersion;
    bool m_actionVersionHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    LaunchActionCategory m_category{LaunchActionCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_optional{false};
    bool m_optionalHasBeenSet = false;

    int m_order{0};
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, LaunchActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
