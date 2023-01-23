/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DataRetrievalRule
  {
  public:
    AWS_GLACIER_API DataRetrievalRule();
    AWS_GLACIER_API DataRetrievalRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API DataRetrievalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_strategyHasBeenSet = false;

    long long m_bytesPerHour;
    bool m_bytesPerHourHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
