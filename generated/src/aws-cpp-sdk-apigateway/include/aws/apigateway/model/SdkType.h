/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/SdkConfigurationProperty.h>
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
   * <p>A type of SDK that API Gateway can generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkType">AWS
   * API Reference</a></p>
   */
  class SdkType
  {
  public:
    AWS_APIGATEWAY_API SdkType() = default;
    AWS_APIGATEWAY_API SdkType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API SdkType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SdkType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline const Aws::String& GetFriendlyName() const { return m_friendlyName; }
    inline bool FriendlyNameHasBeenSet() const { return m_friendlyNameHasBeenSet; }
    template<typename FriendlyNameT = Aws::String>
    void SetFriendlyName(FriendlyNameT&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::forward<FriendlyNameT>(value); }
    template<typename FriendlyNameT = Aws::String>
    SdkType& WithFriendlyName(FriendlyNameT&& value) { SetFriendlyName(std::forward<FriendlyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an SdkType.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SdkType& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline const Aws::Vector<SdkConfigurationProperty>& GetConfigurationProperties() const { return m_configurationProperties; }
    inline bool ConfigurationPropertiesHasBeenSet() const { return m_configurationPropertiesHasBeenSet; }
    template<typename ConfigurationPropertiesT = Aws::Vector<SdkConfigurationProperty>>
    void SetConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = std::forward<ConfigurationPropertiesT>(value); }
    template<typename ConfigurationPropertiesT = Aws::Vector<SdkConfigurationProperty>>
    SdkType& WithConfigurationProperties(ConfigurationPropertiesT&& value) { SetConfigurationProperties(std::forward<ConfigurationPropertiesT>(value)); return *this;}
    template<typename ConfigurationPropertiesT = SdkConfigurationProperty>
    SdkType& AddConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.emplace_back(std::forward<ConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SdkType& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_friendlyName;
    bool m_friendlyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SdkConfigurationProperty> m_configurationProperties;
    bool m_configurationPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
