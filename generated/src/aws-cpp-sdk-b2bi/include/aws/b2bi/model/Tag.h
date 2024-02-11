/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Creates a key-value pair for a specific resource. Tags are metadata that you
   * can use to search for and group a resource for various purposes. You can apply
   * tags to capabilities, partnerships, profiles and transformers. A tag key can
   * take more than one value. For example, to group capabilities for accounting
   * purposes, you might create a tag called <code>Group</code> and assign the values
   * <code>Research</code> and <code>Accounting</code> to that group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_B2BI_API Tag();
    AWS_B2BI_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the name assigned to the tag that you create.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Contains one or more values that you assigned to the key name that you
     * create.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
