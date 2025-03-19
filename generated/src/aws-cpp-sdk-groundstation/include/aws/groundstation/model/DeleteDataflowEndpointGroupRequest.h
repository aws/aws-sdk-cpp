/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroupRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDataflowEndpointGroupRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API DeleteDataflowEndpointGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataflowEndpointGroup"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const { return m_dataflowEndpointGroupId; }
    inline bool DataflowEndpointGroupIdHasBeenSet() const { return m_dataflowEndpointGroupIdHasBeenSet; }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    void SetDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::forward<DataflowEndpointGroupIdT>(value); }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    DeleteDataflowEndpointGroupRequest& WithDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { SetDataflowEndpointGroupId(std::forward<DataflowEndpointGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
