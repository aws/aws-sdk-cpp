/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>A regular expression representing a restriction on a string configuration
   * option value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/OptionRestrictionRegex">AWS
   * API Reference</a></p>
   */
  class OptionRestrictionRegex
  {
  public:
    AWS_ELASTICBEANSTALK_API OptionRestrictionRegex();
    AWS_ELASTICBEANSTALK_API OptionRestrictionRegex(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API OptionRestrictionRegex& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline OptionRestrictionRegex& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline OptionRestrictionRegex& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The regular expression pattern that a string configuration option value with
     * this restriction must match.</p>
     */
    inline OptionRestrictionRegex& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline OptionRestrictionRegex& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline OptionRestrictionRegex& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A unique name representing this regular expression.</p>
     */
    inline OptionRestrictionRegex& WithLabel(const char* value) { SetLabel(value); return *this;}

  private:

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
