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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionStatus.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to list an environment's upcoming and in-progress managed
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeEnvironmentManagedActionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the target environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the target environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the target environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the target environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline DescribeEnvironmentManagedActionsRequest& WithStatus(ActionStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    ActionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
