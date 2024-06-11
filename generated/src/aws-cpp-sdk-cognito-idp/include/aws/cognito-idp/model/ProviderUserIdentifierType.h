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
   * <p>A container for information about an IdP for a user pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ProviderUserIdentifierType">AWS
   * API Reference</a></p>
   */
  class ProviderUserIdentifierType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType();
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ProviderUserIdentifierType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the provider, such as Facebook, Google, or Login with Amazon.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline ProviderUserIdentifierType& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline ProviderUserIdentifierType& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline ProviderUserIdentifierType& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provider attribute to link to, such as
     * <code>NameID</code>.</p>
     */
    inline const Aws::String& GetProviderAttributeName() const{ return m_providerAttributeName; }
    inline bool ProviderAttributeNameHasBeenSet() const { return m_providerAttributeNameHasBeenSet; }
    inline void SetProviderAttributeName(const Aws::String& value) { m_providerAttributeNameHasBeenSet = true; m_providerAttributeName = value; }
    inline void SetProviderAttributeName(Aws::String&& value) { m_providerAttributeNameHasBeenSet = true; m_providerAttributeName = std::move(value); }
    inline void SetProviderAttributeName(const char* value) { m_providerAttributeNameHasBeenSet = true; m_providerAttributeName.assign(value); }
    inline ProviderUserIdentifierType& WithProviderAttributeName(const Aws::String& value) { SetProviderAttributeName(value); return *this;}
    inline ProviderUserIdentifierType& WithProviderAttributeName(Aws::String&& value) { SetProviderAttributeName(std::move(value)); return *this;}
    inline ProviderUserIdentifierType& WithProviderAttributeName(const char* value) { SetProviderAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the provider attribute to link to, such as
     * <code>xxxxx_account</code>.</p>
     */
    inline const Aws::String& GetProviderAttributeValue() const{ return m_providerAttributeValue; }
    inline bool ProviderAttributeValueHasBeenSet() const { return m_providerAttributeValueHasBeenSet; }
    inline void SetProviderAttributeValue(const Aws::String& value) { m_providerAttributeValueHasBeenSet = true; m_providerAttributeValue = value; }
    inline void SetProviderAttributeValue(Aws::String&& value) { m_providerAttributeValueHasBeenSet = true; m_providerAttributeValue = std::move(value); }
    inline void SetProviderAttributeValue(const char* value) { m_providerAttributeValueHasBeenSet = true; m_providerAttributeValue.assign(value); }
    inline ProviderUserIdentifierType& WithProviderAttributeValue(const Aws::String& value) { SetProviderAttributeValue(value); return *this;}
    inline ProviderUserIdentifierType& WithProviderAttributeValue(Aws::String&& value) { SetProviderAttributeValue(std::move(value)); return *this;}
    inline ProviderUserIdentifierType& WithProviderAttributeValue(const char* value) { SetProviderAttributeValue(value); return *this;}
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
