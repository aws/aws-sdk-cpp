﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/AccountSettings.h>
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
namespace Proton
{
namespace Model
{
  class AWS_PROTON_API UpdateAccountSettingsResult
  {
  public:
    UpdateAccountSettingsResult();
    UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Proton pipeline service role repository detail data that's returned by
     * Proton.</p>
     */
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    /**
     * <p>The Proton pipeline service role repository detail data that's returned by
     * Proton.</p>
     */
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    /**
     * <p>The Proton pipeline service role repository detail data that's returned by
     * Proton.</p>
     */
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    /**
     * <p>The Proton pipeline service role repository detail data that's returned by
     * Proton.</p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    /**
     * <p>The Proton pipeline service role repository detail data that's returned by
     * Proton.</p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}

  private:

    AccountSettings m_accountSettings;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
