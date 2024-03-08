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
   * <p>Used to specify the configuration options for an FSx for ONTAP volume's
   * storage aggregate or aggregates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateAggregateConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateAggregateConfiguration
  {
  public:
    AWS_FSX_API CreateAggregateConfiguration();
    AWS_FSX_API CreateAggregateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateAggregateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAggregates() const{ return m_aggregates; }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline bool AggregatesHasBeenSet() const { return m_aggregatesHasBeenSet; }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline void SetAggregates(const Aws::Vector<Aws::String>& value) { m_aggregatesHasBeenSet = true; m_aggregates = value; }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline void SetAggregates(Aws::Vector<Aws::String>&& value) { m_aggregatesHasBeenSet = true; m_aggregates = std::move(value); }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline CreateAggregateConfiguration& WithAggregates(const Aws::Vector<Aws::String>& value) { SetAggregates(value); return *this;}

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline CreateAggregateConfiguration& WithAggregates(Aws::Vector<Aws::String>&& value) { SetAggregates(std::move(value)); return *this;}

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline CreateAggregateConfiguration& AddAggregates(const Aws::String& value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(value); return *this; }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline CreateAggregateConfiguration& AddAggregates(Aws::String&& value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(std::move(value)); return *this; }

    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline CreateAggregateConfiguration& AddAggregates(const char* value) { m_aggregatesHasBeenSet = true; m_aggregates.push_back(value); return *this; }


    /**
     * <p>Used to explicitly set the number of constituents within the FlexGroup per
     * storage aggregate. This field is optional when creating a FlexGroup volume. If
     * unspecified, the default value will be 8. This field cannot be provided when
     * creating a FlexVol volume.</p>
     */
    inline int GetConstituentsPerAggregate() const{ return m_constituentsPerAggregate; }

    /**
     * <p>Used to explicitly set the number of constituents within the FlexGroup per
     * storage aggregate. This field is optional when creating a FlexGroup volume. If
     * unspecified, the default value will be 8. This field cannot be provided when
     * creating a FlexVol volume.</p>
     */
    inline bool ConstituentsPerAggregateHasBeenSet() const { return m_constituentsPerAggregateHasBeenSet; }

    /**
     * <p>Used to explicitly set the number of constituents within the FlexGroup per
     * storage aggregate. This field is optional when creating a FlexGroup volume. If
     * unspecified, the default value will be 8. This field cannot be provided when
     * creating a FlexVol volume.</p>
     */
    inline void SetConstituentsPerAggregate(int value) { m_constituentsPerAggregateHasBeenSet = true; m_constituentsPerAggregate = value; }

    /**
     * <p>Used to explicitly set the number of constituents within the FlexGroup per
     * storage aggregate. This field is optional when creating a FlexGroup volume. If
     * unspecified, the default value will be 8. This field cannot be provided when
     * creating a FlexVol volume.</p>
     */
    inline CreateAggregateConfiguration& WithConstituentsPerAggregate(int value) { SetConstituentsPerAggregate(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_aggregates;
    bool m_aggregatesHasBeenSet = false;

    int m_constituentsPerAggregate;
    bool m_constituentsPerAggregateHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
