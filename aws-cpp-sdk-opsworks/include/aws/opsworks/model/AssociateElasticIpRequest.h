/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AssociateElasticIpRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API AssociateElasticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateElasticIp"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AssociateElasticIpRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AssociateElasticIpRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AssociateElasticIpRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline AssociateElasticIpRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline AssociateElasticIpRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline AssociateElasticIpRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
