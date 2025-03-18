/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An instance of a threat intelligence detail that constitutes evidence for the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ThreatIntelligenceDetail">AWS
   * API Reference</a></p>
   */
  class ThreatIntelligenceDetail
  {
  public:
    AWS_GUARDDUTY_API ThreatIntelligenceDetail() = default;
    AWS_GUARDDUTY_API ThreatIntelligenceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ThreatIntelligenceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline const Aws::String& GetThreatListName() const { return m_threatListName; }
    inline bool ThreatListNameHasBeenSet() const { return m_threatListNameHasBeenSet; }
    template<typename ThreatListNameT = Aws::String>
    void SetThreatListName(ThreatListNameT&& value) { m_threatListNameHasBeenSet = true; m_threatListName = std::forward<ThreatListNameT>(value); }
    template<typename ThreatListNameT = Aws::String>
    ThreatIntelligenceDetail& WithThreatListName(ThreatListNameT&& value) { SetThreatListName(std::forward<ThreatListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThreatNames() const { return m_threatNames; }
    inline bool ThreatNamesHasBeenSet() const { return m_threatNamesHasBeenSet; }
    template<typename ThreatNamesT = Aws::Vector<Aws::String>>
    void SetThreatNames(ThreatNamesT&& value) { m_threatNamesHasBeenSet = true; m_threatNames = std::forward<ThreatNamesT>(value); }
    template<typename ThreatNamesT = Aws::Vector<Aws::String>>
    ThreatIntelligenceDetail& WithThreatNames(ThreatNamesT&& value) { SetThreatNames(std::forward<ThreatNamesT>(value)); return *this;}
    template<typename ThreatNamesT = Aws::String>
    ThreatIntelligenceDetail& AddThreatNames(ThreatNamesT&& value) { m_threatNamesHasBeenSet = true; m_threatNames.emplace_back(std::forward<ThreatNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>SHA256 of the file that generated the finding.</p>
     */
    inline const Aws::String& GetThreatFileSha256() const { return m_threatFileSha256; }
    inline bool ThreatFileSha256HasBeenSet() const { return m_threatFileSha256HasBeenSet; }
    template<typename ThreatFileSha256T = Aws::String>
    void SetThreatFileSha256(ThreatFileSha256T&& value) { m_threatFileSha256HasBeenSet = true; m_threatFileSha256 = std::forward<ThreatFileSha256T>(value); }
    template<typename ThreatFileSha256T = Aws::String>
    ThreatIntelligenceDetail& WithThreatFileSha256(ThreatFileSha256T&& value) { SetThreatFileSha256(std::forward<ThreatFileSha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_threatListName;
    bool m_threatListNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_threatNames;
    bool m_threatNamesHasBeenSet = false;

    Aws::String m_threatFileSha256;
    bool m_threatFileSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
