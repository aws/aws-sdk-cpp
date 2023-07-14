﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>The attributes allowed or specified with a parameter object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ParameterAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API ParameterAttribute
  {
  public:
    ParameterAttribute();
    ParameterAttribute(Aws::Utils::Json::JsonView jsonValue);
    ParameterAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field identifier.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The field identifier.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The field identifier.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The field identifier.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The field identifier.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The field identifier.</p>
     */
    inline ParameterAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The field identifier.</p>
     */
    inline ParameterAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The field identifier.</p>
     */
    inline ParameterAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterAttribute& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterAttribute& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterAttribute& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
