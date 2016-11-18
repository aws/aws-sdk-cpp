﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API AssociateElasticIpRequest : public OpsWorksRequest
  {
  public:
    AssociateElasticIpRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

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
    inline AssociateElasticIpRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(value); return *this;}

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
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

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
    inline AssociateElasticIpRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline AssociateElasticIpRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:
    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
