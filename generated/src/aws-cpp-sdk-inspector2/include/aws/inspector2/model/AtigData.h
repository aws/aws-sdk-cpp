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
    AWS_INSPECTOR2_API AtigData();
    AWS_INSPECTOR2_API AtigData(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AtigData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeen() const{ return m_firstSeen; }

    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }

    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline void SetFirstSeen(const Aws::Utils::DateTime& value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }

    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline void SetFirstSeen(Aws::Utils::DateTime&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::move(value); }

    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline AtigData& WithFirstSeen(const Aws::Utils::DateTime& value) { SetFirstSeen(value); return *this;}

    /**
     * <p>The date and time this vulnerability was first observed.</p>
     */
    inline AtigData& WithFirstSeen(Aws::Utils::DateTime&& value) { SetFirstSeen(std::move(value)); return *this;}


    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeen() const{ return m_lastSeen; }

    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }

    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline void SetLastSeen(const Aws::Utils::DateTime& value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }

    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline void SetLastSeen(Aws::Utils::DateTime&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::move(value); }

    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline AtigData& WithLastSeen(const Aws::Utils::DateTime& value) { SetLastSeen(value); return *this;}

    /**
     * <p>The date and time this vulnerability was last observed.</p>
     */
    inline AtigData& WithLastSeen(Aws::Utils::DateTime&& value) { SetLastSeen(std::move(value)); return *this;}


    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline AtigData& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline AtigData& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline AtigData& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline AtigData& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The commercial sectors this vulnerability targets.</p>
     */
    inline AtigData& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTtps() const{ return m_ttps; }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline bool TtpsHasBeenSet() const { return m_ttpsHasBeenSet; }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline void SetTtps(const Aws::Vector<Aws::String>& value) { m_ttpsHasBeenSet = true; m_ttps = value; }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline void SetTtps(Aws::Vector<Aws::String>&& value) { m_ttpsHasBeenSet = true; m_ttps = std::move(value); }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline AtigData& WithTtps(const Aws::Vector<Aws::String>& value) { SetTtps(value); return *this;}

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline AtigData& WithTtps(Aws::Vector<Aws::String>&& value) { SetTtps(std::move(value)); return *this;}

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline AtigData& AddTtps(const Aws::String& value) { m_ttpsHasBeenSet = true; m_ttps.push_back(value); return *this; }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline AtigData& AddTtps(Aws::String&& value) { m_ttpsHasBeenSet = true; m_ttps.push_back(std::move(value)); return *this; }

    /**
     * <p>The <a href="https://attack.mitre.org/">MITRE ATT&amp;CK</a> tactics,
     * techniques, and procedures (TTPs) associated with vulnerability.</p>
     */
    inline AtigData& AddTtps(const char* value) { m_ttpsHasBeenSet = true; m_ttps.push_back(value); return *this; }

  private:

    Aws::Utils::DateTime m_firstSeen;
    bool m_firstSeenHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeen;
    bool m_lastSeenHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ttps;
    bool m_ttpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
