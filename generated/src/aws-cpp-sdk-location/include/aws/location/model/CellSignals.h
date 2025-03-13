/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/LteCellDetails.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>The cellular network communication infrastructure that the device
   * uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CellSignals">AWS
   * API Reference</a></p>
   */
  class CellSignals
  {
  public:
    AWS_LOCATIONSERVICE_API CellSignals() = default;
    AWS_LOCATIONSERVICE_API CellSignals(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CellSignals& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the Long-Term Evolution (LTE) network the device is
     * connected to.</p>
     */
    inline const Aws::Vector<LteCellDetails>& GetLteCellDetails() const { return m_lteCellDetails; }
    inline bool LteCellDetailsHasBeenSet() const { return m_lteCellDetailsHasBeenSet; }
    template<typename LteCellDetailsT = Aws::Vector<LteCellDetails>>
    void SetLteCellDetails(LteCellDetailsT&& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails = std::forward<LteCellDetailsT>(value); }
    template<typename LteCellDetailsT = Aws::Vector<LteCellDetails>>
    CellSignals& WithLteCellDetails(LteCellDetailsT&& value) { SetLteCellDetails(std::forward<LteCellDetailsT>(value)); return *this;}
    template<typename LteCellDetailsT = LteCellDetails>
    CellSignals& AddLteCellDetails(LteCellDetailsT&& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails.emplace_back(std::forward<LteCellDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LteCellDetails> m_lteCellDetails;
    bool m_lteCellDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
