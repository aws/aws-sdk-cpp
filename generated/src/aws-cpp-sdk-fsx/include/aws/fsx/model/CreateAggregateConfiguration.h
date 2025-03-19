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
    AWS_FSX_API CreateAggregateConfiguration() = default;
    AWS_FSX_API CreateAggregateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateAggregateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to specify the names of aggregates on which the volume will be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAggregates() const { return m_aggregates; }
    inline bool AggregatesHasBeenSet() const { return m_aggregatesHasBeenSet; }
    template<typename AggregatesT = Aws::Vector<Aws::String>>
    void SetAggregates(AggregatesT&& value) { m_aggregatesHasBeenSet = true; m_aggregates = std::forward<AggregatesT>(value); }
    template<typename AggregatesT = Aws::Vector<Aws::String>>
    CreateAggregateConfiguration& WithAggregates(AggregatesT&& value) { SetAggregates(std::forward<AggregatesT>(value)); return *this;}
    template<typename AggregatesT = Aws::String>
    CreateAggregateConfiguration& AddAggregates(AggregatesT&& value) { m_aggregatesHasBeenSet = true; m_aggregates.emplace_back(std::forward<AggregatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used to explicitly set the number of constituents within the FlexGroup per
     * storage aggregate. This field is optional when creating a FlexGroup volume. If
     * unspecified, the default value will be 8. This field cannot be provided when
     * creating a FlexVol volume.</p>
     */
    inline int GetConstituentsPerAggregate() const { return m_constituentsPerAggregate; }
    inline bool ConstituentsPerAggregateHasBeenSet() const { return m_constituentsPerAggregateHasBeenSet; }
    inline void SetConstituentsPerAggregate(int value) { m_constituentsPerAggregateHasBeenSet = true; m_constituentsPerAggregate = value; }
    inline CreateAggregateConfiguration& WithConstituentsPerAggregate(int value) { SetConstituentsPerAggregate(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_aggregates;
    bool m_aggregatesHasBeenSet = false;

    int m_constituentsPerAggregate{0};
    bool m_constituentsPerAggregateHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
