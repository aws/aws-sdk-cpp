/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyTemplateParametersInput.h>
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
   * <p>The epsilon and noise parameters that you want to use for the privacy budget
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplateParametersInput">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetTemplateParametersInput
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput() = default;
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline const DifferentialPrivacyTemplateParametersInput& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersInput>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersInput>
    PrivacyBudgetTemplateParametersInput& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}
  private:

    DifferentialPrivacyTemplateParametersInput m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
