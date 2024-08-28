/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeletionProtectionSettings.h>
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
namespace AppConfig
{
namespace Model
{
  class UpdateAccountSettingsResult
  {
  public:
    AWS_APPCONFIG_API UpdateAccountSettingsResult();
    AWS_APPCONFIG_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A parameter to configure deletion protection. If enabled, deletion protection
     * prevents a user from deleting a configuration profile or an environment if
     * AppConfig has called either <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or for the configuration profile or from the environment during the specified
     * interval. Deletion protection is disabled by default. The default interval for
     * <code>ProtectionPeriodInMinutes</code> is 60.</p>
     */
    inline const DeletionProtectionSettings& GetDeletionProtection() const{ return m_deletionProtection; }
    inline void SetDeletionProtection(const DeletionProtectionSettings& value) { m_deletionProtection = value; }
    inline void SetDeletionProtection(DeletionProtectionSettings&& value) { m_deletionProtection = std::move(value); }
    inline UpdateAccountSettingsResult& WithDeletionProtection(const DeletionProtectionSettings& value) { SetDeletionProtection(value); return *this;}
    inline UpdateAccountSettingsResult& WithDeletionProtection(DeletionProtectionSettings&& value) { SetDeletionProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeletionProtectionSettings m_deletionProtection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
