/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/IamActionDefinition.h>
#include <aws/budgets/model/ScpActionDefinition.h>
#include <aws/budgets/model/SsmActionDefinition.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>Specifies all of the type-specific parameters. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Definition">AWS
   * API Reference</a></p>
   */
  class Definition
  {
  public:
    AWS_BUDGETS_API Definition() = default;
    AWS_BUDGETS_API Definition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Definition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Identity and Access Management (IAM) action definition details. </p>
     */
    inline const IamActionDefinition& GetIamActionDefinition() const { return m_iamActionDefinition; }
    inline bool IamActionDefinitionHasBeenSet() const { return m_iamActionDefinitionHasBeenSet; }
    template<typename IamActionDefinitionT = IamActionDefinition>
    void SetIamActionDefinition(IamActionDefinitionT&& value) { m_iamActionDefinitionHasBeenSet = true; m_iamActionDefinition = std::forward<IamActionDefinitionT>(value); }
    template<typename IamActionDefinitionT = IamActionDefinition>
    Definition& WithIamActionDefinition(IamActionDefinitionT&& value) { SetIamActionDefinition(std::forward<IamActionDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service control policies (SCPs) action definition details. </p>
     */
    inline const ScpActionDefinition& GetScpActionDefinition() const { return m_scpActionDefinition; }
    inline bool ScpActionDefinitionHasBeenSet() const { return m_scpActionDefinitionHasBeenSet; }
    template<typename ScpActionDefinitionT = ScpActionDefinition>
    void SetScpActionDefinition(ScpActionDefinitionT&& value) { m_scpActionDefinitionHasBeenSet = true; m_scpActionDefinition = std::forward<ScpActionDefinitionT>(value); }
    template<typename ScpActionDefinitionT = ScpActionDefinition>
    Definition& WithScpActionDefinition(ScpActionDefinitionT&& value) { SetScpActionDefinition(std::forward<ScpActionDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Systems Manager (SSM) action definition details. </p>
     */
    inline const SsmActionDefinition& GetSsmActionDefinition() const { return m_ssmActionDefinition; }
    inline bool SsmActionDefinitionHasBeenSet() const { return m_ssmActionDefinitionHasBeenSet; }
    template<typename SsmActionDefinitionT = SsmActionDefinition>
    void SetSsmActionDefinition(SsmActionDefinitionT&& value) { m_ssmActionDefinitionHasBeenSet = true; m_ssmActionDefinition = std::forward<SsmActionDefinitionT>(value); }
    template<typename SsmActionDefinitionT = SsmActionDefinition>
    Definition& WithSsmActionDefinition(SsmActionDefinitionT&& value) { SetSsmActionDefinition(std::forward<SsmActionDefinitionT>(value)); return *this;}
    ///@}
  private:

    IamActionDefinition m_iamActionDefinition;
    bool m_iamActionDefinitionHasBeenSet = false;

    ScpActionDefinition m_scpActionDefinition;
    bool m_scpActionDefinitionHasBeenSet = false;

    SsmActionDefinition m_ssmActionDefinition;
    bool m_ssmActionDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
