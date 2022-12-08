/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineType.h>
#include <aws/states/model/LoggingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/states/model/TracingConfiguration.h>
#include <aws/states/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class CreateStateMachineRequest : public SFNRequest
  {
  public:
    AWS_SFN_API CreateStateMachineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStateMachine"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline CreateStateMachineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline CreateStateMachineRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline CreateStateMachineRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline const StateMachineType& GetType() const{ return m_type; }

    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline void SetType(const StateMachineType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline void SetType(StateMachineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline CreateStateMachineRequest& WithType(const StateMachineType& value) { SetType(value); return *this;}

    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline CreateStateMachineRequest& WithType(StateMachineType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline CreateStateMachineRequest& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline CreateStateMachineRequest& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline CreateStateMachineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline CreateStateMachineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline CreateStateMachineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline CreateStateMachineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const{ return m_tracingConfiguration; }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline bool TracingConfigurationHasBeenSet() const { return m_tracingConfigurationHasBeenSet; }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline void SetTracingConfiguration(const TracingConfiguration& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = value; }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline void SetTracingConfiguration(TracingConfiguration&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::move(value); }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline CreateStateMachineRequest& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline CreateStateMachineRequest& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StateMachineType m_type;
    bool m_typeHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TracingConfiguration m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
