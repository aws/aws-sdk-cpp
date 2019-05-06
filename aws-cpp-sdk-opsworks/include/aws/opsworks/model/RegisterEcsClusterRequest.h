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
  class AWS_OPSWORKS_API RegisterEcsClusterRequest : public OpsWorksRequest
  {
  public:
    RegisterEcsClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterEcsCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterRequest& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterRequest& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterRequest& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterEcsClusterRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterEcsClusterRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterEcsClusterRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
