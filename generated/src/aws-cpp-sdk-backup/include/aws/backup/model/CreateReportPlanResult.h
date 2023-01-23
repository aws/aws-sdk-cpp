/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{
  class CreateReportPlanResult
  {
  public:
    AWS_BACKUP_API CreateReportPlanResult();
    AWS_BACKUP_API CreateReportPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateReportPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of the report plan.</p>
     */
    inline const Aws::String& GetReportPlanName() const{ return m_reportPlanName; }

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline void SetReportPlanName(const Aws::String& value) { m_reportPlanName = value; }

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline void SetReportPlanName(Aws::String&& value) { m_reportPlanName = std::move(value); }

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline void SetReportPlanName(const char* value) { m_reportPlanName.assign(value); }

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline CreateReportPlanResult& WithReportPlanName(const Aws::String& value) { SetReportPlanName(value); return *this;}

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline CreateReportPlanResult& WithReportPlanName(Aws::String&& value) { SetReportPlanName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the report plan.</p>
     */
    inline CreateReportPlanResult& WithReportPlanName(const char* value) { SetReportPlanName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetReportPlanArn() const{ return m_reportPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(const Aws::String& value) { m_reportPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(Aws::String&& value) { m_reportPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(const char* value) { m_reportPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateReportPlanResult& WithReportPlanArn(const Aws::String& value) { SetReportPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateReportPlanResult& WithReportPlanArn(Aws::String&& value) { SetReportPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateReportPlanResult& WithReportPlanArn(const char* value) { SetReportPlanArn(value); return *this;}


    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CreateReportPlanResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CreateReportPlanResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_reportPlanName;

    Aws::String m_reportPlanArn;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
