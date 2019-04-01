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
   * <p>Information about the association version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationVersionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationVersionInfo
  {
  public:
    AssociationVersionInfo();
    AssociationVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AssociationVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID created by the system when the association was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


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
    inline AssociationVersionInfo& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationVersionInfo& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationVersionInfo& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}


    /**
     * <p>The date the association version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the association version was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date the association version was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date the association version was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date the association version was created.</p>
     */
    inline AssociationVersionInfo& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the association version was created.</p>
     */
    inline AssociationVersionInfo& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The name specified when the association was created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline AssociationVersionInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline AssociationVersionInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name specified when the association was created.</p>
     */
    inline AssociationVersionInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of a Systems Manager document used when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters specified when the association version was created.</p>
     */
    inline AssociationVersionInfo& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline AssociationVersionInfo& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline AssociationVersionInfo& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline AssociationVersionInfo& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets specified for the association when the association version was
     * created. </p>
     */
    inline AssociationVersionInfo& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline AssociationVersionInfo& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline AssociationVersionInfo& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The cron or rate schedule specified for the association when the association
     * version was created.</p>
     */
    inline AssociationVersionInfo& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline AssociationVersionInfo& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The location in Amazon S3 specified for the association when the association
     * version was created.</p>
     */
    inline AssociationVersionInfo& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the association version when the association version
     * was created.</p>
     */
    inline AssociationVersionInfo& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}


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
    inline AssociationVersionInfo& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

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
    inline AssociationVersionInfo& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

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
    inline AssociationVersionInfo& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


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
    inline AssociationVersionInfo& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

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
    inline AssociationVersionInfo& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

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
    inline AssociationVersionInfo& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


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
    inline AssociationVersionInfo& WithComplianceSeverity(const AssociationComplianceSeverity& value) { SetComplianceSeverity(value); return *this;}

    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline AssociationVersionInfo& WithComplianceSeverity(AssociationComplianceSeverity&& value) { SetComplianceSeverity(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;

    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet;

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
