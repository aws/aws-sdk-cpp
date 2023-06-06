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
    AWS_IOT_API GetPackageConfigurationResult();
    AWS_IOT_API GetPackageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPackageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline const VersionUpdateByJobsConfig& GetVersionUpdateByJobsConfig() const{ return m_versionUpdateByJobsConfig; }

    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline void SetVersionUpdateByJobsConfig(const VersionUpdateByJobsConfig& value) { m_versionUpdateByJobsConfig = value; }

    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline void SetVersionUpdateByJobsConfig(VersionUpdateByJobsConfig&& value) { m_versionUpdateByJobsConfig = std::move(value); }

    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline GetPackageConfigurationResult& WithVersionUpdateByJobsConfig(const VersionUpdateByJobsConfig& value) { SetVersionUpdateByJobsConfig(value); return *this;}

    /**
     * <p>The version that is associated to a specific job.</p>
     */
    inline GetPackageConfigurationResult& WithVersionUpdateByJobsConfig(VersionUpdateByJobsConfig&& value) { SetVersionUpdateByJobsConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPackageConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPackageConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPackageConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VersionUpdateByJobsConfig m_versionUpdateByJobsConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
