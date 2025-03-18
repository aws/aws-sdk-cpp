/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyPreviewParametersInput.h>
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
   * <p>Specifies the updated epsilon and noise parameters to preview. The preview
   * allows you to see how the maximum number of each type of aggregation function
   * would change with the new parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PreviewPrivacyImpactParametersInput">AWS
   * API Reference</a></p>
   */
  class PreviewPrivacyImpactParametersInput
  {
  public:
    AWS_CLEANROOMS_API PreviewPrivacyImpactParametersInput() = default;
    AWS_CLEANROOMS_API PreviewPrivacyImpactParametersInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PreviewPrivacyImpactParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that specifies the epsilon and noise parameters.</p>
     */
    inline const DifferentialPrivacyPreviewParametersInput& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyPreviewParametersInput>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyPreviewParametersInput>
    PreviewPrivacyImpactParametersInput& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}
  private:

    DifferentialPrivacyPreviewParametersInput m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
