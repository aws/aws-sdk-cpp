/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>A key-value pair that adds as a metadata to a resource used by Amazon
   * Comprehend. For example, a tag with the key-value pair ‘Department’:’Sales’
   * might be added to a resource to indicate its use by a particular department.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_COMPREHEND_API Tag() = default;
    AWS_COMPREHEND_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The initial part of a key-value pair that forms a tag associated with a given
     * resource. For instance, if you want to show which resources are used by which
     * departments, you might use “Department” as the key portion of the pair, with
     * multiple possible values such as “sales,” “legal,” and “administration.” </p>
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
     * <p> The second part of a key-value pair that forms a tag associated with a given
     * resource. For instance, if you want to show which resources are used by which
     * departments, you might use “Department” as the initial (key) portion of the
     * pair, with a value of “sales” to indicate the sales department. </p>
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
} // namespace Comprehend
} // namespace Aws
