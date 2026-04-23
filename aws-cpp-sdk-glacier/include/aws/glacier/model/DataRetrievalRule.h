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
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Data retrieval policy rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DataRetrievalRule">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API DataRetrievalRule
  {
  public:
    DataRetrievalRule();
    DataRetrievalRule(Aws::Utils::Json::JsonView jsonValue);
    DataRetrievalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline const Aws::String& GetStrategy() const{ return m_strategy; }

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline void SetStrategy(const Aws::String& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline void SetStrategy(Aws::String&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline void SetStrategy(const char* value) { m_strategyHasBeenSet = true; m_strategy.assign(value); }

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline DataRetrievalRule& WithStrategy(const Aws::String& value) { SetStrategy(value); return *this;}

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline DataRetrievalRule& WithStrategy(Aws::String&& value) { SetStrategy(std::move(value)); return *this;}

    /**
     * <p>The type of data retrieval policy to set.</p> <p>Valid values:
     * BytesPerHour|FreeTier|None</p>
     */
    inline DataRetrievalRule& WithStrategy(const char* value) { SetStrategy(value); return *this;}


    /**
     * <p>The maximum number of bytes that can be retrieved in an hour.</p> <p>This
     * field is required only if the value of the Strategy field is
     * <code>BytesPerHour</code>. Your PUT operation will be rejected if the Strategy
     * field is not set to <code>BytesPerHour</code> and you set this field.</p>
     */
    inline long long GetBytesPerHour() const{ return m_bytesPerHour; }

    /**
     * <p>The maximum number of bytes that can be retrieved in an hour.</p> <p>This
     * field is required only if the value of the Strategy field is
     * <code>BytesPerHour</code>. Your PUT operation will be rejected if the Strategy
     * field is not set to <code>BytesPerHour</code> and you set this field.</p>
     */
    inline bool BytesPerHourHasBeenSet() const { return m_bytesPerHourHasBeenSet; }

    /**
     * <p>The maximum number of bytes that can be retrieved in an hour.</p> <p>This
     * field is required only if the value of the Strategy field is
     * <code>BytesPerHour</code>. Your PUT operation will be rejected if the Strategy
     * field is not set to <code>BytesPerHour</code> and you set this field.</p>
     */
    inline void SetBytesPerHour(long long value) { m_bytesPerHourHasBeenSet = true; m_bytesPerHour = value; }

    /**
     * <p>The maximum number of bytes that can be retrieved in an hour.</p> <p>This
     * field is required only if the value of the Strategy field is
     * <code>BytesPerHour</code>. Your PUT operation will be rejected if the Strategy
     * field is not set to <code>BytesPerHour</code> and you set this field.</p>
     */
    inline DataRetrievalRule& WithBytesPerHour(long long value) { SetBytesPerHour(value); return *this;}

  private:

    Aws::String m_strategy;
    bool m_strategyHasBeenSet;

    long long m_bytesPerHour;
    bool m_bytesPerHourHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
