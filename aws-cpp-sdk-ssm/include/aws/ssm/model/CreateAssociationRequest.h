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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateAssociationRequest : public SSMRequest
  {
  public:
    CreateAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssociation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline CreateAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline CreateAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document that contains the configuration information for
     * the instance. You can specify Command or Automation documents.</p> <p>You can
     * specify AWS-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For SSM documents that are shared
     * with you from other AWS accounts, you must specify the complete SSM document
     * ARN, in the following format:</p> <p>
     * <code>arn:<i>partition</i>:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For AWS-predefined documents and SSM documents you created in your account,
     * you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline CreateAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the runtime configuration of the document.</p>
     */
    inline CreateAssociationRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline CreateAssociationRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline CreateAssociationRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline CreateAssociationRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags) for the association.</p>
     */
    inline CreateAssociationRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression when the association will be applied to the target(s).</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


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
    inline CreateAssociationRequest& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request.</p>
     */
    inline CreateAssociationRequest& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline CreateAssociationRequest& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline CreateAssociationRequest& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}

    /**
     * <p>Specify a descriptive name for the association.</p>
     */
    inline CreateAssociationRequest& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}


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
    inline CreateAssociationRequest& WithAutomationTargetParameterName(const Aws::String& value) { SetAutomationTargetParameterName(value); return *this;}

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline CreateAssociationRequest& WithAutomationTargetParameterName(Aws::String&& value) { SetAutomationTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>Specify the target for the association. This target is required for
     * associations that use an Automation document and target resources by using rate
     * controls.</p>
     */
    inline CreateAssociationRequest& WithAutomationTargetParameterName(const char* value) { SetAutomationTargetParameterName(value); return *this;}


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
    inline CreateAssociationRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

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
    inline CreateAssociationRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

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
    inline CreateAssociationRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


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
    inline CreateAssociationRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

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
    inline CreateAssociationRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

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
    inline CreateAssociationRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline const AssociationComplianceSeverity& GetComplianceSeverity() const{ return m_complianceSeverity; }

    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline bool ComplianceSeverityHasBeenSet() const { return m_complianceSeverityHasBeenSet; }

    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline void SetComplianceSeverity(const AssociationComplianceSeverity& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = value; }

    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline void SetComplianceSeverity(AssociationComplianceSeverity&& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = std::move(value); }

    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline CreateAssociationRequest& WithComplianceSeverity(const AssociationComplianceSeverity& value) { SetComplianceSeverity(value); return *this;}

    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline CreateAssociationRequest& WithComplianceSeverity(AssociationComplianceSeverity&& value) { SetComplianceSeverity(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

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

    Aws::String m_automationTargetParameterName;
    bool m_automationTargetParameterNameHasBeenSet;

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
