/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTollPassValidityPeriod.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Details if the toll rate can be a pass that supports multiple
   * trips.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollPass">AWS
   * API Reference</a></p>
   */
  class RouteTollPass
  {
  public:
    AWS_GEOROUTES_API RouteTollPass() = default;
    AWS_GEOROUTES_API RouteTollPass(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollPass& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the pass includes the rate for the return leg of the trip.</p>
     */
    inline bool GetIncludesReturnTrip() const { return m_includesReturnTrip; }
    inline bool IncludesReturnTripHasBeenSet() const { return m_includesReturnTripHasBeenSet; }
    inline void SetIncludesReturnTrip(bool value) { m_includesReturnTripHasBeenSet = true; m_includesReturnTrip = value; }
    inline RouteTollPass& WithIncludesReturnTrip(bool value) { SetIncludesReturnTrip(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the pass is only valid for senior persons.</p>
     */
    inline bool GetSeniorPass() const { return m_seniorPass; }
    inline bool SeniorPassHasBeenSet() const { return m_seniorPassHasBeenSet; }
    inline void SetSeniorPass(bool value) { m_seniorPassHasBeenSet = true; m_seniorPass = value; }
    inline RouteTollPass& WithSeniorPass(bool value) { SetSeniorPass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the toll pass can be transferred, and how many times.</p>
     */
    inline int GetTransferCount() const { return m_transferCount; }
    inline bool TransferCountHasBeenSet() const { return m_transferCountHasBeenSet; }
    inline void SetTransferCount(int value) { m_transferCountHasBeenSet = true; m_transferCount = value; }
    inline RouteTollPass& WithTransferCount(int value) { SetTransferCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of trips the pass is valid for.</p>
     */
    inline int GetTripCount() const { return m_tripCount; }
    inline bool TripCountHasBeenSet() const { return m_tripCountHasBeenSet; }
    inline void SetTripCount(int value) { m_tripCountHasBeenSet = true; m_tripCount = value; }
    inline RouteTollPass& WithTripCount(int value) { SetTripCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Period for which the pass is valid.</p>
     */
    inline const RouteTollPassValidityPeriod& GetValidityPeriod() const { return m_validityPeriod; }
    inline bool ValidityPeriodHasBeenSet() const { return m_validityPeriodHasBeenSet; }
    template<typename ValidityPeriodT = RouteTollPassValidityPeriod>
    void SetValidityPeriod(ValidityPeriodT&& value) { m_validityPeriodHasBeenSet = true; m_validityPeriod = std::forward<ValidityPeriodT>(value); }
    template<typename ValidityPeriodT = RouteTollPassValidityPeriod>
    RouteTollPass& WithValidityPeriod(ValidityPeriodT&& value) { SetValidityPeriod(std::forward<ValidityPeriodT>(value)); return *this;}
    ///@}
  private:

    bool m_includesReturnTrip{false};
    bool m_includesReturnTripHasBeenSet = false;

    bool m_seniorPass{false};
    bool m_seniorPassHasBeenSet = false;

    int m_transferCount{0};
    bool m_transferCountHasBeenSet = false;

    int m_tripCount{0};
    bool m_tripCountHasBeenSet = false;

    RouteTollPassValidityPeriod m_validityPeriod;
    bool m_validityPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
