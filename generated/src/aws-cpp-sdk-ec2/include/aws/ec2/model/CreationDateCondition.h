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
   * <p>The maximum age for allowed images.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreationDateCondition">AWS
   * API Reference</a></p>
   */
  class CreationDateCondition
  {
  public:
    AWS_EC2_API CreationDateCondition() = default;
    AWS_EC2_API CreationDateCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreationDateCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum number of days that have elapsed since the image was created. For
     * example, a value of <code>300</code> allows images that were created within the
     * last 300 days.</p>
     */
    inline int GetMaximumDaysSinceCreated() const { return m_maximumDaysSinceCreated; }
    inline bool MaximumDaysSinceCreatedHasBeenSet() const { return m_maximumDaysSinceCreatedHasBeenSet; }
    inline void SetMaximumDaysSinceCreated(int value) { m_maximumDaysSinceCreatedHasBeenSet = true; m_maximumDaysSinceCreated = value; }
    inline CreationDateCondition& WithMaximumDaysSinceCreated(int value) { SetMaximumDaysSinceCreated(value); return *this;}
    ///@}
  private:

    int m_maximumDaysSinceCreated{0};
    bool m_maximumDaysSinceCreatedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
