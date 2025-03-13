/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class CancelJobRunRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API CancelJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJobRun"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the job run to cancel.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CancelJobRunRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual cluster for which the job run will be canceled.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const { return m_virtualClusterId; }
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }
    template<typename VirtualClusterIdT = Aws::String>
    void SetVirtualClusterId(VirtualClusterIdT&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::forward<VirtualClusterIdT>(value); }
    template<typename VirtualClusterIdT = Aws::String>
    CancelJobRunRequest& WithVirtualClusterId(VirtualClusterIdT&& value) { SetVirtualClusterId(std::forward<VirtualClusterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
