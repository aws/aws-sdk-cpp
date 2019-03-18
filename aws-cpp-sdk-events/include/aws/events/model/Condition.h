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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A JSON string which you can use to limit the event bus permissions you are
   * granting to only accounts that fulfill the condition. Currently, the only
   * supported condition is membership in a certain AWS organization. The string must
   * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields. The
   * <code>Value</code> field specifies the ID of the AWS organization. Following is
   * an example value for <code>Condition</code>:</p> <p> <code>'{"Type" :
   * "StringEquals", "Key": "aws:PrincipalOrgID", "Value": "o-1234567890"}'</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/Condition">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API Condition
  {
  public:
    Condition();
    Condition(Aws::Utils::Json::JsonView jsonValue);
    Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline Condition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline Condition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Specifies the type of condition. Currently the only supported value is
     * <code>StringEquals</code>.</p>
     */
    inline Condition& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline Condition& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline Condition& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the key for the condition. Currently the only supported key is
     * <code>aws:PrincipalOrgID</code>.</p>
     */
    inline Condition& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline Condition& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline Condition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specifies the value for the key. Currently, this must be the ID of the
     * organization.</p>
     */
    inline Condition& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
