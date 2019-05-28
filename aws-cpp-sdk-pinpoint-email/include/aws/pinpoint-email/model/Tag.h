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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines the tags that are associated with a resource.
   * A <i>tag</i> is a label that you optionally define and associate with a resource
   * in Amazon Pinpoint. Tags can help you categorize and manage resources in
   * different ways, such as by purpose, owner, environment, or other criteria. A
   * resource can have as many as 50 tags.</p> <p>Each tag consists of a
   * required <i>tag key</i> and an associated <i>tag value</i>, both of which you
   * define. A tag key is a general label that acts as a category for a more specific
   * tag value. A tag value acts as a descriptor within a tag key. A tag key can
   * contain as many as 128 characters. A tag value can contain as many as 256
   * characters. The characters can be Unicode letters, digits, white space, or one
   * of the following symbols: _ . : / = + -. The following additional restrictions
   * apply to tags:</p> <ul> <li> <p>Tag keys and values are case sensitive.</p>
   * </li> <li> <p>For each associated resource, each tag key must be unique and it
   * can have only one value.</p> </li> <li> <p>The <code>aws:</code> prefix is
   * reserved for use by AWS; you can’t use it in any tag keys or values that you
   * define. In addition, you can't edit or remove tag keys or values that use this
   * prefix. Tags that use this prefix don’t count against the limit of 50 tags per
   * resource.</p> </li> <li> <p>You can associate tags with public or shared
   * resources, but the tags are available only for your AWS account, not any other
   * accounts that share the resource. In addition, the tags are available only for
   * resources that are located in the specified AWS Region for your AWS account.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Tag">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
