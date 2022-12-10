/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/TimestreamDestination.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Destination details to write data for a target data source. Current supported
   * data source is Timestream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TargetDestination">AWS
   * API Reference</a></p>
   */
  class TargetDestination
  {
  public:
    AWS_TIMESTREAMQUERY_API TargetDestination();
    AWS_TIMESTREAMQUERY_API TargetDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TargetDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline const TimestreamDestination& GetTimestreamDestination() const{ return m_timestreamDestination; }

    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline bool TimestreamDestinationHasBeenSet() const { return m_timestreamDestinationHasBeenSet; }

    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline void SetTimestreamDestination(const TimestreamDestination& value) { m_timestreamDestinationHasBeenSet = true; m_timestreamDestination = value; }

    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline void SetTimestreamDestination(TimestreamDestination&& value) { m_timestreamDestinationHasBeenSet = true; m_timestreamDestination = std::move(value); }

    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline TargetDestination& WithTimestreamDestination(const TimestreamDestination& value) { SetTimestreamDestination(value); return *this;}

    /**
     * <p>Query result destination details for Timestream data source.</p>
     */
    inline TargetDestination& WithTimestreamDestination(TimestreamDestination&& value) { SetTimestreamDestination(std::move(value)); return *this;}

  private:

    TimestreamDestination m_timestreamDestination;
    bool m_timestreamDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
