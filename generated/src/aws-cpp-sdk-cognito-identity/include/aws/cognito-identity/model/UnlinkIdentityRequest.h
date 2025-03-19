/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the UnlinkIdentity action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentityInput">AWS
   * API Reference</a></p>
   */
  class UnlinkIdentityRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API UnlinkIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnlinkIdentity"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    UnlinkIdentityRequest& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const { return m_logins; }
    inline bool LoginsHasBeenSet() const { return m_loginsHasBeenSet; }
    template<typename LoginsT = Aws::Map<Aws::String, Aws::String>>
    void SetLogins(LoginsT&& value) { m_loginsHasBeenSet = true; m_logins = std::forward<LoginsT>(value); }
    template<typename LoginsT = Aws::Map<Aws::String, Aws::String>>
    UnlinkIdentityRequest& WithLogins(LoginsT&& value) { SetLogins(std::forward<LoginsT>(value)); return *this;}
    template<typename LoginsKeyT = Aws::String, typename LoginsValueT = Aws::String>
    UnlinkIdentityRequest& AddLogins(LoginsKeyT&& key, LoginsValueT&& value) {
      m_loginsHasBeenSet = true; m_logins.emplace(std::forward<LoginsKeyT>(key), std::forward<LoginsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoginsToRemove() const { return m_loginsToRemove; }
    inline bool LoginsToRemoveHasBeenSet() const { return m_loginsToRemoveHasBeenSet; }
    template<typename LoginsToRemoveT = Aws::Vector<Aws::String>>
    void SetLoginsToRemove(LoginsToRemoveT&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove = std::forward<LoginsToRemoveT>(value); }
    template<typename LoginsToRemoveT = Aws::Vector<Aws::String>>
    UnlinkIdentityRequest& WithLoginsToRemove(LoginsToRemoveT&& value) { SetLoginsToRemove(std::forward<LoginsToRemoveT>(value)); return *this;}
    template<typename LoginsToRemoveT = Aws::String>
    UnlinkIdentityRequest& AddLoginsToRemove(LoginsToRemoveT&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.emplace_back(std::forward<LoginsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet = false;

    Aws::Vector<Aws::String> m_loginsToRemove;
    bool m_loginsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
