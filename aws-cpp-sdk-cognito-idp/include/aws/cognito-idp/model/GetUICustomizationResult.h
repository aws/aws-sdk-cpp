/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API GetUICustomizationResult
  {
  public:
    GetUICustomizationResult();
    GetUICustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUICustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
