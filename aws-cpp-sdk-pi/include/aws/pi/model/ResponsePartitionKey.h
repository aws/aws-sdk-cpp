/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>If <code>PartitionBy</code> was specified in a
   * <code>DescribeDimensionKeys</code> request, the dimensions are returned in an
   * array. Each element in the array specifies one dimension. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ResponsePartitionKey">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API ResponsePartitionKey
  {
  public:
    ResponsePartitionKey();
    ResponsePartitionKey(Aws::Utils::Json::JsonView jsonValue);
    ResponsePartitionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimension(s) for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
