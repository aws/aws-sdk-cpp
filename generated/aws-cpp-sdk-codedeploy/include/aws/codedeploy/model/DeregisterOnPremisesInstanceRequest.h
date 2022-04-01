﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeregisterOnPremisesInstance</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstanceInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeregisterOnPremisesInstanceRequest : public CodeDeployRequest
  {
  public:
    DeregisterOnPremisesInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterOnPremisesInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline DeregisterOnPremisesInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline DeregisterOnPremisesInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the on-premises instance to deregister.</p>
     */
    inline DeregisterOnPremisesInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
