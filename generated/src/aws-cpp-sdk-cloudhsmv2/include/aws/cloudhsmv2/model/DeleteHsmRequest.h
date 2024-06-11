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
    AWS_CLOUDHSMV2_API DeleteHsmRequest();

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
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline DeleteHsmRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline DeleteHsmRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline DeleteHsmRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }
    inline void SetHsmId(const Aws::String& value) { m_hsmIdHasBeenSet = true; m_hsmId = value; }
    inline void SetHsmId(Aws::String&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::move(value); }
    inline void SetHsmId(const char* value) { m_hsmIdHasBeenSet = true; m_hsmId.assign(value); }
    inline DeleteHsmRequest& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}
    inline DeleteHsmRequest& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}
    inline DeleteHsmRequest& WithHsmId(const char* value) { SetHsmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    inline void SetEniId(const Aws::String& value) { m_eniIdHasBeenSet = true; m_eniId = value; }
    inline void SetEniId(Aws::String&& value) { m_eniIdHasBeenSet = true; m_eniId = std::move(value); }
    inline void SetEniId(const char* value) { m_eniIdHasBeenSet = true; m_eniId.assign(value); }
    inline DeleteHsmRequest& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}
    inline DeleteHsmRequest& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}
    inline DeleteHsmRequest& WithEniId(const char* value) { SetEniId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }
    inline DeleteHsmRequest& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}
    inline DeleteHsmRequest& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}
    inline DeleteHsmRequest& WithEniIp(const char* value) { SetEniIp(value); return *this;}
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
