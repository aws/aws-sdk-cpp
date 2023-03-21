/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes additional settings for a stateful rule.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RuleOption">AWS
   * API Reference</a></p>
   */
  class RuleOption
  {
  public:
    AWS_EC2_API RuleOption();
    AWS_EC2_API RuleOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RuleOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Suricata keyword.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The Suricata keyword.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>The Suricata keyword.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>The Suricata keyword.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>The Suricata keyword.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>The Suricata keyword.</p>
     */
    inline RuleOption& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The Suricata keyword.</p>
     */
    inline RuleOption& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The Suricata keyword.</p>
     */
    inline RuleOption& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>The settings for the keyword.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline void SetSettings(const Aws::Vector<Aws::String>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline void SetSettings(Aws::Vector<Aws::String>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline RuleOption& WithSettings(const Aws::Vector<Aws::String>& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings for the keyword.</p>
     */
    inline RuleOption& WithSettings(Aws::Vector<Aws::String>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>The settings for the keyword.</p>
     */
    inline RuleOption& AddSettings(const Aws::String& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline RuleOption& AddSettings(Aws::String&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }

    /**
     * <p>The settings for the keyword.</p>
     */
    inline RuleOption& AddSettings(const char* value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

  private:

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::Vector<Aws::String> m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
