/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyTemplateParametersOutput.h>
#include <aws/cleanrooms/model/AccessBudgetsPrivacyTemplateParametersOutput.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The epsilon and noise parameters that were used in the privacy budget
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplateParametersOutput">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetTemplateParametersOutput
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput() = default;
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline const DifferentialPrivacyTemplateParametersOutput& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersOutput>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersOutput>
    PrivacyBudgetTemplateParametersOutput& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access budget configuration returned from the privacy budget template,
     * containing the configured access budget settings.</p>
     */
    inline const AccessBudgetsPrivacyTemplateParametersOutput& GetAccessBudget() const { return m_accessBudget; }
    inline bool AccessBudgetHasBeenSet() const { return m_accessBudgetHasBeenSet; }
    template<typename AccessBudgetT = AccessBudgetsPrivacyTemplateParametersOutput>
    void SetAccessBudget(AccessBudgetT&& value) { m_accessBudgetHasBeenSet = true; m_accessBudget = std::forward<AccessBudgetT>(value); }
    template<typename AccessBudgetT = AccessBudgetsPrivacyTemplateParametersOutput>
    PrivacyBudgetTemplateParametersOutput& WithAccessBudget(AccessBudgetT&& value) { SetAccessBudget(std::forward<AccessBudgetT>(value)); return *this;}
    ///@}
  private:

    DifferentialPrivacyTemplateParametersOutput m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;

    AccessBudgetsPrivacyTemplateParametersOutput m_accessBudget;
    bool m_accessBudgetHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
