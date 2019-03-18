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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a tag for an Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TagDescription">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API TagDescription
  {
  public:
    TagDescription();
    TagDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    TagDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The name of the group.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline TagDescription& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline TagDescription& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline TagDescription& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline TagDescription& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline TagDescription& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline TagDescription& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The tag key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag key.</p>
     */
    inline TagDescription& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag key.</p>
     */
    inline TagDescription& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag key.</p>
     */
    inline TagDescription& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag value.</p>
     */
    inline TagDescription& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline TagDescription& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline TagDescription& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Determines whether the tag is added to new instances as they are launched in
     * the group.</p>
     */
    inline bool GetPropagateAtLaunch() const{ return m_propagateAtLaunch; }

    /**
     * <p>Determines whether the tag is added to new instances as they are launched in
     * the group.</p>
     */
    inline bool PropagateAtLaunchHasBeenSet() const { return m_propagateAtLaunchHasBeenSet; }

    /**
     * <p>Determines whether the tag is added to new instances as they are launched in
     * the group.</p>
     */
    inline void SetPropagateAtLaunch(bool value) { m_propagateAtLaunchHasBeenSet = true; m_propagateAtLaunch = value; }

    /**
     * <p>Determines whether the tag is added to new instances as they are launched in
     * the group.</p>
     */
    inline TagDescription& WithPropagateAtLaunch(bool value) { SetPropagateAtLaunch(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_propagateAtLaunch;
    bool m_propagateAtLaunchHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
