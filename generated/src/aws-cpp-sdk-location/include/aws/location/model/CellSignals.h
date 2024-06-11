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
    AWS_LOCATIONSERVICE_API CellSignals();
    AWS_LOCATIONSERVICE_API CellSignals(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CellSignals& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the Long-Term Evolution (LTE) network the device is
     * connected to.</p>
     */
    inline const Aws::Vector<LteCellDetails>& GetLteCellDetails() const{ return m_lteCellDetails; }
    inline bool LteCellDetailsHasBeenSet() const { return m_lteCellDetailsHasBeenSet; }
    inline void SetLteCellDetails(const Aws::Vector<LteCellDetails>& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails = value; }
    inline void SetLteCellDetails(Aws::Vector<LteCellDetails>&& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails = std::move(value); }
    inline CellSignals& WithLteCellDetails(const Aws::Vector<LteCellDetails>& value) { SetLteCellDetails(value); return *this;}
    inline CellSignals& WithLteCellDetails(Aws::Vector<LteCellDetails>&& value) { SetLteCellDetails(std::move(value)); return *this;}
    inline CellSignals& AddLteCellDetails(const LteCellDetails& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails.push_back(value); return *this; }
    inline CellSignals& AddLteCellDetails(LteCellDetails&& value) { m_lteCellDetailsHasBeenSet = true; m_lteCellDetails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LteCellDetails> m_lteCellDetails;
    bool m_lteCellDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
