/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{
  class AWS_BACKUP_API CreateReportPlanResult
  {
  public:
    CreateReportPlanResult();
    CreateReportPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateReportPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_reportPlanName;

    Aws::String m_reportPlanArn;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
