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
    AWS_IOT_API Bucket();
    AWS_IOT_API Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline Bucket& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline Bucket& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value counted for the particular bucket.</p>
     */
    inline Bucket& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    /**
     * <p>The number of documents that have the value counted for the particular
     * bucket.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of documents that have the value counted for the particular
     * bucket.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of documents that have the value counted for the particular
     * bucket.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of documents that have the value counted for the particular
     * bucket.</p>
     */
    inline Bucket& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
