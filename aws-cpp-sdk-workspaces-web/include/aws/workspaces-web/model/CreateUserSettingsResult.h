/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateUserSettingsResult();
    AWS_WORKSPACESWEB_API CreateUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArn = value; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline CreateUserSettingsResult& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline CreateUserSettingsResult& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline CreateUserSettingsResult& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::String m_userSettingsArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
