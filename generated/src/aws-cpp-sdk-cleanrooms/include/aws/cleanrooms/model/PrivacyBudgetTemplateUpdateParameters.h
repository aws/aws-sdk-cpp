/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyTemplateUpdateParameters.h>
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
   * <p>The epsilon and noise parameters that you want to update in the privacy
   * budget template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplateUpdateParameters">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetTemplateUpdateParameters
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetTemplateUpdateParameters();
    AWS_CLEANROOMS_API PrivacyBudgetTemplateUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline const DifferentialPrivacyTemplateUpdateParameters& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyTemplateUpdateParameters& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyTemplateUpdateParameters&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline PrivacyBudgetTemplateUpdateParameters& WithDifferentialPrivacy(const DifferentialPrivacyTemplateUpdateParameters& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>An object that specifies the new values for the epsilon and noise
     * parameters.</p>
     */
    inline PrivacyBudgetTemplateUpdateParameters& WithDifferentialPrivacy(DifferentialPrivacyTemplateUpdateParameters&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    DifferentialPrivacyTemplateUpdateParameters m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
