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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Represents an app's environment variable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API EnvironmentVariable
  {
  public:
    EnvironmentVariable();
    EnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    EnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline EnvironmentVariable& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline EnvironmentVariable& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline EnvironmentVariable& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline EnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline EnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline EnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>(Optional) Whether the variable's value will be returned by the
     * <a>DescribeApps</a> action. To conceal an environment variable's value, set
     * <code>Secure</code> to <code>true</code>. <code>DescribeApps</code> then returns
     * <code>*****FILTERED*****</code> instead of the actual value. The default value
     * for <code>Secure</code> is <code>false</code>. </p>
     */
    inline bool GetSecure() const{ return m_secure; }

    /**
     * <p>(Optional) Whether the variable's value will be returned by the
     * <a>DescribeApps</a> action. To conceal an environment variable's value, set
     * <code>Secure</code> to <code>true</code>. <code>DescribeApps</code> then returns
     * <code>*****FILTERED*****</code> instead of the actual value. The default value
     * for <code>Secure</code> is <code>false</code>. </p>
     */
    inline bool SecureHasBeenSet() const { return m_secureHasBeenSet; }

    /**
     * <p>(Optional) Whether the variable's value will be returned by the
     * <a>DescribeApps</a> action. To conceal an environment variable's value, set
     * <code>Secure</code> to <code>true</code>. <code>DescribeApps</code> then returns
     * <code>*****FILTERED*****</code> instead of the actual value. The default value
     * for <code>Secure</code> is <code>false</code>. </p>
     */
    inline void SetSecure(bool value) { m_secureHasBeenSet = true; m_secure = value; }

    /**
     * <p>(Optional) Whether the variable's value will be returned by the
     * <a>DescribeApps</a> action. To conceal an environment variable's value, set
     * <code>Secure</code> to <code>true</code>. <code>DescribeApps</code> then returns
     * <code>*****FILTERED*****</code> instead of the actual value. The default value
     * for <code>Secure</code> is <code>false</code>. </p>
     */
    inline EnvironmentVariable& WithSecure(bool value) { SetSecure(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_secure;
    bool m_secureHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
