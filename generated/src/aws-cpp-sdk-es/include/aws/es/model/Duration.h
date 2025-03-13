/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/TimeUnit.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies maintenance schedule duration: duration value and duration unit.
   * See the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
   * target="_blank">Developer Guide</a> for more information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/Duration">AWS API
   * Reference</a></p>
   */
  class Duration
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API Duration() = default;
    AWS_ELASTICSEARCHSERVICE_API Duration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Integer to specify the value of a maintenance schedule duration. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the unit of a maintenance schedule duration. Valid value is HOURS.
     * See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline TimeUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(TimeUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Duration& WithUnit(TimeUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    long long m_value{0};
    bool m_valueHasBeenSet = false;

    TimeUnit m_unit{TimeUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
