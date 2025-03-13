/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Type.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This object defines one value type that will be converted using the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-typeConverter">
   * typeConverter</a> processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TypeConverterEntry">AWS
   * API Reference</a></p>
   */
  class TypeConverterEntry
  {
  public:
    AWS_CLOUDWATCHLOGS_API TypeConverterEntry() = default;
    AWS_CLOUDWATCHLOGS_API TypeConverterEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API TypeConverterEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key with the value that is to be converted to a different type.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    TypeConverterEntry& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type to convert the field value to. Valid values are
     * <code>integer</code>, <code>double</code>, <code>string</code> and
     * <code>boolean</code>.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline TypeConverterEntry& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
