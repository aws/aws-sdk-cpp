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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{
  class PutLaunchActionResult
  {
  public:
    AWS_DRS_API PutLaunchActionResult() = default;
    AWS_DRS_API PutLaunchActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API PutLaunchActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Launch action code.</p>
     */
    inline const Aws::String& GetActionCode() const { return m_actionCode; }
    template<typename ActionCodeT = Aws::String>
    void SetActionCode(ActionCodeT&& value) { m_actionCodeHasBeenSet = true; m_actionCode = std::forward<ActionCodeT>(value); }
    template<typename ActionCodeT = Aws::String>
    PutLaunchActionResult& WithActionCode(ActionCodeT&& value) { SetActionCode(std::forward<ActionCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetActionId() const { return m_actionId; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    PutLaunchActionResult& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetActionVersion() const { return m_actionVersion; }
    template<typename ActionVersionT = Aws::String>
    void SetActionVersion(ActionVersionT&& value) { m_actionVersionHasBeenSet = true; m_actionVersion = std::forward<ActionVersionT>(value); }
    template<typename ActionVersionT = Aws::String>
    PutLaunchActionResult& WithActionVersion(ActionVersionT&& value) { SetActionVersion(std::forward<ActionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch action is active.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PutLaunchActionResult& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    
    inline LaunchActionCategory GetCategory() const { return m_category; }
    inline void SetCategory(LaunchActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline PutLaunchActionResult& WithCategory(LaunchActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutLaunchActionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutLaunchActionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline bool GetOptional() const { return m_optional; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline PutLaunchActionResult& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}

    ///@{
    
    inline int GetOrder() const { return m_order; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline PutLaunchActionResult& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, LaunchActionParameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, LaunchActionParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, LaunchActionParameter>>
    PutLaunchActionResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = LaunchActionParameter>
    PutLaunchActionResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    PutLaunchActionResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch action type.</p>
     */
    inline LaunchActionType GetType() const { return m_type; }
    inline void SetType(LaunchActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PutLaunchActionResult& WithType(LaunchActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutLaunchActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    LaunchActionType m_type{LaunchActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
