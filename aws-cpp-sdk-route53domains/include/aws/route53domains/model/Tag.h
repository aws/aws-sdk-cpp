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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Each tag includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/Tag">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key (name) of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space,
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a tag.</p> <p>Valid values: A-Z, a-z, 0-9, space, ".:/=+\-@"</p>
     * <p>Constraints: Each value can be 0-256 characters long.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
