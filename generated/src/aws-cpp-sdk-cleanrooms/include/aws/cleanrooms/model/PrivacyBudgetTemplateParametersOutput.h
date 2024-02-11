/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyTemplateParametersOutput.h>
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
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput();
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline const DifferentialPrivacyTemplateParametersOutput& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyTemplateParametersOutput& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyTemplateParametersOutput&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline PrivacyBudgetTemplateParametersOutput& WithDifferentialPrivacy(const DifferentialPrivacyTemplateParametersOutput& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>The epsilon and noise parameters.</p>
     */
    inline PrivacyBudgetTemplateParametersOutput& WithDifferentialPrivacy(DifferentialPrivacyTemplateParametersOutput&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    DifferentialPrivacyTemplateParametersOutput m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
