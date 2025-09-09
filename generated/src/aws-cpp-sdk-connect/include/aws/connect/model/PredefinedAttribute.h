/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PredefinedAttributeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PredefinedAttributeConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a predefined attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PredefinedAttribute">AWS
   * API Reference</a></p>
   */
  class PredefinedAttribute
  {
  public:
    AWS_CONNECT_API PredefinedAttribute() = default;
    AWS_CONNECT_API PredefinedAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PredefinedAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PredefinedAttribute& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline const PredefinedAttributeValues& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = PredefinedAttributeValues>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = PredefinedAttributeValues>
    PredefinedAttribute& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
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
    PredefinedAttribute& WithPurposes(PurposesT&& value) { SetPurposes(std::forward<PurposesT>(value)); return *this;}
    template<typename PurposesT = Aws::String>
    PredefinedAttribute& AddPurposes(PurposesT&& value) { m_purposesHasBeenSet = true; m_purposes.emplace_back(std::forward<PurposesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom metadata that is associated to predefined attributes to control
     * behavior in upstream services, such as controlling how a predefined attribute
     * should be displayed in the Amazon Connect admin website.</p>
     */
    inline const PredefinedAttributeConfiguration& GetAttributeConfiguration() const { return m_attributeConfiguration; }
    inline bool AttributeConfigurationHasBeenSet() const { return m_attributeConfigurationHasBeenSet; }
    template<typename AttributeConfigurationT = PredefinedAttributeConfiguration>
    void SetAttributeConfiguration(AttributeConfigurationT&& value) { m_attributeConfigurationHasBeenSet = true; m_attributeConfiguration = std::forward<AttributeConfigurationT>(value); }
    template<typename AttributeConfigurationT = PredefinedAttributeConfiguration>
    PredefinedAttribute& WithAttributeConfiguration(AttributeConfigurationT&& value) { SetAttributeConfiguration(std::forward<AttributeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    PredefinedAttribute& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified region.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    PredefinedAttribute& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PredefinedAttributeValues m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_purposes;
    bool m_purposesHasBeenSet = false;

    PredefinedAttributeConfiguration m_attributeConfiguration;
    bool m_attributeConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
