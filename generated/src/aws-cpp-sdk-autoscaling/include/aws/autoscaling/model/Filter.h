/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p>Describes a filter that is used to return a more specific list of results
 * from a describe operation.</p> <p>If you specify multiple filters, the filters
 * are automatically logically joined with an <code>AND</code>, and the request
 * returns only the results that match all of the specified filters. </p> <p>For
 * more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-tagging.html">Tag
 * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Filter">AWS
 * API Reference</a></p>
 */
class Filter {
 public:
  AWS_AUTOSCALING_API Filter() = default;
  AWS_AUTOSCALING_API Filter(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API Filter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the filter.</p> <p> The valid values for <code>Name</code> depend
   * on which API operation you're using with the filter. </p> <p> <b> <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DescribeAutoScalingGroups.html">DescribeAutoScalingGroups</a>
   * </b> </p> <p>Valid values for <code>Name</code> include the following: </p> <ul>
   * <li> <p> <code>tag-key</code> - Accepts tag keys. The results only include
   * information about the Auto Scaling groups associated with these tag keys. </p>
   * </li> <li> <p> <code>tag-value</code> - Accepts tag values. The results only
   * include information about the Auto Scaling groups associated with these tag
   * values. </p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - Accepts the key/value
   * combination of the tag. Use the tag key in the filter name and the tag value as
   * the filter value. The results only include information about the Auto Scaling
   * groups associated with the specified key/value combination. </p> </li> </ul> <p>
   * <b> <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DescribeTags.html">DescribeTags</a>
   * </b> </p> <p>Valid values for <code>Name</code> include the following: </p> <ul>
   * <li> <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling
   * groups. The results only include information about the tags associated with
   * these Auto Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag
   * keys. The results only include information about the tags associated with these
   * tag keys. </p> </li> <li> <p> <code>value</code> - Accepts tag values. The
   * results only include information about the tags associated with these tag
   * values. </p> </li> <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean
   * value, which specifies whether tags propagate to instances at launch. The
   * results only include information about the tags associated with the specified
   * Boolean value. </p> </li> </ul> <p> <b> <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DescribeScalingActivities.html">DescribeScalingActivities</a>
   * </b> </p> <p>Valid values for <code>Name</code> include the following: </p> <ul>
   * <li> <p> <code>StartTimeLowerBound</code> - The earliest scaling activities to
   * return based on the activity start time. Scaling activities with a start time
   * earlier than this value are not included in the results. Only activities started
   * within the last six weeks can be returned regardless of the value specified.
   * </p> </li> <li> <p> <code>StartTimeUpperBound</code> - The latest scaling
   * activities to return based on the activity start time. Scaling activities with a
   * start time later than this value are not included in the results. Only
   * activities started within the last six weeks can be returned regardless of the
   * value specified. </p> </li> <li> <p> <code>Status</code> - The
   * <code>StatusCode</code> value of the scaling activity. This filter can only be
   * used in combination with the <code>AutoScalingGroupName</code> parameter. For
   * valid <code>StatusCode</code> values, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_Activity.html">Activity</a>
   * in the <i>Amazon EC2 Auto Scaling API Reference</i>. </p> </li> </ul>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Filter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
   * specify multiple values for a filter, the values are automatically logically
   * joined with an <code>OR</code>, and the request returns all results that match
   * any of the specified values.</p> <p> <b>DescribeAutoScalingGroups example:</b>
   * Specify "tag:environment" for the filter name and "production,development" for
   * the filter values to find Auto Scaling groups with the tag
   * "environment=production" or "environment=development". </p> <p>
   * <b>DescribeScalingActivities example:</b> Specify "Status" for the filter name
   * and "Successful,Failed" for the filter values to find scaling activities with a
   * status of either "Successful" or "Failed". </p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  Filter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  Filter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
