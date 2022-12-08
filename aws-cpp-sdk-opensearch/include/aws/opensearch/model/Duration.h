/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/TimeUnit.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The duration of a maintenance schedule. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/Duration">AWS
   * API Reference</a></p>
   */
  class Duration
  {
  public:
    AWS_OPENSEARCHSERVICE_API Duration();
    AWS_OPENSEARCHSERVICE_API Duration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Integer to specify the value of a maintenance schedule duration.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>Integer to specify the value of a maintenance schedule duration.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Integer to specify the value of a maintenance schedule duration.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Integer to specify the value of a maintenance schedule duration.</p>
     */
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}


    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline const TimeUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline void SetUnit(const TimeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline void SetUnit(TimeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline Duration& WithUnit(const TimeUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement for the duration of a maintenance schedule.</p>
     */
    inline Duration& WithUnit(TimeUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    long long m_value;
    bool m_valueHasBeenSet = false;

    TimeUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
