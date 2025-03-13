/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details on when data collection began for a source package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/TimestampForCollection">AWS
   * API Reference</a></p>
   */
  class TimestampForCollection
  {
  public:
    AWS_DETECTIVE_API TimestampForCollection() = default;
    AWS_DETECTIVE_API TimestampForCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API TimestampForCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data and time when data collection began for a source package. The value
     * is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    TimestampForCollection& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
