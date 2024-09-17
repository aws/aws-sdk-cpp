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
    AWS_BUDGETS_API Definition();
    AWS_BUDGETS_API Definition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Definition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Identity and Access Management (IAM) action definition details. </p>
     */
    inline const IamActionDefinition& GetIamActionDefinition() const{ return m_iamActionDefinition; }
    inline bool IamActionDefinitionHasBeenSet() const { return m_iamActionDefinitionHasBeenSet; }
    inline void SetIamActionDefinition(const IamActionDefinition& value) { m_iamActionDefinitionHasBeenSet = true; m_iamActionDefinition = value; }
    inline void SetIamActionDefinition(IamActionDefinition&& value) { m_iamActionDefinitionHasBeenSet = true; m_iamActionDefinition = std::move(value); }
    inline Definition& WithIamActionDefinition(const IamActionDefinition& value) { SetIamActionDefinition(value); return *this;}
    inline Definition& WithIamActionDefinition(IamActionDefinition&& value) { SetIamActionDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service control policies (SCPs) action definition details. </p>
     */
    inline const ScpActionDefinition& GetScpActionDefinition() const{ return m_scpActionDefinition; }
    inline bool ScpActionDefinitionHasBeenSet() const { return m_scpActionDefinitionHasBeenSet; }
    inline void SetScpActionDefinition(const ScpActionDefinition& value) { m_scpActionDefinitionHasBeenSet = true; m_scpActionDefinition = value; }
    inline void SetScpActionDefinition(ScpActionDefinition&& value) { m_scpActionDefinitionHasBeenSet = true; m_scpActionDefinition = std::move(value); }
    inline Definition& WithScpActionDefinition(const ScpActionDefinition& value) { SetScpActionDefinition(value); return *this;}
    inline Definition& WithScpActionDefinition(ScpActionDefinition&& value) { SetScpActionDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Systems Manager (SSM) action definition details. </p>
     */
    inline const SsmActionDefinition& GetSsmActionDefinition() const{ return m_ssmActionDefinition; }
    inline bool SsmActionDefinitionHasBeenSet() const { return m_ssmActionDefinitionHasBeenSet; }
    inline void SetSsmActionDefinition(const SsmActionDefinition& value) { m_ssmActionDefinitionHasBeenSet = true; m_ssmActionDefinition = value; }
    inline void SetSsmActionDefinition(SsmActionDefinition&& value) { m_ssmActionDefinitionHasBeenSet = true; m_ssmActionDefinition = std::move(value); }
    inline Definition& WithSsmActionDefinition(const SsmActionDefinition& value) { SetSsmActionDefinition(value); return *this;}
    inline Definition& WithSsmActionDefinition(SsmActionDefinition&& value) { SetSsmActionDefinition(std::move(value)); return *this;}
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
