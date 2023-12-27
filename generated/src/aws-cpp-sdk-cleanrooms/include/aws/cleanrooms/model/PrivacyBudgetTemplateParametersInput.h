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
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput();
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline const DifferentialPrivacyTemplateParametersInput& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyTemplateParametersInput& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyTemplateParametersInput&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline PrivacyBudgetTemplateParametersInput& WithDifferentialPrivacy(const DifferentialPrivacyTemplateParametersInput& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>An object that specifies the epsilon and noise parameters.</p>
     */
    inline PrivacyBudgetTemplateParametersInput& WithDifferentialPrivacy(DifferentialPrivacyTemplateParametersInput&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    DifferentialPrivacyTemplateParametersInput m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
