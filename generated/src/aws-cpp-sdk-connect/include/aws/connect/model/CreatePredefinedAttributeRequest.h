/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PredefinedAttributeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/InputPredefinedAttributeConfiguration.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreatePredefinedAttributeRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreatePredefinedAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePredefinedAttribute"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreatePredefinedAttributeRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePredefinedAttributeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline const PredefinedAttributeValues& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = PredefinedAttributeValues>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = PredefinedAttributeValues>
    CreatePredefinedAttributeRequest& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values that enable you to categorize your predefined attributes. You can use
     * them in custom UI elements across the Amazon Connect admin website.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPurposes() const { return m_purposes; }
    inline bool PurposesHasBeenSet() const { return m_purposesHasBeenSet; }
    template<typename PurposesT = Aws::Vector<Aws::String>>
    void SetPurposes(PurposesT&& value) { m_purposesHasBeenSet = true; m_purposes = std::forward<PurposesT>(value); }
    template<typename PurposesT = Aws::Vector<Aws::String>>
    CreatePredefinedAttributeRequest& WithPurposes(PurposesT&& value) { SetPurposes(std::forward<PurposesT>(value)); return *this;}
    template<typename PurposesT = Aws::String>
    CreatePredefinedAttributeRequest& AddPurposes(PurposesT&& value) { m_purposesHasBeenSet = true; m_purposes.emplace_back(std::forward<PurposesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom metadata that is associated to predefined attributes to control
     * behavior in upstream services, such as controlling how a predefined attribute
     * should be displayed in the Amazon Connect admin website.</p>
     */
    inline const InputPredefinedAttributeConfiguration& GetAttributeConfiguration() const { return m_attributeConfiguration; }
    inline bool AttributeConfigurationHasBeenSet() const { return m_attributeConfigurationHasBeenSet; }
    template<typename AttributeConfigurationT = InputPredefinedAttributeConfiguration>
    void SetAttributeConfiguration(AttributeConfigurationT&& value) { m_attributeConfigurationHasBeenSet = true; m_attributeConfiguration = std::forward<AttributeConfigurationT>(value); }
    template<typename AttributeConfigurationT = InputPredefinedAttributeConfiguration>
    CreatePredefinedAttributeRequest& WithAttributeConfiguration(AttributeConfigurationT&& value) { SetAttributeConfiguration(std::forward<AttributeConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PredefinedAttributeValues m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_purposes;
    bool m_purposesHasBeenSet = false;

    InputPredefinedAttributeConfiguration m_attributeConfiguration;
    bool m_attributeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
