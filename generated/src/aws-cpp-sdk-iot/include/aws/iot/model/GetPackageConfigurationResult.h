/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/VersionUpdateByJobsConfig.h>
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
namespace IoT
{
namespace Model
{
  class GetPackageConfigurationResult
  {
  public:
    AWS_IOT_API GetPackageConfigurationResult() = default;
    AWS_IOT_API GetPackageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPackageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline const VersionUpdateByJobsConfig& GetVersionUpdateByJobsConfig() const { return m_versionUpdateByJobsConfig; }
    template<typename VersionUpdateByJobsConfigT = VersionUpdateByJobsConfig>
    void SetVersionUpdateByJobsConfig(VersionUpdateByJobsConfigT&& value) { m_versionUpdateByJobsConfigHasBeenSet = true; m_versionUpdateByJobsConfig = std::forward<VersionUpdateByJobsConfigT>(value); }
    template<typename VersionUpdateByJobsConfigT = VersionUpdateByJobsConfig>
    GetPackageConfigurationResult& WithVersionUpdateByJobsConfig(VersionUpdateByJobsConfigT&& value) { SetVersionUpdateByJobsConfig(std::forward<VersionUpdateByJobsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPackageConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VersionUpdateByJobsConfig m_versionUpdateByJobsConfig;
    bool m_versionUpdateByJobsConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
