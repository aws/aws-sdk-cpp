/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDHSMV2_API DeleteHsmRequest : public CloudHSMV2Request
  {
  public:
    DeleteHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline void SetHsmId(const Aws::String& value) { m_hsmIdHasBeenSet = true; m_hsmId = value; }

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline void SetHsmId(Aws::String&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::move(value); }

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline void SetHsmId(const char* value) { m_hsmIdHasBeenSet = true; m_hsmId.assign(value); }

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline DeleteHsmRequest& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline DeleteHsmRequest& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the HSM that you are deleting.</p>
     */
    inline DeleteHsmRequest& WithHsmId(const char* value) { SetHsmId(value); return *this;}


    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline void SetEniId(const Aws::String& value) { m_eniIdHasBeenSet = true; m_eniId = value; }

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline void SetEniId(Aws::String&& value) { m_eniIdHasBeenSet = true; m_eniId = std::move(value); }

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline void SetEniId(const char* value) { m_eniIdHasBeenSet = true; m_eniId.assign(value); }

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline DeleteHsmRequest& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline DeleteHsmRequest& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the elastic network interface (ENI) of the HSM that
     * you are deleting.</p>
     */
    inline DeleteHsmRequest& WithEniId(const char* value) { SetEniId(value); return *this;}


    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the elastic network interface (ENI) of the HSM that you are
     * deleting.</p>
     */
    inline DeleteHsmRequest& WithEniIp(const char* value) { SetEniIp(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_hsmId;
    bool m_hsmIdHasBeenSet;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
