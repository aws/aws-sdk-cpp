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
  class CreateNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateNetworkSettingsResult();
    AWS_WORKSPACESWEB_API CreateNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the network settings.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArn = value; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArn.assign(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline CreateNetworkSettingsResult& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline CreateNetworkSettingsResult& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline CreateNetworkSettingsResult& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}

  private:

    Aws::String m_networkSettingsArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
