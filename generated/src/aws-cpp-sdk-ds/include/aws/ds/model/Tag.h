/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Metadata assigned to a directory consisting of a key-value
   * pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_DIRECTORYSERVICE_API Tag() = default;
    AWS_DIRECTORYSERVICE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required name of the tag. The string value can be Unicode characters and
     * cannot be prefixed with "aws:". The string can contain only the set of Unicode
     * letters, digits, white-space, '_', '.', '/', '=', '+', '-', ':', '@'(Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
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
     * <p>The optional value of the tag. The string value can be Unicode characters.
     * The string can contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-', ':', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
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
} // namespace DirectoryService
} // namespace Aws
