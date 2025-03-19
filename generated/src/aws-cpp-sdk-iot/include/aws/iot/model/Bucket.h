/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A count of documents that meets a specific aggregation
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Bucket">AWS API
   * Reference</a></p>
   */
  class Bucket
  {
  public:
    AWS_IOT_API Bucket() = default;
    AWS_IOT_API Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    Bucket& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that have the value counted for the particular
     * bucket.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Bucket& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
