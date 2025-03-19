/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/PropertyDefinitionRequest.h>
#include <aws/iottwinmaker/model/DataValue.h>
#include <aws/iottwinmaker/model/PropertyUpdateType.h>
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
   * <p>An object that sets information about a property.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyRequest">AWS
   * API Reference</a></p>
   */
  class PropertyRequest
  {
  public:
    AWS_IOTTWINMAKER_API PropertyRequest() = default;
    AWS_IOTTWINMAKER_API PropertyRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies information about a property.</p>
     */
    inline const PropertyDefinitionRequest& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = PropertyDefinitionRequest>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = PropertyDefinitionRequest>
    PropertyRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const DataValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DataValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DataValue>
    PropertyRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update type of the update property request.</p>
     */
    inline PropertyUpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(PropertyUpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline PropertyRequest& WithUpdateType(PropertyUpdateType value) { SetUpdateType(value); return *this;}
    ///@}
  private:

    PropertyDefinitionRequest m_definition;
    bool m_definitionHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    PropertyUpdateType m_updateType{PropertyUpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
