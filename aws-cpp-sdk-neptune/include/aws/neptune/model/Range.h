/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>A range of integer values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/Range">AWS API
   * Reference</a></p>
   */
  class AWS_NEPTUNE_API Range
  {
  public:
    Range();
    Range(const Aws::Utils::Xml::XmlNode& xmlNode);
    Range& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum value in the range.</p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline Range& WithFrom(int value) { SetFrom(value); return *this;}


    /**
     * <p>The maximum value in the range.</p>
     */
    inline int GetTo() const{ return m_to; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline Range& WithTo(int value) { SetTo(value); return *this;}


    /**
     * <p>The step value for the range. For example, if you have a range of 5,000 to
     * 10,000, with a step value of 1,000, the valid values start at 5,000 and step up
     * by 1,000. Even though 7,500 is within the range, it isn't a valid value for the
     * range. The valid values are 5,000, 6,000, 7,000, 8,000...</p>
     */
    inline int GetStep() const{ return m_step; }

    /**
     * <p>The step value for the range. For example, if you have a range of 5,000 to
     * 10,000, with a step value of 1,000, the valid values start at 5,000 and step up
     * by 1,000. Even though 7,500 is within the range, it isn't a valid value for the
     * range. The valid values are 5,000, 6,000, 7,000, 8,000...</p>
     */
    inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }

    /**
     * <p>The step value for the range. For example, if you have a range of 5,000 to
     * 10,000, with a step value of 1,000, the valid values start at 5,000 and step up
     * by 1,000. Even though 7,500 is within the range, it isn't a valid value for the
     * range. The valid values are 5,000, 6,000, 7,000, 8,000...</p>
     */
    inline void SetStep(int value) { m_stepHasBeenSet = true; m_step = value; }

    /**
     * <p>The step value for the range. For example, if you have a range of 5,000 to
     * 10,000, with a step value of 1,000, the valid values start at 5,000 and step up
     * by 1,000. Even though 7,500 is within the range, it isn't a valid value for the
     * range. The valid values are 5,000, 6,000, 7,000, 8,000...</p>
     */
    inline Range& WithStep(int value) { SetStep(value); return *this;}

  private:

    int m_from;
    bool m_fromHasBeenSet;

    int m_to;
    bool m_toHasBeenSet;

    int m_step;
    bool m_stepHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
