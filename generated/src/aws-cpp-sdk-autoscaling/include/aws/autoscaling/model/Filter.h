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

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

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
  class Filter
  {
  public:
    AWS_AUTOSCALING_API Filter();
    AWS_AUTOSCALING_API Filter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Filter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p> <p>The valid values for <code>Name</code> depend
     * on which API operation you're using with the filter
     * (<a>DescribeAutoScalingGroups</a> or <a>DescribeTags</a>).</p> <p>
     * <b>DescribeAutoScalingGroups</b> </p> <p>Valid values for <code>Name</code>
     * include the following: </p> <ul> <li> <p> <code>tag-key</code> - Accepts tag
     * keys. The results only include information about the Auto Scaling groups
     * associated with these tag keys. </p> </li> <li> <p> <code>tag-value</code> -
     * Accepts tag values. The results only include information about the Auto Scaling
     * groups associated with these tag values. </p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - Accepts the key/value combination of the tag. Use
     * the tag key in the filter name and the tag value as the filter value. The
     * results only include information about the Auto Scaling groups associated with
     * the specified key/value combination. </p> </li> </ul> <p> <b>DescribeTags</b>
     * </p> <p>Valid values for <code>Name</code> include the following: </p> <ul> <li>
     * <p> <code>auto-scaling-group</code> - Accepts the names of Auto Scaling groups.
     * The results only include information about the tags associated with these Auto
     * Scaling groups. </p> </li> <li> <p> <code>key</code> - Accepts tag keys. The
     * results only include information about the tags associated with these tag keys.
     * </p> </li> <li> <p> <code>value</code> - Accepts tag values. The results only
     * include information about the tags associated with these tag values. </p> </li>
     * <li> <p> <code>propagate-at-launch</code> - Accepts a Boolean value, which
     * specifies whether tags propagate to instances at launch. The results only
     * include information about the tags associated with the specified Boolean value.
     * </p> </li> </ul>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive. </p> <p>If you
     * specify multiple values for a filter, the values are automatically logically
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values. For example, specify "tag:environment" for the
     * filter name and "production,development" for the filter values to find Auto
     * Scaling groups with the tag "environment=production" or
     * "environment=development".</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
