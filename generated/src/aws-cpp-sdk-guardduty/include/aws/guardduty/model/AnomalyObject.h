/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ProfileType.h>
#include <aws/guardduty/model/ProfileSubtype.h>
#include <aws/guardduty/model/Observations.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the unusual anomalies.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AnomalyObject">AWS
   * API Reference</a></p>
   */
  class AnomalyObject
  {
  public:
    AWS_GUARDDUTY_API AnomalyObject() = default;
    AWS_GUARDDUTY_API AnomalyObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AnomalyObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of behavior of the profile.</p>
     */
    inline ProfileType GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(ProfileType value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline AnomalyObject& WithProfileType(ProfileType value) { SetProfileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of the anomaly.</p>
     */
    inline ProfileSubtype GetProfileSubtype() const { return m_profileSubtype; }
    inline bool ProfileSubtypeHasBeenSet() const { return m_profileSubtypeHasBeenSet; }
    inline void SetProfileSubtype(ProfileSubtype value) { m_profileSubtypeHasBeenSet = true; m_profileSubtype = value; }
    inline AnomalyObject& WithProfileSubtype(ProfileSubtype value) { SetProfileSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recorded value.</p>
     */
    inline const Observations& GetObservations() const { return m_observations; }
    inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
    template<typename ObservationsT = Observations>
    void SetObservations(ObservationsT&& value) { m_observationsHasBeenSet = true; m_observations = std::forward<ObservationsT>(value); }
    template<typename ObservationsT = Observations>
    AnomalyObject& WithObservations(ObservationsT&& value) { SetObservations(std::forward<ObservationsT>(value)); return *this;}
    ///@}
  private:

    ProfileType m_profileType{ProfileType::NOT_SET};
    bool m_profileTypeHasBeenSet = false;

    ProfileSubtype m_profileSubtype{ProfileSubtype::NOT_SET};
    bool m_profileSubtypeHasBeenSet = false;

    Observations m_observations;
    bool m_observationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
