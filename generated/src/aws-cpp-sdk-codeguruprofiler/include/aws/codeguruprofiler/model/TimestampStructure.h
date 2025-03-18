/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> A data type that contains a <code>Timestamp</code> object. This is specified
   * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
   * millisecond past June 1, 2020 1:15:02 PM UTC. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/TimestampStructure">AWS
   * API Reference</a></p>
   */
  class TimestampStructure
  {
  public:
    AWS_CODEGURUPROFILER_API TimestampStructure() = default;
    AWS_CODEGURUPROFILER_API TimestampStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API TimestampStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A <code>Timestamp</code>. This is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::DateTime>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::DateTime>
    TimestampStructure& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_value{};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
