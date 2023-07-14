/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AggregationType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The aggregation settings that you can use to customize the output format of
   * your flow data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/AggregationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API AggregationConfig
  {
  public:
    AggregationConfig();
    AggregationConfig(Aws::Utils::Json::JsonView jsonValue);
    AggregationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }

    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }

    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline void SetAggregationType(const AggregationType& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }

    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline void SetAggregationType(AggregationType&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::move(value); }

    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline AggregationConfig& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}

    /**
     * <p> Specifies whether Amazon AppFlow aggregates the flow records into a single
     * file, or leave them unaggregated. </p>
     */
    inline AggregationConfig& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}

  private:

    AggregationType m_aggregationType;
    bool m_aggregationTypeHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
