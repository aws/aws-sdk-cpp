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
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError();
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that the request applied
     * to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AutomatedDiscoveryAccountUpdateError& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AutomatedDiscoveryAccountUpdateError& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AutomatedDiscoveryAccountUpdateError& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the error that caused the request to fail for the account
     * (accountId). Possible values are: ACCOUNT_NOT_FOUND, the account doesn’t exist
     * or you're not the Amazon Macie administrator for the account; and,
     * ACCOUNT_PAUSED, Macie isn’t enabled for the account in the current Amazon Web
     * Services Region.</p>
     */
    inline const AutomatedDiscoveryAccountUpdateErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const AutomatedDiscoveryAccountUpdateErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(AutomatedDiscoveryAccountUpdateErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline AutomatedDiscoveryAccountUpdateError& WithErrorCode(const AutomatedDiscoveryAccountUpdateErrorCode& value) { SetErrorCode(value); return *this;}
    inline AutomatedDiscoveryAccountUpdateError& WithErrorCode(AutomatedDiscoveryAccountUpdateErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AutomatedDiscoveryAccountUpdateErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
