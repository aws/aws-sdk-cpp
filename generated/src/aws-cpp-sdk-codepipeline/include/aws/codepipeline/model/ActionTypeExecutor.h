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
  class ActionTypeExecutor
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeExecutor() = default;
    AWS_CODEPIPELINE_API ActionTypeExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action configuration properties for the action type. These properties are
     * specified in the action definition when the action type is created.</p>
     */
    inline const ExecutorConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ExecutorConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ExecutorConfiguration>
    ActionTypeExecutor& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration model used to create and update the action type,
     * <code>Lambda</code> or <code>JobWorker</code>. </p>
     */
    inline ExecutorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ExecutorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActionTypeExecutor& WithType(ExecutorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy statement that specifies the permissions in the CodePipeline
     * customer account that are needed to successfully run an action.</p> <p>To grant
     * permission to another account, specify the account ID as the Principal, a
     * domain-style identifier defined by the service, for example
     * <code>codepipeline.amazonaws.com</code>.</p>  <p>The size of the passed
     * JSON policy document cannot exceed 2048 characters.</p> 
     */
    inline const Aws::String& GetPolicyStatementsTemplate() const { return m_policyStatementsTemplate; }
    inline bool PolicyStatementsTemplateHasBeenSet() const { return m_policyStatementsTemplateHasBeenSet; }
    template<typename PolicyStatementsTemplateT = Aws::String>
    void SetPolicyStatementsTemplate(PolicyStatementsTemplateT&& value) { m_policyStatementsTemplateHasBeenSet = true; m_policyStatementsTemplate = std::forward<PolicyStatementsTemplateT>(value); }
    template<typename PolicyStatementsTemplateT = Aws::String>
    ActionTypeExecutor& WithPolicyStatementsTemplate(PolicyStatementsTemplateT&& value) { SetPolicyStatementsTemplate(std::forward<PolicyStatementsTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout in seconds for the job. An action execution can have multiple
     * jobs. This is the timeout for a single job, not the entire action execution.</p>
     */
    inline int GetJobTimeout() const { return m_jobTimeout; }
    inline bool JobTimeoutHasBeenSet() const { return m_jobTimeoutHasBeenSet; }
    inline void SetJobTimeout(int value) { m_jobTimeoutHasBeenSet = true; m_jobTimeout = value; }
    inline ActionTypeExecutor& WithJobTimeout(int value) { SetJobTimeout(value); return *this;}
    ///@}
  private:

    ExecutorConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ExecutorType m_type{ExecutorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_policyStatementsTemplate;
    bool m_policyStatementsTemplateHasBeenSet = false;

    int m_jobTimeout{0};
    bool m_jobTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
