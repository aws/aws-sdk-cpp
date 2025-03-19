/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The <code>Tag</code> object represents a label that you can assign to an
   * Amazon Web Services resource. Each tag consists of a key and an optional value,
   * both of which you define.</p> <p>For more information about tags, and
   * controlling access to resources in Glue, see <a
   * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
   * Services Tags in Glue</a> and <a
   * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
   * Glue Resource ARNs</a> in the developer guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_GLUE_API Tag() = default;
    AWS_GLUE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag key. The key is required when you create a tag on an object. The key
     * is case-sensitive, and must not contain the prefix aws.</p>
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
     * <p>The tag value. The value is optional when you create a tag on an object. The
     * value is case-sensitive, and must not contain the prefix aws.</p>
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
} // namespace Glue
} // namespace Aws
