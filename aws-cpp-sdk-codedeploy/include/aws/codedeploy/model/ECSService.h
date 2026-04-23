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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Contains the service and cluster names used to identify an Amazon ECS
   * deployment's target. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ECSService">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ECSService
  {
  public:
    ECSService();
    ECSService(Aws::Utils::Json::JsonView jsonValue);
    ECSService& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline ECSService& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline ECSService& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p> The name of the target Amazon ECS service. </p>
     */
    inline ECSService& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline ECSService& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline ECSService& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p> The name of the cluster that the Amazon ECS service is associated with. </p>
     */
    inline ECSService& WithClusterName(const char* value) { SetClusterName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
