/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Used to specify configuration options for a volume’s storage aggregate or
   * aggregates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AggregateConfiguration">AWS
   * API Reference</a></p>
   */
  class AggregateConfiguration
  {
  public:
    AWS_FSX_API AggregateConfiguration();
    AWS_FSX_API AggregateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API AggregateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAggregates() const{ return m_aggregates; }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline bool AggregatesHasBeenSet() const { return m_aggregatesHasBeenSet; }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline void SetAggregates(const Aws::Vector<Aws::String>& value) { m_aggregatesHasBeenSet = true; m_aggregates = value; }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline void SetAggregates(Aws::Vector<Aws::String>&& value) { m_aggregatesHasBeenSet = true; m_aggregates = std::move(value); }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline AggregateConfiguration& WithAggregates(const Aws::Vector<Aws::String>& value) { SetAggregates(value); return *this;}

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline AggregateConfiguration& WithAggregates(Aws::Vector<Aws::String>&& value) { SetAggregates(std::move(value)); return *this;}

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline AggregateConfiguration& AddAggregates(const Aws::String& value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(value); return *this; }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline AggregateConfiguration& AddAggregates(Aws::String&& value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of aggregates that this volume resides on. Aggregates are storage
     * pools which make up your primary storage tier. Each high-availability (HA) pair
     * has one aggregate. The names of the aggregates map to the names of the
     * aggregates in the ONTAP CLI and REST API. For FlexVols, there will always be a
     * single entry.</p> <p>Amazon FSx responds with an HTTP status code 400 (Bad
     * Request) for the following conditions:</p> <ul> <li> <p>The strings in the value
     * of <code>Aggregates</code> are not are not formatted as <code>aggrX</code>,
     * where X is a number between 1 and 6.</p> </li> <li> <p>The value of
     * <code>Aggregates</code> contains aggregates that are not present.</p> </li> <li>
     * <p>One or more of the aggregates supplied are too close to the volume limit to
     * support adding more volumes.</p> </li> </ul>
     */
    inline AggregateConfiguration& AddAggregates(const char* value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(value); return *this; }


    /**
     * <p>The total number of constituents this FlexGroup volume has. Not applicable
     * for FlexVols.</p>
     */
    inline int GetTotalConstituents() const{ return m_totalConstituents; }

    /**
     * <p>The total number of constituents this FlexGroup volume has. Not applicable
     * for FlexVols.</p>
     */
    inline bool TotalConstituentsHasBeenSet() const { return m_totalConstituentsHasBeenSet; }

    /**
     * <p>The total number of constituents this FlexGroup volume has. Not applicable
     * for FlexVols.</p>
     */
    inline void SetTotalConstituents(int value) { m_totalConstituentsHasBeenSet = true; m_totalConstituents = value; }

    /**
     * <p>The total number of constituents this FlexGroup volume has. Not applicable
     * for FlexVols.</p>
     */
    inline AggregateConfiguration& WithTotalConstituents(int value) { SetTotalConstituents(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_aggregates;
    bool m_aggregatesHasBeenSet = false;

    int m_totalConstituents;
    bool m_totalConstituentsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
