/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class DeleteHsmRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API DeleteHsmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHsm"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    DeleteHsmRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline const Aws::String& GetHsmId() const { return m_hsmId; }
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }
    template<typename HsmIdT = Aws::String>
    void SetHsmId(HsmIdT&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::forward<HsmIdT>(value); }
    template<typename HsmIdT = Aws::String>
    DeleteHsmRequest& WithHsmId(HsmIdT&& value) { SetHsmId(std::forward<HsmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline const Aws::String& GetEniId() const { return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    template<typename EniIdT = Aws::String>
    void SetEniId(EniIdT&& value) { m_eniIdHasBeenSet = true; m_eniId = std::forward<EniIdT>(value); }
    template<typename EniIdT = Aws::String>
    DeleteHsmRequest& WithEniId(EniIdT&& value) { SetEniId(std::forward<EniIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline const Aws::String& GetEniIp() const { return m_eniIp; }
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }
    template<typename EniIpT = Aws::String>
    void SetEniIp(EniIpT&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::forward<EniIpT>(value); }
    template<typename EniIpT = Aws::String>
    DeleteHsmRequest& WithEniIp(EniIpT&& value) { SetEniIp(std::forward<EniIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_hsmId;
    bool m_hsmIdHasBeenSet = false;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet = false;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
