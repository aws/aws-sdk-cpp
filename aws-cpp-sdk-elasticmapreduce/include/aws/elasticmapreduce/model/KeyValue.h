﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>A key value pair.</p>
   */
  class AWS_EMR_API KeyValue
  {
  public:
    KeyValue();
    KeyValue(const Aws::Utils::Json::JsonValue& jsonValue);
    KeyValue& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline KeyValue& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline KeyValue& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>The unique identifier of a key value pair.</p>
     */
    inline KeyValue& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>The value part of the identified key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value part of the identified key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value part of the identified key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value part of the identified key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value part of the identified key.</p>
     */
    inline KeyValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value part of the identified key.</p>
     */
    inline KeyValue& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value part of the identified key.</p>
     */
    inline KeyValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
