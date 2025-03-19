/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/DifferentialPrivacySensitivityParameters.h>
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
   * <p>An array that contains the sensitivity parameters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyParameters">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyParameters
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyParameters() = default;
    AWS_CLEANROOMS_API DifferentialPrivacyParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the sensitivity parameters that you can use to better understand the
     * total amount of noise in query results.</p>
     */
    inline const Aws::Vector<DifferentialPrivacySensitivityParameters>& GetSensitivityParameters() const { return m_sensitivityParameters; }
    inline bool SensitivityParametersHasBeenSet() const { return m_sensitivityParametersHasBeenSet; }
    template<typename SensitivityParametersT = Aws::Vector<DifferentialPrivacySensitivityParameters>>
    void SetSensitivityParameters(SensitivityParametersT&& value) { m_sensitivityParametersHasBeenSet = true; m_sensitivityParameters = std::forward<SensitivityParametersT>(value); }
    template<typename SensitivityParametersT = Aws::Vector<DifferentialPrivacySensitivityParameters>>
    DifferentialPrivacyParameters& WithSensitivityParameters(SensitivityParametersT&& value) { SetSensitivityParameters(std::forward<SensitivityParametersT>(value)); return *this;}
    template<typename SensitivityParametersT = DifferentialPrivacySensitivityParameters>
    DifferentialPrivacyParameters& AddSensitivityParameters(SensitivityParametersT&& value) { m_sensitivityParametersHasBeenSet = true; m_sensitivityParameters.emplace_back(std::forward<SensitivityParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DifferentialPrivacySensitivityParameters> m_sensitivityParameters;
    bool m_sensitivityParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
