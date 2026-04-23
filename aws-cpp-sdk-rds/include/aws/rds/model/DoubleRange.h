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
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A range of double values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DoubleRange">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API DoubleRange
  {
  public:
    DoubleRange();
    DoubleRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    DoubleRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum value in the range.</p>
     */
    inline double GetFrom() const{ return m_from; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline void SetFrom(double value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline DoubleRange& WithFrom(double value) { SetFrom(value); return *this;}


    /**
     * <p>The maximum value in the range.</p>
     */
    inline double GetTo() const{ return m_to; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline void SetTo(double value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline DoubleRange& WithTo(double value) { SetTo(value); return *this;}

  private:

    double m_from;
    bool m_fromHasBeenSet;

    double m_to;
    bool m_toHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
