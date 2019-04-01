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
#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
    AssociationDescription(Aws::Utils::Json::JsonView jsonValue);
    AssociationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline AssociationDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline AssociationDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline AssociationDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

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
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }

    /**
     * <p>The association version.</p>
     */
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }

    /**
     * <p>The association version.</p>
     */
    inline AssociationDescription& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationDescription& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationDescription& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}


    /**
     * <p>The date when the association was made.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date when the association was made.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

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
    inline bool LastUpdateAssociationDateHasBeenSet() const { return m_lastUpdateAssociationDateHasBeenSet; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }

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
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

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
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline const Aws::String& GetAutomationTargetParameterName() const{ return m_automationTargetParameterName; }

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline bool AutomationTargetParameterNameHasBeenSet() const { return m_automationTargetParameterNameHasBeenSet; }

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline void SetAutomationTargetParameterName(const Aws::String& value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName = value; }

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline void SetAutomationTargetParameterName(Aws::String&& value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName = std::move(value); }

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline void SetAutomationTargetParameterName(const char* value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName.assign(value); }

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline AssociationDescription& WithAutomationTargetParameterName(const Aws::String& value) { SetAutomationTargetParameterName(value); return *this;}

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline AssociationDescription& WithAutomationTargetParameterName(Aws::String&& value) { SetAutomationTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline AssociationDescription& WithAutomationTargetParameterName(const char* value) { SetAutomationTargetParameterName(value); return *this;}


    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

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
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

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
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

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
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

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
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

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
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }

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
    inline bool LastSuccessfulExecutionDateHasBeenSet() const { return m_lastSuccessfulExecutionDateHasBeenSet; }

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


    /**
     * <p>The association name.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }

    /**
     * <p>The association name.</p>
     */
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }

    /**
     * <p>The association name.</p>
     */
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }

    /**
     * <p>The association name.</p>
     */
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }

    /**
     * <p>The association name.</p>
     */
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }

    /**
     * <p>The association name.</p>
     */
    inline AssociationDescription& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}

    /**
     * <p>The association name.</p>
     */
    inline AssociationDescription& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}

    /**
     * <p>The association name.</p>
     */
    inline AssociationDescription& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}


    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline AssociationDescription& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline AssociationDescription& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 instances and set MaxError to 10%, then the system stops
     * sending the request when the sixth error is received.</p> <p>Executions that are
     * already running an association when MaxErrors is reached are allowed to
     * complete, but some of these executions may fail as well. If you need to ensure
     * that there won't be more than max-errors failed executions, set MaxConcurrency
     * to 1 so that executions proceed one at a time.</p>
     */
    inline AssociationDescription& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline AssociationDescription& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline AssociationDescription& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new instance starts and attempts to
     * run an association while Systems Manager is running MaxConcurrency associations,
     * the association is allowed to run. During the next association interval, the new
     * instance will process its association within the limit specified for
     * MaxConcurrency.</p>
     */
    inline AssociationDescription& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline const AssociationComplianceSeverity& GetComplianceSeverity() const{ return m_complianceSeverity; }

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline bool ComplianceSeverityHasBeenSet() const { return m_complianceSeverityHasBeenSet; }

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline void SetComplianceSeverity(const AssociationComplianceSeverity& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = value; }

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline void SetComplianceSeverity(AssociationComplianceSeverity&& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = std::move(value); }

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline AssociationDescription& WithComplianceSeverity(const AssociationComplianceSeverity& value) { SetComplianceSeverity(value); return *this;}

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline AssociationDescription& WithComplianceSeverity(AssociationComplianceSeverity&& value) { SetComplianceSeverity(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;

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

    Aws::String m_automationTargetParameterName;
    bool m_automationTargetParameterNameHasBeenSet;

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

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;

    AssociationComplianceSeverity m_complianceSeverity;
    bool m_complianceSeverityHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
