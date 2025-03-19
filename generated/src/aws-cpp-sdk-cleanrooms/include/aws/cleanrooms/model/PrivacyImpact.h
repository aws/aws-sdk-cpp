/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyPrivacyImpact.h>
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
   * <p>Provides an estimate of the number of aggregation functions that the member
   * who can query can run given the epsilon and noise parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyImpact">AWS
   * API Reference</a></p>
   */
  class PrivacyImpact
  {
  public:
    AWS_CLEANROOMS_API PrivacyImpact() = default;
    AWS_CLEANROOMS_API PrivacyImpact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that lists the number and type of aggregation functions you can
     * perform.</p>
     */
    inline const DifferentialPrivacyPrivacyImpact& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyPrivacyImpact>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyPrivacyImpact>
    PrivacyImpact& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}
  private:

    DifferentialPrivacyPrivacyImpact m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
