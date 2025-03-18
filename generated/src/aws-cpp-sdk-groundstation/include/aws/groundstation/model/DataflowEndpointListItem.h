/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Item in a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointListItem">AWS
   * API Reference</a></p>
   */
  class DataflowEndpointListItem
  {
  public:
    AWS_GROUNDSTATION_API DataflowEndpointListItem() = default;
    AWS_GROUNDSTATION_API DataflowEndpointListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpointListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const { return m_dataflowEndpointGroupArn; }
    inline bool DataflowEndpointGroupArnHasBeenSet() const { return m_dataflowEndpointGroupArnHasBeenSet; }
    template<typename DataflowEndpointGroupArnT = Aws::String>
    void SetDataflowEndpointGroupArn(DataflowEndpointGroupArnT&& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = std::forward<DataflowEndpointGroupArnT>(value); }
    template<typename DataflowEndpointGroupArnT = Aws::String>
    DataflowEndpointListItem& WithDataflowEndpointGroupArn(DataflowEndpointGroupArnT&& value) { SetDataflowEndpointGroupArn(std::forward<DataflowEndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const { return m_dataflowEndpointGroupId; }
    inline bool DataflowEndpointGroupIdHasBeenSet() const { return m_dataflowEndpointGroupIdHasBeenSet; }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    void SetDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::forward<DataflowEndpointGroupIdT>(value); }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    DataflowEndpointListItem& WithDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { SetDataflowEndpointGroupId(std::forward<DataflowEndpointGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataflowEndpointGroupArn;
    bool m_dataflowEndpointGroupArnHasBeenSet = false;

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
