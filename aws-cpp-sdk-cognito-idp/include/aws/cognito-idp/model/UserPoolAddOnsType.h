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
#include <aws/cognito-idp/model/AdvancedSecurityModeType.h>
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
   * <p>The user pool add-ons type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolAddOnsType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType
  {
  public:
    UserPoolAddOnsType();
    UserPoolAddOnsType(Aws::Utils::Json::JsonView jsonValue);
    UserPoolAddOnsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The advanced security mode.</p>
     */
    inline const AdvancedSecurityModeType& GetAdvancedSecurityMode() const{ return m_advancedSecurityMode; }

    /**
     * <p>The advanced security mode.</p>
     */
    inline bool AdvancedSecurityModeHasBeenSet() const { return m_advancedSecurityModeHasBeenSet; }

    /**
     * <p>The advanced security mode.</p>
     */
    inline void SetAdvancedSecurityMode(const AdvancedSecurityModeType& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = value; }

    /**
     * <p>The advanced security mode.</p>
     */
    inline void SetAdvancedSecurityMode(AdvancedSecurityModeType&& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = std::move(value); }

    /**
     * <p>The advanced security mode.</p>
     */
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(const AdvancedSecurityModeType& value) { SetAdvancedSecurityMode(value); return *this;}

    /**
     * <p>The advanced security mode.</p>
     */
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(AdvancedSecurityModeType&& value) { SetAdvancedSecurityMode(std::move(value)); return *this;}

  private:

    AdvancedSecurityModeType m_advancedSecurityMode;
    bool m_advancedSecurityModeHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
