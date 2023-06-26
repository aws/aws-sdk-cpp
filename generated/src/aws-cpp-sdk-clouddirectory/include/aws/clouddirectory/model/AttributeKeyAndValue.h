/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>The combination of an attribute key and an attribute value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttributeKeyAndValue">AWS
   * API Reference</a></p>
   */
  class AttributeKeyAndValue
  {
  public:
    AWS_CLOUDDIRECTORY_API AttributeKeyAndValue();
    AWS_CLOUDDIRECTORY_API AttributeKeyAndValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API AttributeKeyAndValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the attribute.</p>
     */
    inline const AttributeKey& GetKey() const{ return m_key; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline void SetKey(const AttributeKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the attribute.</p>
     */
    inline void SetKey(AttributeKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithKey(const AttributeKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithKey(AttributeKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value of the attribute.</p>
     */
    inline const TypedAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const TypedAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(TypedAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithValue(const TypedAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeKeyAndValue& WithValue(TypedAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    AttributeKey m_key;
    bool m_keyHasBeenSet = false;

    TypedAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
