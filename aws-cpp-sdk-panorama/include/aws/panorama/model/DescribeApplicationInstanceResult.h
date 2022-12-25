/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/ApplicationInstanceHealthStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/ApplicationInstanceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/ReportedRuntimeContextState.h>
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
namespace Panorama
{
namespace Model
{
  class DescribeApplicationInstanceResult
  {
  public:
    AWS_PANORAMA_API DescribeApplicationInstanceResult();
    AWS_PANORAMA_API DescribeApplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeApplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceId = value; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceId = std::move(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceId.assign(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}


    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const{ return m_applicationInstanceIdToReplace; }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const Aws::String& value) { m_applicationInstanceIdToReplace = value; }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(Aws::String&& value) { m_applicationInstanceIdToReplace = std::move(value); }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const char* value) { m_applicationInstanceIdToReplace.assign(value); }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceIdToReplace(const Aws::String& value) { SetApplicationInstanceIdToReplace(value); return *this;}

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceIdToReplace(Aws::String&& value) { SetApplicationInstanceIdToReplace(std::move(value)); return *this;}

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceResult& WithApplicationInstanceIdToReplace(const char* value) { SetApplicationInstanceIdToReplace(value); return *this;}


    /**
     * <p>The application instance's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The application instance's ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The application instance's ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the application instance was created.</p>
     */
    inline DescribeApplicationInstanceResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the application instance was created.</p>
     */
    inline DescribeApplicationInstanceResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const{ return m_defaultRuntimeContextDevice; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const Aws::String& value) { m_defaultRuntimeContextDevice = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(Aws::String&& value) { m_defaultRuntimeContextDevice = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const char* value) { m_defaultRuntimeContextDevice.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDevice(const Aws::String& value) { SetDefaultRuntimeContextDevice(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDevice(Aws::String&& value) { SetDefaultRuntimeContextDevice(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDevice(const char* value) { SetDefaultRuntimeContextDevice(value); return *this;}


    /**
     * <p>The device's bane.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDeviceName() const{ return m_defaultRuntimeContextDeviceName; }

    /**
     * <p>The device's bane.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(const Aws::String& value) { m_defaultRuntimeContextDeviceName = value; }

    /**
     * <p>The device's bane.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(Aws::String&& value) { m_defaultRuntimeContextDeviceName = std::move(value); }

    /**
     * <p>The device's bane.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(const char* value) { m_defaultRuntimeContextDeviceName.assign(value); }

    /**
     * <p>The device's bane.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDeviceName(const Aws::String& value) { SetDefaultRuntimeContextDeviceName(value); return *this;}

    /**
     * <p>The device's bane.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDeviceName(Aws::String&& value) { SetDefaultRuntimeContextDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device's bane.</p>
     */
    inline DescribeApplicationInstanceResult& WithDefaultRuntimeContextDeviceName(const char* value) { SetDefaultRuntimeContextDeviceName(value); return *this;}


    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The application instance's health status.</p>
     */
    inline const ApplicationInstanceHealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The application instance's health status.</p>
     */
    inline void SetHealthStatus(const ApplicationInstanceHealthStatus& value) { m_healthStatus = value; }

    /**
     * <p>The application instance's health status.</p>
     */
    inline void SetHealthStatus(ApplicationInstanceHealthStatus&& value) { m_healthStatus = std::move(value); }

    /**
     * <p>The application instance's health status.</p>
     */
    inline DescribeApplicationInstanceResult& WithHealthStatus(const ApplicationInstanceHealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The application instance's health status.</p>
     */
    inline DescribeApplicationInstanceResult& WithHealthStatus(ApplicationInstanceHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>The application instance was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The application instance was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The application instance was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The application instance was updated.</p>
     */
    inline DescribeApplicationInstanceResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The application instance was updated.</p>
     */
    inline DescribeApplicationInstanceResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The application instance's state.</p>
     */
    inline const Aws::Vector<ReportedRuntimeContextState>& GetRuntimeContextStates() const{ return m_runtimeContextStates; }

    /**
     * <p>The application instance's state.</p>
     */
    inline void SetRuntimeContextStates(const Aws::Vector<ReportedRuntimeContextState>& value) { m_runtimeContextStates = value; }

    /**
     * <p>The application instance's state.</p>
     */
    inline void SetRuntimeContextStates(Aws::Vector<ReportedRuntimeContextState>&& value) { m_runtimeContextStates = std::move(value); }

    /**
     * <p>The application instance's state.</p>
     */
    inline DescribeApplicationInstanceResult& WithRuntimeContextStates(const Aws::Vector<ReportedRuntimeContextState>& value) { SetRuntimeContextStates(value); return *this;}

    /**
     * <p>The application instance's state.</p>
     */
    inline DescribeApplicationInstanceResult& WithRuntimeContextStates(Aws::Vector<ReportedRuntimeContextState>&& value) { SetRuntimeContextStates(std::move(value)); return *this;}

    /**
     * <p>The application instance's state.</p>
     */
    inline DescribeApplicationInstanceResult& AddRuntimeContextStates(const ReportedRuntimeContextState& value) { m_runtimeContextStates.push_back(value); return *this; }

    /**
     * <p>The application instance's state.</p>
     */
    inline DescribeApplicationInstanceResult& AddRuntimeContextStates(ReportedRuntimeContextState&& value) { m_runtimeContextStates.push_back(std::move(value)); return *this; }


    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const{ return m_runtimeRoleArn; }

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline void SetRuntimeRoleArn(const Aws::String& value) { m_runtimeRoleArn = value; }

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline void SetRuntimeRoleArn(Aws::String&& value) { m_runtimeRoleArn = std::move(value); }

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline void SetRuntimeRoleArn(const char* value) { m_runtimeRoleArn.assign(value); }

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}

    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline DescribeApplicationInstanceResult& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}


    /**
     * <p>The application instance's status.</p>
     */
    inline const ApplicationInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The application instance's status.</p>
     */
    inline void SetStatus(const ApplicationInstanceStatus& value) { m_status = value; }

    /**
     * <p>The application instance's status.</p>
     */
    inline void SetStatus(ApplicationInstanceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The application instance's status.</p>
     */
    inline DescribeApplicationInstanceResult& WithStatus(const ApplicationInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The application instance's status.</p>
     */
    inline DescribeApplicationInstanceResult& WithStatus(ApplicationInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The application instance's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const{ return m_statusDescription; }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(const Aws::String& value) { m_statusDescription = value; }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(Aws::String&& value) { m_statusDescription = std::move(value); }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(const char* value) { m_statusDescription.assign(value); }

    /**
     * <p>The application instance's status description.</p>
     */
    inline DescribeApplicationInstanceResult& WithStatusDescription(const Aws::String& value) { SetStatusDescription(value); return *this;}

    /**
     * <p>The application instance's status description.</p>
     */
    inline DescribeApplicationInstanceResult& WithStatusDescription(Aws::String&& value) { SetStatusDescription(std::move(value)); return *this;}

    /**
     * <p>The application instance's status description.</p>
     */
    inline DescribeApplicationInstanceResult& WithStatusDescription(const char* value) { SetStatusDescription(value); return *this;}


    /**
     * <p>The application instance's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline DescribeApplicationInstanceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationInstanceId;

    Aws::String m_applicationInstanceIdToReplace;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_defaultRuntimeContextDevice;

    Aws::String m_defaultRuntimeContextDeviceName;

    Aws::String m_description;

    ApplicationInstanceHealthStatus m_healthStatus;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::Vector<ReportedRuntimeContextState> m_runtimeContextStates;

    Aws::String m_runtimeRoleArn;

    ApplicationInstanceStatus m_status;

    Aws::String m_statusDescription;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
