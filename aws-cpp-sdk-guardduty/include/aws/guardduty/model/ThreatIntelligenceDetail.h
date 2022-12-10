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
    AWS_GUARDDUTY_API ThreatIntelligenceDetail();
    AWS_GUARDDUTY_API ThreatIntelligenceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ThreatIntelligenceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline const Aws::String& GetThreatListName() const{ return m_threatListName; }

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline bool ThreatListNameHasBeenSet() const { return m_threatListNameHasBeenSet; }

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline void SetThreatListName(const Aws::String& value) { m_threatListNameHasBeenSet = true; m_threatListName = value; }

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline void SetThreatListName(Aws::String&& value) { m_threatListNameHasBeenSet = true; m_threatListName = std::move(value); }

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline void SetThreatListName(const char* value) { m_threatListNameHasBeenSet = true; m_threatListName.assign(value); }

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline ThreatIntelligenceDetail& WithThreatListName(const Aws::String& value) { SetThreatListName(value); return *this;}

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline ThreatIntelligenceDetail& WithThreatListName(Aws::String&& value) { SetThreatListName(std::move(value)); return *this;}

    /**
     * <p>The name of the threat intelligence list that triggered the finding.</p>
     */
    inline ThreatIntelligenceDetail& WithThreatListName(const char* value) { SetThreatListName(value); return *this;}


    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThreatNames() const{ return m_threatNames; }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline bool ThreatNamesHasBeenSet() const { return m_threatNamesHasBeenSet; }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline void SetThreatNames(const Aws::Vector<Aws::String>& value) { m_threatNamesHasBeenSet = true; m_threatNames = value; }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline void SetThreatNames(Aws::Vector<Aws::String>&& value) { m_threatNamesHasBeenSet = true; m_threatNames = std::move(value); }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline ThreatIntelligenceDetail& WithThreatNames(const Aws::Vector<Aws::String>& value) { SetThreatNames(value); return *this;}

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline ThreatIntelligenceDetail& WithThreatNames(Aws::Vector<Aws::String>&& value) { SetThreatNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline ThreatIntelligenceDetail& AddThreatNames(const Aws::String& value) { m_threatNamesHasBeenSet = true; m_threatNames.push_back(value); return *this; }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline ThreatIntelligenceDetail& AddThreatNames(Aws::String&& value) { m_threatNamesHasBeenSet = true; m_threatNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the threats in the threat intelligence list that triggered
     * the finding.</p>
     */
    inline ThreatIntelligenceDetail& AddThreatNames(const char* value) { m_threatNamesHasBeenSet = true; m_threatNames.push_back(value); return *this; }

  private:

    Aws::String m_threatListName;
    bool m_threatListNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_threatNames;
    bool m_threatNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
