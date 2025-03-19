/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/Scope.h>
#include <aws/iottwinmaker/model/DataConnector.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The function response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/FunctionResponse">AWS
   * API Reference</a></p>
   */
  class FunctionResponse
  {
  public:
    AWS_IOTTWINMAKER_API FunctionResponse() = default;
    AWS_IOTTWINMAKER_API FunctionResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FunctionResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The required properties of the function.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredProperties() const { return m_requiredProperties; }
    inline bool RequiredPropertiesHasBeenSet() const { return m_requiredPropertiesHasBeenSet; }
    template<typename RequiredPropertiesT = Aws::Vector<Aws::String>>
    void SetRequiredProperties(RequiredPropertiesT&& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties = std::forward<RequiredPropertiesT>(value); }
    template<typename RequiredPropertiesT = Aws::Vector<Aws::String>>
    FunctionResponse& WithRequiredProperties(RequiredPropertiesT&& value) { SetRequiredProperties(std::forward<RequiredPropertiesT>(value)); return *this;}
    template<typename RequiredPropertiesT = Aws::String>
    FunctionResponse& AddRequiredProperties(RequiredPropertiesT&& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties.emplace_back(std::forward<RequiredPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of the function.</p>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline FunctionResponse& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data connector.</p>
     */
    inline const DataConnector& GetImplementedBy() const { return m_implementedBy; }
    inline bool ImplementedByHasBeenSet() const { return m_implementedByHasBeenSet; }
    template<typename ImplementedByT = DataConnector>
    void SetImplementedBy(ImplementedByT&& value) { m_implementedByHasBeenSet = true; m_implementedBy = std::forward<ImplementedByT>(value); }
    template<typename ImplementedByT = DataConnector>
    FunctionResponse& WithImplementedBy(ImplementedByT&& value) { SetImplementedBy(std::forward<ImplementedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this function is inherited.</p>
     */
    inline bool GetIsInherited() const { return m_isInherited; }
    inline bool IsInheritedHasBeenSet() const { return m_isInheritedHasBeenSet; }
    inline void SetIsInherited(bool value) { m_isInheritedHasBeenSet = true; m_isInherited = value; }
    inline FunctionResponse& WithIsInherited(bool value) { SetIsInherited(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_requiredProperties;
    bool m_requiredPropertiesHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    DataConnector m_implementedBy;
    bool m_implementedByHasBeenSet = false;

    bool m_isInherited{false};
    bool m_isInheritedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
