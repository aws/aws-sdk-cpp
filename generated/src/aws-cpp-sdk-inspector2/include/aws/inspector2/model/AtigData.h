/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Threat Intel Group (ATIG) details for a specific
   * vulnerability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AtigData">AWS
   * API Reference</a></p>
   */
  class AtigData
  {
  public:
    AWS_INSPECTOR2_API AtigData() = default;
    AWS_INSPECTOR2_API AtigData(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AtigData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeen() const { return m_firstSeen; }
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }
    template<typename FirstSeenT = Aws::Utils::DateTime>
    void SetFirstSeen(FirstSeenT&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::forward<FirstSeenT>(value); }
    template<typename FirstSeenT = Aws::Utils::DateTime>
    AtigData& WithFirstSeen(FirstSeenT&& value) { SetFirstSeen(std::forward<FirstSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeen() const { return m_lastSeen; }
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }
    template<typename LastSeenT = Aws::Utils::DateTime>
    void SetLastSeen(LastSeenT&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::forward<LastSeenT>(value); }
    template<typename LastSeenT = Aws::Utils::DateTime>
    AtigData& WithLastSeen(LastSeenT&& value) { SetLastSeen(std::forward<LastSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    AtigData& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    AtigData& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTtps() const { return m_ttps; }
    inline bool TtpsHasBeenSet() const { return m_ttpsHasBeenSet; }
    template<typename TtpsT = Aws::Vector<Aws::String>>
    void SetTtps(TtpsT&& value) { m_ttpsHasBeenSet = true; m_ttps = std::forward<TtpsT>(value); }
    template<typename TtpsT = Aws::Vector<Aws::String>>
    AtigData& WithTtps(TtpsT&& value) { SetTtps(std::forward<TtpsT>(value)); return *this;}
    template<typename TtpsT = Aws::String>
    AtigData& AddTtps(TtpsT&& value) { m_ttpsHasBeenSet = true; m_ttps.emplace_back(std::forward<TtpsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_firstSeen{};
    bool m_firstSeenHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeen{};
    bool m_lastSeenHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ttps;
    bool m_ttpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
