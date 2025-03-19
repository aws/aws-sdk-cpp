/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanThreatName.h>
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
   * <p>Contains details about identified threats organized by threat
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ThreatDetectedByName">AWS
   * API Reference</a></p>
   */
  class ThreatDetectedByName
  {
  public:
    AWS_GUARDDUTY_API ThreatDetectedByName() = default;
    AWS_GUARDDUTY_API ThreatDetectedByName(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ThreatDetectedByName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of infected files identified.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline ThreatDetectedByName& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of unique threats by name identified, as part of the malware
     * scan.</p>
     */
    inline int GetUniqueThreatNameCount() const { return m_uniqueThreatNameCount; }
    inline bool UniqueThreatNameCountHasBeenSet() const { return m_uniqueThreatNameCountHasBeenSet; }
    inline void SetUniqueThreatNameCount(int value) { m_uniqueThreatNameCountHasBeenSet = true; m_uniqueThreatNameCount = value; }
    inline ThreatDetectedByName& WithUniqueThreatNameCount(int value) { SetUniqueThreatNameCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag to determine if the finding contains every single infected file-path
     * and/or every threat.</p>
     */
    inline bool GetShortened() const { return m_shortened; }
    inline bool ShortenedHasBeenSet() const { return m_shortenedHasBeenSet; }
    inline void SetShortened(bool value) { m_shortenedHasBeenSet = true; m_shortened = value; }
    inline ThreatDetectedByName& WithShortened(bool value) { SetShortened(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline const Aws::Vector<ScanThreatName>& GetThreatNames() const { return m_threatNames; }
    inline bool ThreatNamesHasBeenSet() const { return m_threatNamesHasBeenSet; }
    template<typename ThreatNamesT = Aws::Vector<ScanThreatName>>
    void SetThreatNames(ThreatNamesT&& value) { m_threatNamesHasBeenSet = true; m_threatNames = std::forward<ThreatNamesT>(value); }
    template<typename ThreatNamesT = Aws::Vector<ScanThreatName>>
    ThreatDetectedByName& WithThreatNames(ThreatNamesT&& value) { SetThreatNames(std::forward<ThreatNamesT>(value)); return *this;}
    template<typename ThreatNamesT = ScanThreatName>
    ThreatDetectedByName& AddThreatNames(ThreatNamesT&& value) { m_threatNamesHasBeenSet = true; m_threatNames.emplace_back(std::forward<ThreatNamesT>(value)); return *this; }
    ///@}
  private:

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    int m_uniqueThreatNameCount{0};
    bool m_uniqueThreatNameCountHasBeenSet = false;

    bool m_shortened{false};
    bool m_shortenedHasBeenSet = false;

    Aws::Vector<ScanThreatName> m_threatNames;
    bool m_threatNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
