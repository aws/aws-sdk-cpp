/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UICustomizationType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class GetUICustomizationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUICustomizationResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUICustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUICustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UI customization information.</p>
     */
    inline const UICustomizationType& GetUICustomization() const{ return m_uICustomization; }

    /**
     * <p>The UI customization information.</p>
     */
    inline void SetUICustomization(const UICustomizationType& value) { m_uICustomization = value; }

    /**
     * <p>The UI customization information.</p>
     */
    inline void SetUICustomization(UICustomizationType&& value) { m_uICustomization = std::move(value); }

    /**
     * <p>The UI customization information.</p>
     */
    inline GetUICustomizationResult& WithUICustomization(const UICustomizationType& value) { SetUICustomization(value); return *this;}

    /**
     * <p>The UI customization information.</p>
     */
    inline GetUICustomizationResult& WithUICustomization(UICustomizationType&& value) { SetUICustomization(std::move(value)); return *this;}

  private:

    UICustomizationType m_uICustomization;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
