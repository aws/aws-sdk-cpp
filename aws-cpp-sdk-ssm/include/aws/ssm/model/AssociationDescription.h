/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationStatus.h>
#include <aws/ssm/model/AssociationOverview.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the parameters for a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationDescription
  {
  public:
    AssociationDescription();
    AssociationDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    AssociationDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline AssociationDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline AssociationDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline AssociationDescription& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline AssociationDescription& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AssociationDescription& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AssociationDescription& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The date when the association was made.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date when the association was made.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date when the association was made.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date when the association was made.</p>
     */
    inline AssociationDescription& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date when the association was made.</p>
     */
    inline AssociationDescription& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}

    /**
     * <p>The date when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateAssociationDate() const{ return m_lastUpdateAssociationDate; }

    /**
     * <p>The date when the association was last updated.</p>
     */
    inline void SetLastUpdateAssociationDate(const Aws::Utils::DateTime& value) { m_lastUpdateAssociationDateHasBeenSet = true; m_lastUpdateAssociationDate = value; }

    /**
     * <p>The date when the association was last updated.</p>
     */
    inline void SetLastUpdateAssociationDate(Aws::Utils::DateTime&& value) { m_lastUpdateAssociationDateHasBeenSet = true; m_lastUpdateAssociationDate = std::move(value); }

    /**
     * <p>The date when the association was last updated.</p>
     */
    inline AssociationDescription& WithLastUpdateAssociationDate(const Aws::Utils::DateTime& value) { SetLastUpdateAssociationDate(value); return *this;}

    /**
     * <p>The date when the association was last updated.</p>
     */
    inline AssociationDescription& WithLastUpdateAssociationDate(Aws::Utils::DateTime&& value) { SetLastUpdateAssociationDate(std::move(value)); return *this;}

    /**
     * <p>The association status.</p>
     */
    inline const AssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The association status.</p>
     */
    inline void SetStatus(const AssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The association status.</p>
     */
    inline void SetStatus(AssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The association status.</p>
     */
    inline AssociationDescription& WithStatus(const AssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The association status.</p>
     */
    inline AssociationDescription& WithStatus(AssociationStatus&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationOverview& GetOverview() const{ return m_overview; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetOverview(const AssociationOverview& value) { m_overviewHasBeenSet = true; m_overview = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetOverview(AssociationOverview&& value) { m_overviewHasBeenSet = true; m_overview = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline AssociationDescription& WithOverview(const AssociationOverview& value) { SetOverview(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline AssociationDescription& WithOverview(AssociationOverview&& value) { SetOverview(std::move(value)); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version.</p>
     */
    inline AssociationDescription& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline AssociationDescription& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline AssociationDescription& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline AssociationDescription& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline AssociationDescription& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationDescription& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationDescription& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline AssociationDescription& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline AssociationDescription& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline AssociationDescription& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The instances targeted by the request. </p>
     */
    inline AssociationDescription& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline AssociationDescription& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline AssociationDescription& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline AssociationDescription& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline AssociationDescription& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline AssociationDescription& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The date on which the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }

    /**
     * <p>The date on which the association was last run.</p>
     */
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = value; }

    /**
     * <p>The date on which the association was last run.</p>
     */
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::move(value); }

    /**
     * <p>The date on which the association was last run.</p>
     */
    inline AssociationDescription& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}

    /**
     * <p>The date on which the association was last run.</p>
     */
    inline AssociationDescription& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}

    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionDate() const{ return m_lastSuccessfulExecutionDate; }

    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline void SetLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = value; }

    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline void SetLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = std::move(value); }

    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline AssociationDescription& WithLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulExecutionDate(value); return *this;}

    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline AssociationDescription& WithLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulExecutionDate(std::move(value)); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet;
    Aws::Utils::DateTime m_lastUpdateAssociationDate;
    bool m_lastUpdateAssociationDateHasBeenSet;
    AssociationStatus m_status;
    bool m_statusHasBeenSet;
    AssociationOverview m_overview;
    bool m_overviewHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet;
    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet;
    Aws::Utils::DateTime m_lastSuccessfulExecutionDate;
    bool m_lastSuccessfulExecutionDateHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
