/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    <p>Describes a tag applied to an Auto Scaling group.</p>
  */
  class AWS_AUTOSCALING_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The name of the group.</p>
    */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    /*
     <p>The name of the group.</p>
    */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /*
     <p>The name of the group.</p>
    */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /*
     <p>The name of the group.</p>
    */
    inline Tag&  WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /*
     <p>The name of the group.</p>
    */
    inline Tag& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /*
     <p>The kind of resource to which the tag is applied. Currently, Auto Scaling supports the <code>auto-scaling-group</code> resource type.</p>
    */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    /*
     <p>The kind of resource to which the tag is applied. Currently, Auto Scaling supports the <code>auto-scaling-group</code> resource type.</p>
    */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /*
     <p>The kind of resource to which the tag is applied. Currently, Auto Scaling supports the <code>auto-scaling-group</code> resource type.</p>
    */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /*
     <p>The kind of resource to which the tag is applied. Currently, Auto Scaling supports the <code>auto-scaling-group</code> resource type.</p>
    */
    inline Tag&  WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /*
     <p>The kind of resource to which the tag is applied. Currently, Auto Scaling supports the <code>auto-scaling-group</code> resource type.</p>
    */
    inline Tag& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /*
     <p>The tag key.</p>
    */
    inline const Aws::String& GetKey() const{ return m_key; }
    /*
     <p>The tag key.</p>
    */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /*
     <p>The tag key.</p>
    */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /*
     <p>The tag key.</p>
    */
    inline Tag&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /*
     <p>The tag key.</p>
    */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}

    /*
     <p>The tag value.</p>
    */
    inline const Aws::String& GetValue() const{ return m_value; }
    /*
     <p>The tag value.</p>
    */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /*
     <p>The tag value.</p>
    */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /*
     <p>The tag value.</p>
    */
    inline Tag&  WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /*
     <p>The tag value.</p>
    */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

    /*
     <p>Specifies whether the tag is applied to instances launched after the tag is created. The same behavior applies to updates: If you change a tag, it is applied to all instances launched after you made the change.</p>
    */
    inline bool GetPropagateAtLaunch() const{ return m_propagateAtLaunch; }
    /*
     <p>Specifies whether the tag is applied to instances launched after the tag is created. The same behavior applies to updates: If you change a tag, it is applied to all instances launched after you made the change.</p>
    */
    inline void SetPropagateAtLaunch(bool value) { m_propagateAtLaunchHasBeenSet = true; m_propagateAtLaunch = value; }

    /*
     <p>Specifies whether the tag is applied to instances launched after the tag is created. The same behavior applies to updates: If you change a tag, it is applied to all instances launched after you made the change.</p>
    */
    inline Tag&  WithPropagateAtLaunch(bool value) { SetPropagateAtLaunch(value); return *this;}

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
