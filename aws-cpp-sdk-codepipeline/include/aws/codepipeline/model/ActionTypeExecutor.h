/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ExecutorConfiguration.h>
#include <aws/codepipeline/model/ExecutorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The action engine, or executor, for an action type created for a provider,
   * where the action is to be used by customers of the provider. The action engine
   * is associated with the model used to create and update the action, such as the
   * Lambda integration model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeExecutor">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionTypeExecutor
  {
  public:
    ActionTypeExecutor();
    ActionTypeExecutor(Aws::Utils::Json::JsonView jsonValue);
    ActionTypeExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline const ExecutorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline void SetConfiguration(const ExecutorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline void SetConfiguration(ExecutorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline ActionTypeExecutor& WithConfiguration(const ExecutorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline ActionTypeExecutor& WithConfiguration(ExecutorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline const ExecutorType& GetType() const{ return m_type; }

    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline void SetType(const ExecutorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline void SetType(ExecutorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline ActionTypeExecutor& WithType(const ExecutorType& value) { SetType(value); return *this;}

    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline ActionTypeExecutor& WithType(ExecutorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline const Aws::String& GetPolicyStatementsTemplate() const{ return m_policyStatementsTemplate; }

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline bool PolicyStatementsTemplateHasBeenSet() const { return m_policyStatementsTemplateHasBeenSet; }

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline void SetPolicyStatementsTemplate(const Aws::String& value) { m_policyStatementsTemplateHasBeenSet = true; m_policyStatementsTemplate = value; }

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline void SetPolicyStatementsTemplate(Aws::String&& value) { m_policyStatementsTemplateHasBeenSet = true; m_policyStatementsTemplate = std::move(value); }

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline void SetPolicyStatementsTemplate(const char* value) { m_policyStatementsTemplateHasBeenSet = true; m_policyStatementsTemplate.assign(value); }

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline ActionTypeExecutor& WithPolicyStatementsTemplate(const Aws::String& value) { SetPolicyStatementsTemplate(value); return *this;}

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline ActionTypeExecutor& WithPolicyStatementsTemplate(Aws::String&& value) { SetPolicyStatementsTemplate(std::move(value)); return *this;}

    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer’s account that are needed to successfully run an action.</p> <p>To
     * grant permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline ActionTypeExecutor& WithPolicyStatementsTemplate(const char* value) { SetPolicyStatementsTemplate(value); return *this;}


    /**
     * <p>The timeout in seconds for the job. An action execution can have multiple
     * jobs. This is the timeout for a single job, not the entire action execution.</p>
     */
    inline int GetJobTimeout() const{ return m_jobTimeout; }

    /**
     * <p>The timeout in seconds for the job. An action execution can have multiple
     * jobs. This is the timeout for a single job, not the entire action execution.</p>
     */
    inline bool JobTimeoutHasBeenSet() const { return m_jobTimeoutHasBeenSet; }

    /**
     * <p>The timeout in seconds for the job. An action execution can have multiple
     * jobs. This is the timeout for a single job, not the entire action execution.</p>
     */
    inline void SetJobTimeout(int value) { m_jobTimeoutHasBeenSet = true; m_jobTimeout = value; }

    /**
     * <p>The timeout in seconds for the job. An action execution can have multiple
     * jobs. This is the timeout for a single job, not the entire action execution.</p>
     */
    inline ActionTypeExecutor& WithJobTimeout(int value) { SetJobTimeout(value); return *this;}

  private:

    ExecutorConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    ExecutorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_policyStatementsTemplate;
    bool m_policyStatementsTemplateHasBeenSet;

    int m_jobTimeout;
    bool m_jobTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
