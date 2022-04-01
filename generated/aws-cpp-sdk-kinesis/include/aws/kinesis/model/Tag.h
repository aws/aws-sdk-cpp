﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Metadata assigned to the stream, consisting of a key-value
   * pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_KINESIS_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the tag. Maximum length: 128 characters. Valid
     * characters: Unicode letters, digits, white space, _ . / = + - % @</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>An optional string, typically used to describe or define the tag. Maximum
     * length: 256 characters. Valid characters: Unicode letters, digits, white space,
     * _ . / = + - % @</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
