﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>The metadata that you apply to a resource to help you categorize and organize
   * them. Each tag consists of a key and an optional value. You define both. Tag
   * keys can have a maximum character length of 128 characters, and tag values can
   * have a maximum length of 256 characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_ECRPUBLIC_API Tag() = default;
    AWS_ECRPUBLIC_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Tag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Tag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
