/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AutomatedDiscoveryAccountUpdateErrorCode.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a request that failed to change the status of
   * automated sensitive data discovery for an Amazon Macie account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AutomatedDiscoveryAccountUpdateError">AWS
   * API Reference</a></p>
   */
  class AutomatedDiscoveryAccountUpdateError
  {
  public:
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError() = default;
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that the request applied
     * to.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AutomatedDiscoveryAccountUpdateError& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the error that caused the request to fail for the account
     * (accountId). Possible values are: ACCOUNT_NOT_FOUND, the account doesn’t exist
     * or you're not the Amazon Macie administrator for the account; and,
     * ACCOUNT_PAUSED, Macie isn’t enabled for the account in the current Amazon Web
     * Services Region.</p>
     */
    inline AutomatedDiscoveryAccountUpdateErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(AutomatedDiscoveryAccountUpdateErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline AutomatedDiscoveryAccountUpdateError& WithErrorCode(AutomatedDiscoveryAccountUpdateErrorCode value) { SetErrorCode(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AutomatedDiscoveryAccountUpdateErrorCode m_errorCode{AutomatedDiscoveryAccountUpdateErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
