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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class GetSdkTypeResult
  {
  public:
    AWS_APIGATEWAY_API GetSdkTypeResult() = default;
    AWS_APIGATEWAY_API GetSdkTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetSdkTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSdkTypeResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline const Aws::String& GetFriendlyName() const { return m_friendlyName; }
    template<typename FriendlyNameT = Aws::String>
    void SetFriendlyName(FriendlyNameT&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::forward<FriendlyNameT>(value); }
    template<typename FriendlyNameT = Aws::String>
    GetSdkTypeResult& WithFriendlyName(FriendlyNameT&& value) { SetFriendlyName(std::forward<FriendlyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an SdkType.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSdkTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline const Aws::Vector<SdkConfigurationProperty>& GetConfigurationProperties() const { return m_configurationProperties; }
    template<typename ConfigurationPropertiesT = Aws::Vector<SdkConfigurationProperty>>
    void SetConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = std::forward<ConfigurationPropertiesT>(value); }
    template<typename ConfigurationPropertiesT = Aws::Vector<SdkConfigurationProperty>>
    GetSdkTypeResult& WithConfigurationProperties(ConfigurationPropertiesT&& value) { SetConfigurationProperties(std::forward<ConfigurationPropertiesT>(value)); return *this;}
    template<typename ConfigurationPropertiesT = SdkConfigurationProperty>
    GetSdkTypeResult& AddConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.emplace_back(std::forward<ConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSdkTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
