/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/NoiseLevelType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides the configuration policy for metrics generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/MetricsConfigurationPolicy">AWS
   * API Reference</a></p>
   */
  class MetricsConfigurationPolicy
  {
  public:
    AWS_CLEANROOMSML_API MetricsConfigurationPolicy() = default;
    AWS_CLEANROOMSML_API MetricsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API MetricsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The noise level for the generated metrics.</p>
     */
    inline NoiseLevelType GetNoiseLevel() const { return m_noiseLevel; }
    inline bool NoiseLevelHasBeenSet() const { return m_noiseLevelHasBeenSet; }
    inline void SetNoiseLevel(NoiseLevelType value) { m_noiseLevelHasBeenSet = true; m_noiseLevel = value; }
    inline MetricsConfigurationPolicy& WithNoiseLevel(NoiseLevelType value) { SetNoiseLevel(value); return *this;}
    ///@}
  private:

    NoiseLevelType m_noiseLevel{NoiseLevelType::NOT_SET};
    bool m_noiseLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
