﻿/**
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
  class AWS_OPSWORKS_API DeregisterRdsDbInstanceRequest : public OpsWorksRequest
  {
  public:
    DeregisterRdsDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterRdsDbInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}

  private:

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
