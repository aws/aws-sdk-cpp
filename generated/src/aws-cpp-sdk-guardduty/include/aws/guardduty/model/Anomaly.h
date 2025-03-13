/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/guardduty/model/AnomalyUnusual.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/AnomalyObject.h>
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
   * <p>Contains information about the anomalies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Anomaly">AWS
   * API Reference</a></p>
   */
  class Anomaly
  {
  public:
    AWS_GUARDDUTY_API Anomaly() = default;
    AWS_GUARDDUTY_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the types of profiles.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>& GetProfiles() const { return m_profiles; }
    inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }
    template<typename ProfilesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>>
    void SetProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles = std::forward<ProfilesT>(value); }
    template<typename ProfilesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>>
    Anomaly& WithProfiles(ProfilesT&& value) { SetProfiles(std::forward<ProfilesT>(value)); return *this;}
    template<typename ProfilesKeyT = Aws::String, typename ProfilesValueT = Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>
    Anomaly& AddProfiles(ProfilesKeyT&& key, ProfilesValueT&& value) {
      m_profilesHasBeenSet = true; m_profiles.emplace(std::forward<ProfilesKeyT>(key), std::forward<ProfilesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline const AnomalyUnusual& GetUnusual() const { return m_unusual; }
    inline bool UnusualHasBeenSet() const { return m_unusualHasBeenSet; }
    template<typename UnusualT = AnomalyUnusual>
    void SetUnusual(UnusualT&& value) { m_unusualHasBeenSet = true; m_unusual = std::forward<UnusualT>(value); }
    template<typename UnusualT = AnomalyUnusual>
    Anomaly& WithUnusual(UnusualT&& value) { SetUnusual(std::forward<UnusualT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>> m_profiles;
    bool m_profilesHasBeenSet = false;

    AnomalyUnusual m_unusual;
    bool m_unusualHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
