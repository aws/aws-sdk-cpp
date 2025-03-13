/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/FrequencyOption.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The cadence for Amazon Web Services to update the data export in your S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/RefreshCadence">AWS
   * API Reference</a></p>
   */
  class RefreshCadence
  {
  public:
    AWS_BCMDATAEXPORTS_API RefreshCadence() = default;
    AWS_BCMDATAEXPORTS_API RefreshCadence(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API RefreshCadence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency that data exports are updated. The export refreshes each time
     * the source data updates, up to three times daily.</p>
     */
    inline FrequencyOption GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(FrequencyOption value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline RefreshCadence& WithFrequency(FrequencyOption value) { SetFrequency(value); return *this;}
    ///@}
  private:

    FrequencyOption m_frequency{FrequencyOption::NOT_SET};
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
