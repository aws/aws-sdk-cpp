/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The characteristics of a source or destination user for linking a federated
   * user profile to a local user profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ProviderUserIdentifierType">AWS
   * API Reference</a></p>
   */
  class ProviderUserIdentifierType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the provider, such as Facebook, Google, or Login with Amazon.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    ProviderUserIdentifierType& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provider attribute to link to, such as
     * <code>NameID</code>.</p>
     */
    inline const Aws::String& GetProviderAttributeName() const { return m_providerAttributeName; }
    inline bool ProviderAttributeNameHasBeenSet() const { return m_providerAttributeNameHasBeenSet; }
    template<typename ProviderAttributeNameT = Aws::String>
    void SetProviderAttributeName(ProviderAttributeNameT&& value) { m_providerAttributeNameHasBeenSet = true; m_providerAttributeName = std::forward<ProviderAttributeNameT>(value); }
    template<typename ProviderAttributeNameT = Aws::String>
    ProviderUserIdentifierType& WithProviderAttributeName(ProviderAttributeNameT&& value) { SetProviderAttributeName(std::forward<ProviderAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the provider attribute to link to, such as
     * <code>xxxxx_account</code>.</p>
     */
    inline const Aws::String& GetProviderAttributeValue() const { return m_providerAttributeValue; }
    inline bool ProviderAttributeValueHasBeenSet() const { return m_providerAttributeValueHasBeenSet; }
    template<typename ProviderAttributeValueT = Aws::String>
    void SetProviderAttributeValue(ProviderAttributeValueT&& value) { m_providerAttributeValueHasBeenSet = true; m_providerAttributeValue = std::forward<ProviderAttributeValueT>(value); }
    template<typename ProviderAttributeValueT = Aws::String>
    ProviderUserIdentifierType& WithProviderAttributeValue(ProviderAttributeValueT&& value) { SetProviderAttributeValue(std::forward<ProviderAttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerAttributeName;
    bool m_providerAttributeNameHasBeenSet = false;

    Aws::String m_providerAttributeValue;
    bool m_providerAttributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
