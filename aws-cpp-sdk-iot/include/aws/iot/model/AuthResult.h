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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuthInfo.h>
#include <aws/iot/model/Allowed.h>
#include <aws/iot/model/Denied.h>
#include <aws/iot/model/AuthDecision.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorizer result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthResult">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API AuthResult
  {
  public:
    AuthResult();
    AuthResult(Aws::Utils::Json::JsonView jsonValue);
    AuthResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Authorization information.</p>
     */
    inline const AuthInfo& GetAuthInfo() const{ return m_authInfo; }

    /**
     * <p>Authorization information.</p>
     */
    inline bool AuthInfoHasBeenSet() const { return m_authInfoHasBeenSet; }

    /**
     * <p>Authorization information.</p>
     */
    inline void SetAuthInfo(const AuthInfo& value) { m_authInfoHasBeenSet = true; m_authInfo = value; }

    /**
     * <p>Authorization information.</p>
     */
    inline void SetAuthInfo(AuthInfo&& value) { m_authInfoHasBeenSet = true; m_authInfo = std::move(value); }

    /**
     * <p>Authorization information.</p>
     */
    inline AuthResult& WithAuthInfo(const AuthInfo& value) { SetAuthInfo(value); return *this;}

    /**
     * <p>Authorization information.</p>
     */
    inline AuthResult& WithAuthInfo(AuthInfo&& value) { SetAuthInfo(std::move(value)); return *this;}


    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline const Allowed& GetAllowed() const{ return m_allowed; }

    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline bool AllowedHasBeenSet() const { return m_allowedHasBeenSet; }

    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline void SetAllowed(const Allowed& value) { m_allowedHasBeenSet = true; m_allowed = value; }

    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline void SetAllowed(Allowed&& value) { m_allowedHasBeenSet = true; m_allowed = std::move(value); }

    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline AuthResult& WithAllowed(const Allowed& value) { SetAllowed(value); return *this;}

    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline AuthResult& WithAllowed(Allowed&& value) { SetAllowed(std::move(value)); return *this;}


    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline const Denied& GetDenied() const{ return m_denied; }

    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline bool DeniedHasBeenSet() const { return m_deniedHasBeenSet; }

    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline void SetDenied(const Denied& value) { m_deniedHasBeenSet = true; m_denied = value; }

    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline void SetDenied(Denied&& value) { m_deniedHasBeenSet = true; m_denied = std::move(value); }

    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline AuthResult& WithDenied(const Denied& value) { SetDenied(value); return *this;}

    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline AuthResult& WithDenied(Denied&& value) { SetDenied(std::move(value)); return *this;}


    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline const AuthDecision& GetAuthDecision() const{ return m_authDecision; }

    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline bool AuthDecisionHasBeenSet() const { return m_authDecisionHasBeenSet; }

    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline void SetAuthDecision(const AuthDecision& value) { m_authDecisionHasBeenSet = true; m_authDecision = value; }

    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline void SetAuthDecision(AuthDecision&& value) { m_authDecisionHasBeenSet = true; m_authDecision = std::move(value); }

    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline AuthResult& WithAuthDecision(const AuthDecision& value) { SetAuthDecision(value); return *this;}

    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline AuthResult& WithAuthDecision(AuthDecision&& value) { SetAuthDecision(std::move(value)); return *this;}


    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const{ return m_missingContextValues; }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline void SetMissingContextValues(const Aws::Vector<Aws::String>& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline void SetMissingContextValues(Aws::Vector<Aws::String>&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::move(value); }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline AuthResult& WithMissingContextValues(const Aws::Vector<Aws::String>& value) { SetMissingContextValues(value); return *this;}

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline AuthResult& WithMissingContextValues(Aws::Vector<Aws::String>&& value) { SetMissingContextValues(std::move(value)); return *this;}

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline AuthResult& AddMissingContextValues(const Aws::String& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline AuthResult& AddMissingContextValues(Aws::String&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline AuthResult& AddMissingContextValues(const char* value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

  private:

    AuthInfo m_authInfo;
    bool m_authInfoHasBeenSet;

    Allowed m_allowed;
    bool m_allowedHasBeenSet;

    Denied m_denied;
    bool m_deniedHasBeenSet;

    AuthDecision m_authDecision;
    bool m_authDecisionHasBeenSet;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
