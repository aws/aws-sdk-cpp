/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TagDescription
  {
  public:
    AWS_AUTOSCALING_API TagDescription();
    AWS_AUTOSCALING_API TagDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TagDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline TagDescription& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline TagDescription& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline TagDescription& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource. The only supported value is
     * <code>auto-scaling-group</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline TagDescription& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TagDescription& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TagDescription& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline TagDescription& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline TagDescription& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline TagDescription& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TagDescription& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TagDescription& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TagDescription& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the tag is added to new instances as they are launched in
     * the group.</p>
     */
    inline bool GetPropagateAtLaunch() const{ return m_propagateAtLaunch; }
    inline bool PropagateAtLaunchHasBeenSet() const { return m_propagateAtLaunchHasBeenSet; }
    inline void SetPropagateAtLaunch(bool value) { m_propagateAtLaunchHasBeenSet = true; m_propagateAtLaunch = value; }
    inline TagDescription& WithPropagateAtLaunch(bool value) { SetPropagateAtLaunch(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_propagateAtLaunch;
    bool m_propagateAtLaunchHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
