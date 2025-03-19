/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AuthResult
  {
  public:
    AWS_IOT_API AuthResult() = default;
    AWS_IOT_API AuthResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Authorization information.</p>
     */
    inline const AuthInfo& GetAuthInfo() const { return m_authInfo; }
    inline bool AuthInfoHasBeenSet() const { return m_authInfoHasBeenSet; }
    template<typename AuthInfoT = AuthInfo>
    void SetAuthInfo(AuthInfoT&& value) { m_authInfoHasBeenSet = true; m_authInfo = std::forward<AuthInfoT>(value); }
    template<typename AuthInfoT = AuthInfo>
    AuthResult& WithAuthInfo(AuthInfoT&& value) { SetAuthInfo(std::forward<AuthInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline const Allowed& GetAllowed() const { return m_allowed; }
    inline bool AllowedHasBeenSet() const { return m_allowedHasBeenSet; }
    template<typename AllowedT = Allowed>
    void SetAllowed(AllowedT&& value) { m_allowedHasBeenSet = true; m_allowed = std::forward<AllowedT>(value); }
    template<typename AllowedT = Allowed>
    AuthResult& WithAllowed(AllowedT&& value) { SetAllowed(std::forward<AllowedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline const Denied& GetDenied() const { return m_denied; }
    inline bool DeniedHasBeenSet() const { return m_deniedHasBeenSet; }
    template<typename DeniedT = Denied>
    void SetDenied(DeniedT&& value) { m_deniedHasBeenSet = true; m_denied = std::forward<DeniedT>(value); }
    template<typename DeniedT = Denied>
    AuthResult& WithDenied(DeniedT&& value) { SetDenied(std::forward<DeniedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline AuthDecision GetAuthDecision() const { return m_authDecision; }
    inline bool AuthDecisionHasBeenSet() const { return m_authDecisionHasBeenSet; }
    inline void SetAuthDecision(AuthDecision value) { m_authDecisionHasBeenSet = true; m_authDecision = value; }
    inline AuthResult& WithAuthDecision(AuthDecision value) { SetAuthDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const { return m_missingContextValues; }
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    void SetMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::forward<MissingContextValuesT>(value); }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    AuthResult& WithMissingContextValues(MissingContextValuesT&& value) { SetMissingContextValues(std::forward<MissingContextValuesT>(value)); return *this;}
    template<typename MissingContextValuesT = Aws::String>
    AuthResult& AddMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.emplace_back(std::forward<MissingContextValuesT>(value)); return *this; }
    ///@}
  private:

    AuthInfo m_authInfo;
    bool m_authInfoHasBeenSet = false;

    Allowed m_allowed;
    bool m_allowedHasBeenSet = false;

    Denied m_denied;
    bool m_deniedHasBeenSet = false;

    AuthDecision m_authDecision{AuthDecision::NOT_SET};
    bool m_authDecisionHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
