/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>A key-value pair that adds as a metadata to a resource used by Amazon
   * Translate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_TRANSLATE_API Tag();
    AWS_TRANSLATE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
