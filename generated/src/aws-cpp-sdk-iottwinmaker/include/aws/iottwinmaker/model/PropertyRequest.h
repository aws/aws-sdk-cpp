﻿/**
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
    AWS_IOTTWINMAKER_API PropertyRequest();
    AWS_IOTTWINMAKER_API PropertyRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies information about a property.</p>
     */
    inline const PropertyDefinitionRequest& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const PropertyDefinitionRequest& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(PropertyDefinitionRequest&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline PropertyRequest& WithDefinition(const PropertyDefinitionRequest& value) { SetDefinition(value); return *this;}
    inline PropertyRequest& WithDefinition(PropertyDefinitionRequest&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const DataValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const DataValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(DataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PropertyRequest& WithValue(const DataValue& value) { SetValue(value); return *this;}
    inline PropertyRequest& WithValue(DataValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update type of the update property request.</p>
     */
    inline const PropertyUpdateType& GetUpdateType() const{ return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(const PropertyUpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline void SetUpdateType(PropertyUpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }
    inline PropertyRequest& WithUpdateType(const PropertyUpdateType& value) { SetUpdateType(value); return *this;}
    inline PropertyRequest& WithUpdateType(PropertyUpdateType&& value) { SetUpdateType(std::move(value)); return *this;}
    ///@}
  private:

    PropertyDefinitionRequest m_definition;
    bool m_definitionHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    PropertyUpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
