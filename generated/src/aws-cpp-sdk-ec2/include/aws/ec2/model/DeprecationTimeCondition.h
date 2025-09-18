/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The maximum period since deprecation for allowed images.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeprecationTimeCondition">AWS
   * API Reference</a></p>
   */
  class DeprecationTimeCondition
  {
  public:
    AWS_EC2_API DeprecationTimeCondition() = default;
    AWS_EC2_API DeprecationTimeCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeprecationTimeCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum number of days that have elapsed since the image was deprecated.
     * When set to <code>0</code>, no deprecated images are allowed.</p>
     */
    inline int GetMaximumDaysSinceDeprecated() const { return m_maximumDaysSinceDeprecated; }
    inline bool MaximumDaysSinceDeprecatedHasBeenSet() const { return m_maximumDaysSinceDeprecatedHasBeenSet; }
    inline void SetMaximumDaysSinceDeprecated(int value) { m_maximumDaysSinceDeprecatedHasBeenSet = true; m_maximumDaysSinceDeprecated = value; }
    inline DeprecationTimeCondition& WithMaximumDaysSinceDeprecated(int value) { SetMaximumDaysSinceDeprecated(value); return *this;}
    ///@}
  private:

    int m_maximumDaysSinceDeprecated{0};
    bool m_maximumDaysSinceDeprecatedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
