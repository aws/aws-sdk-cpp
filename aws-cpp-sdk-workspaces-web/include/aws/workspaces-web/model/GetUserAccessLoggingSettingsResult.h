/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/UserAccessLoggingSettings.h>
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
  class GetUserAccessLoggingSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetUserAccessLoggingSettingsResult();
    AWS_WORKSPACESWEB_API GetUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user access logging settings.</p>
     */
    inline const UserAccessLoggingSettings& GetUserAccessLoggingSettings() const{ return m_userAccessLoggingSettings; }

    /**
     * <p>The user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettings(const UserAccessLoggingSettings& value) { m_userAccessLoggingSettings = value; }

    /**
     * <p>The user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettings(UserAccessLoggingSettings&& value) { m_userAccessLoggingSettings = std::move(value); }

    /**
     * <p>The user access logging settings.</p>
     */
    inline GetUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(const UserAccessLoggingSettings& value) { SetUserAccessLoggingSettings(value); return *this;}

    /**
     * <p>The user access logging settings.</p>
     */
    inline GetUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(UserAccessLoggingSettings&& value) { SetUserAccessLoggingSettings(std::move(value)); return *this;}

  private:

    UserAccessLoggingSettings m_userAccessLoggingSettings;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
