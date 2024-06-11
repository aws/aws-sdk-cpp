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
   * <p>A key-value pair that describes a property of a pipeline object. The value is
   * specified as either a string value (<code>StringValue</code>) or a reference to
   * another object (<code>RefValue</code>) but not as both.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Field">AWS
   * API Reference</a></p>
   */
  class Field
  {
  public:
    AWS_DATAPIPELINE_API Field();
    AWS_DATAPIPELINE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field identifier.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Field& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Field& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Field& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline Field& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline Field& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline Field& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value, expressed as the identifier of another object.</p>
     */
    inline const Aws::String& GetRefValue() const{ return m_refValue; }
    inline bool RefValueHasBeenSet() const { return m_refValueHasBeenSet; }
    inline void SetRefValue(const Aws::String& value) { m_refValueHasBeenSet = true; m_refValue = value; }
    inline void SetRefValue(Aws::String&& value) { m_refValueHasBeenSet = true; m_refValue = std::move(value); }
    inline void SetRefValue(const char* value) { m_refValueHasBeenSet = true; m_refValue.assign(value); }
    inline Field& WithRefValue(const Aws::String& value) { SetRefValue(value); return *this;}
    inline Field& WithRefValue(Aws::String&& value) { SetRefValue(std::move(value)); return *this;}
    inline Field& WithRefValue(const char* value) { SetRefValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::String m_refValue;
    bool m_refValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
