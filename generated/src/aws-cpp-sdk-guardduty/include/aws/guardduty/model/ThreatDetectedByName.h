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
    AWS_GUARDDUTY_API ThreatDetectedByName();
    AWS_GUARDDUTY_API ThreatDetectedByName(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ThreatDetectedByName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total number of infected files identified.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>Total number of infected files identified.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>Total number of infected files identified.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>Total number of infected files identified.</p>
     */
    inline ThreatDetectedByName& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>Total number of unique threats by name identified, as part of the malware
     * scan.</p>
     */
    inline int GetUniqueThreatNameCount() const{ return m_uniqueThreatNameCount; }

    /**
     * <p>Total number of unique threats by name identified, as part of the malware
     * scan.</p>
     */
    inline bool UniqueThreatNameCountHasBeenSet() const { return m_uniqueThreatNameCountHasBeenSet; }

    /**
     * <p>Total number of unique threats by name identified, as part of the malware
     * scan.</p>
     */
    inline void SetUniqueThreatNameCount(int value) { m_uniqueThreatNameCountHasBeenSet = true; m_uniqueThreatNameCount = value; }

    /**
     * <p>Total number of unique threats by name identified, as part of the malware
     * scan.</p>
     */
    inline ThreatDetectedByName& WithUniqueThreatNameCount(int value) { SetUniqueThreatNameCount(value); return *this;}


    /**
     * <p>Flag to determine if the finding contains every single infected file-path
     * and/or every threat.</p>
     */
    inline bool GetShortened() const{ return m_shortened; }

    /**
     * <p>Flag to determine if the finding contains every single infected file-path
     * and/or every threat.</p>
     */
    inline bool ShortenedHasBeenSet() const { return m_shortenedHasBeenSet; }

    /**
     * <p>Flag to determine if the finding contains every single infected file-path
     * and/or every threat.</p>
     */
    inline void SetShortened(bool value) { m_shortenedHasBeenSet = true; m_shortened = value; }

    /**
     * <p>Flag to determine if the finding contains every single infected file-path
     * and/or every threat.</p>
     */
    inline ThreatDetectedByName& WithShortened(bool value) { SetShortened(value); return *this;}


    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline const Aws::Vector<ScanThreatName>& GetThreatNames() const{ return m_threatNames; }

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline bool ThreatNamesHasBeenSet() const { return m_threatNamesHasBeenSet; }

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline void SetThreatNames(const Aws::Vector<ScanThreatName>& value) { m_threatNamesHasBeenSet = true; m_threatNames = value; }

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline void SetThreatNames(Aws::Vector<ScanThreatName>&& value) { m_threatNamesHasBeenSet = true; m_threatNames = std::move(value); }

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline ThreatDetectedByName& WithThreatNames(const Aws::Vector<ScanThreatName>& value) { SetThreatNames(value); return *this;}

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline ThreatDetectedByName& WithThreatNames(Aws::Vector<ScanThreatName>&& value) { SetThreatNames(std::move(value)); return *this;}

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline ThreatDetectedByName& AddThreatNames(const ScanThreatName& value) { m_threatNamesHasBeenSet = true; m_threatNames.push_back(value); return *this; }

    /**
     * <p>List of identified threats with details, organized by threat name.</p>
     */
    inline ThreatDetectedByName& AddThreatNames(ScanThreatName&& value) { m_threatNamesHasBeenSet = true; m_threatNames.push_back(std::move(value)); return *this; }

  private:

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;

    int m_uniqueThreatNameCount;
    bool m_uniqueThreatNameCountHasBeenSet = false;

    bool m_shortened;
    bool m_shortenedHasBeenSet = false;

    Aws::Vector<ScanThreatName> m_threatNames;
    bool m_threatNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
