﻿/**
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
  class AWS_GROUNDSTATION_API DeleteDataflowEndpointGroupRequest : public GroundStationRequest
  {
  public:
    DeleteDataflowEndpointGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataflowEndpointGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const{ return m_dataflowEndpointGroupId; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline bool DataflowEndpointGroupIdHasBeenSet() const { return m_dataflowEndpointGroupIdHasBeenSet; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const Aws::String& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = value; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(Aws::String&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::move(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const char* value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId.assign(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupRequest& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupRequest& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupRequest& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}

  private:

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
