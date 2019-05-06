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
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API StartAutomationExecutionRequest : public SSMRequest
  {
  public:
    StartAutomationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAutomationExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartAutomationExecutionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartAutomationExecutionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartAutomationExecutionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline const ExecutionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline void SetMode(const ExecutionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline void SetMode(ExecutionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline StartAutomationExecutionRequest& WithMode(const ExecutionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline StartAutomationExecutionRequest& WithMode(ExecutionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline StartAutomationExecutionRequest& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline StartAutomationExecutionRequest& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline StartAutomationExecutionRequest& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}


    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline StartAutomationExecutionRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline StartAutomationExecutionRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline StartAutomationExecutionRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p>
     */
    inline StartAutomationExecutionRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline StartAutomationExecutionRequest& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline StartAutomationExecutionRequest& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline StartAutomationExecutionRequest& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }

    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps cannot be specified together.</p>
     */
    inline StartAutomationExecutionRequest& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * 10.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p>
     */
    inline StartAutomationExecutionRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline StartAutomationExecutionRequest& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline StartAutomationExecutionRequest& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline StartAutomationExecutionRequest& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }

    /**
     * <p>A location is a combination of AWS Regions and/or AWS accounts where you want
     * to run the Automation. Use this action to start an Automation in multiple
     * Regions and multiple accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline StartAutomationExecutionRequest& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    ExecutionMode m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
