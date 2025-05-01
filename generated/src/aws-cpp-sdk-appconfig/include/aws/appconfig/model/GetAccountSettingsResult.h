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
  class GetAccountSettingsResult
  {
  public:
    AWS_APPCONFIG_API GetAccountSettingsResult() = default;
    AWS_APPCONFIG_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A parameter to configure deletion protection. Deletion protection prevents a
     * user from deleting a configuration profile or an environment if AppConfig has
     * called either <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or for the configuration profile or from the environment during the specified
     * interval. The default interval for <code>ProtectionPeriodInMinutes</code> is
     * 60.</p>
     */
    inline const DeletionProtectionSettings& GetDeletionProtection() const { return m_deletionProtection; }
    template<typename DeletionProtectionT = DeletionProtectionSettings>
    void SetDeletionProtection(DeletionProtectionT&& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = std::forward<DeletionProtectionT>(value); }
    template<typename DeletionProtectionT = DeletionProtectionSettings>
    GetAccountSettingsResult& WithDeletionProtection(DeletionProtectionT&& value) { SetDeletionProtection(std::forward<DeletionProtectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeletionProtectionSettings m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
