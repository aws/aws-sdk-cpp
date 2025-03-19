/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A configuration property of an SDK type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkConfigurationProperty">AWS
   * API Reference</a></p>
   */
  class SdkConfigurationProperty
  {
  public:
    AWS_APIGATEWAY_API SdkConfigurationProperty() = default;
    AWS_APIGATEWAY_API SdkConfigurationProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API SdkConfigurationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a an SdkType configuration property.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SdkConfigurationProperty& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of an SdkType configuration property.</p>
     */
    inline const Aws::String& GetFriendlyName() const { return m_friendlyName; }
    inline bool FriendlyNameHasBeenSet() const { return m_friendlyNameHasBeenSet; }
    template<typename FriendlyNameT = Aws::String>
    void SetFriendlyName(FriendlyNameT&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::forward<FriendlyNameT>(value); }
    template<typename FriendlyNameT = Aws::String>
    SdkConfigurationProperty& WithFriendlyName(FriendlyNameT&& value) { SetFriendlyName(std::forward<FriendlyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an SdkType configuration property.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SdkConfigurationProperty& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag of an SdkType configuration property to indicate if the
     * associated SDK configuration property is required (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline SdkConfigurationProperty& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of an SdkType configuration property.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    SdkConfigurationProperty& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_friendlyName;
    bool m_friendlyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
