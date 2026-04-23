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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a registered Amazon ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EcsCluster">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API EcsCluster
  {
  public:
    EcsCluster();
    EcsCluster(Aws::Utils::Json::JsonView jsonValue);
    EcsCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EcsCluster& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline EcsCluster& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline EcsCluster& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}


    /**
     * <p>The cluster name.</p>
     */
    inline const Aws::String& GetEcsClusterName() const{ return m_ecsClusterName; }

    /**
     * <p>The cluster name.</p>
     */
    inline bool EcsClusterNameHasBeenSet() const { return m_ecsClusterNameHasBeenSet; }

    /**
     * <p>The cluster name.</p>
     */
    inline void SetEcsClusterName(const Aws::String& value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName = value; }

    /**
     * <p>The cluster name.</p>
     */
    inline void SetEcsClusterName(Aws::String&& value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName = std::move(value); }

    /**
     * <p>The cluster name.</p>
     */
    inline void SetEcsClusterName(const char* value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName.assign(value); }

    /**
     * <p>The cluster name.</p>
     */
    inline EcsCluster& WithEcsClusterName(const Aws::String& value) { SetEcsClusterName(value); return *this;}

    /**
     * <p>The cluster name.</p>
     */
    inline EcsCluster& WithEcsClusterName(Aws::String&& value) { SetEcsClusterName(std::move(value)); return *this;}

    /**
     * <p>The cluster name.</p>
     */
    inline EcsCluster& WithEcsClusterName(const char* value) { SetEcsClusterName(value); return *this;}


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
    inline EcsCluster& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline EcsCluster& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline EcsCluster& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline const Aws::String& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline void SetRegisteredAt(const Aws::String& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline void SetRegisteredAt(Aws::String&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline void SetRegisteredAt(const char* value) { m_registeredAtHasBeenSet = true; m_registeredAt.assign(value); }

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline EcsCluster& WithRegisteredAt(const Aws::String& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline EcsCluster& WithRegisteredAt(Aws::String&& value) { SetRegisteredAt(std::move(value)); return *this;}

    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline EcsCluster& WithRegisteredAt(const char* value) { SetRegisteredAt(value); return *this;}

  private:

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet;

    Aws::String m_ecsClusterName;
    bool m_ecsClusterNameHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_registeredAt;
    bool m_registeredAtHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
