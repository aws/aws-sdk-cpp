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
    AWS_GUARDDUTY_API Anomaly();
    AWS_GUARDDUTY_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the types of profiles.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline void SetProfiles(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>& value) { m_profilesHasBeenSet = true; m_profiles = value; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline void SetProfiles(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>&& value) { m_profilesHasBeenSet = true; m_profiles = std::move(value); }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& WithProfiles(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>& value) { SetProfiles(value); return *this;}

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& WithProfiles(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>& value) { m_profilesHasBeenSet = true; m_profiles.emplace(key, value); return *this; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>& value) { m_profilesHasBeenSet = true; m_profiles.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>&& value) { m_profilesHasBeenSet = true; m_profiles.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>&& value) { m_profilesHasBeenSet = true; m_profiles.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(const char* key, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>&& value) { m_profilesHasBeenSet = true; m_profiles.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the types of profiles.</p>
     */
    inline Anomaly& AddProfiles(const char* key, const Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>& value) { m_profilesHasBeenSet = true; m_profiles.emplace(key, value); return *this; }


    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline const AnomalyUnusual& GetUnusual() const{ return m_unusual; }

    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline bool UnusualHasBeenSet() const { return m_unusualHasBeenSet; }

    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline void SetUnusual(const AnomalyUnusual& value) { m_unusualHasBeenSet = true; m_unusual = value; }

    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline void SetUnusual(AnomalyUnusual&& value) { m_unusualHasBeenSet = true; m_unusual = std::move(value); }

    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline Anomaly& WithUnusual(const AnomalyUnusual& value) { SetUnusual(value); return *this;}

    /**
     * <p>Information about the behavior of the anomalies.</p>
     */
    inline Anomaly& WithUnusual(AnomalyUnusual&& value) { SetUnusual(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<AnomalyObject>>> m_profiles;
    bool m_profilesHasBeenSet = false;

    AnomalyUnusual m_unusual;
    bool m_unusualHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
