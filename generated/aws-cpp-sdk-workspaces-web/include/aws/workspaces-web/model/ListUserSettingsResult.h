﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/UserSettingsSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class AWS_WORKSPACESWEB_API ListUserSettingsResult
  {
  public:
    ListUserSettingsResult();
    ListUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListUserSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListUserSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListUserSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The user settings.</p>
     */
    inline const Aws::Vector<UserSettingsSummary>& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(const Aws::Vector<UserSettingsSummary>& value) { m_userSettings = value; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(Aws::Vector<UserSettingsSummary>&& value) { m_userSettings = std::move(value); }

    /**
     * <p>The user settings.</p>
     */
    inline ListUserSettingsResult& WithUserSettings(const Aws::Vector<UserSettingsSummary>& value) { SetUserSettings(value); return *this;}

    /**
     * <p>The user settings.</p>
     */
    inline ListUserSettingsResult& WithUserSettings(Aws::Vector<UserSettingsSummary>&& value) { SetUserSettings(std::move(value)); return *this;}

    /**
     * <p>The user settings.</p>
     */
    inline ListUserSettingsResult& AddUserSettings(const UserSettingsSummary& value) { m_userSettings.push_back(value); return *this; }

    /**
     * <p>The user settings.</p>
     */
    inline ListUserSettingsResult& AddUserSettings(UserSettingsSummary&& value) { m_userSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<UserSettingsSummary> m_userSettings;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
