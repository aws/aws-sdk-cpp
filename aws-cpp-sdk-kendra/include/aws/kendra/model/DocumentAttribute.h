/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DocumentAttributeValue.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A document attribute or metadata field. To create custom document attributes,
   * see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-attributes.html">Custom
   * attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttribute">AWS
   * API Reference</a></p>
   */
  class DocumentAttribute
  {
  public:
    AWS_KENDRA_API DocumentAttribute();
    AWS_KENDRA_API DocumentAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the attribute.</p>
     */
    inline const DocumentAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const DocumentAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(DocumentAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline DocumentAttribute& WithValue(const DocumentAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline DocumentAttribute& WithValue(DocumentAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    DocumentAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
