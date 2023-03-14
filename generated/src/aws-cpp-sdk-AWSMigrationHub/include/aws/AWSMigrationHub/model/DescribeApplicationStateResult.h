/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/ApplicationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace MigrationHub
{
namespace Model
{
  class DescribeApplicationStateResult
  {
  public:
    AWS_MIGRATIONHUB_API DescribeApplicationStateResult();
    AWS_MIGRATIONHUB_API DescribeApplicationStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API DescribeApplicationStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatus = value; }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatus = std::move(value); }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline DescribeApplicationStateResult& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline DescribeApplicationStateResult& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the application status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp when the application status was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp when the application status was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp when the application status was last updated.</p>
     */
    inline DescribeApplicationStateResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp when the application status was last updated.</p>
     */
    inline DescribeApplicationStateResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApplicationStatus m_applicationStatus;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
