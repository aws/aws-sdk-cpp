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
#include <aws/opsworks/model/InstancesCount.h>
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
   * <p>Summarizes the number of layers, instances, and apps in a
   * stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StackSummary">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API StackSummary
  {
  public:
    StackSummary();
    StackSummary(Aws::Utils::Json::JsonView jsonValue);
    StackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline StackSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline StackSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline StackSummary& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The stack name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The stack name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The stack name.</p>
     */
    inline StackSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline StackSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The stack name.</p>
     */
    inline StackSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The stack's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The stack's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The stack's ARN.</p>
     */
    inline StackSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The stack's ARN.</p>
     */
    inline StackSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The stack's ARN.</p>
     */
    inline StackSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The number of layers.</p>
     */
    inline int GetLayersCount() const{ return m_layersCount; }

    /**
     * <p>The number of layers.</p>
     */
    inline bool LayersCountHasBeenSet() const { return m_layersCountHasBeenSet; }

    /**
     * <p>The number of layers.</p>
     */
    inline void SetLayersCount(int value) { m_layersCountHasBeenSet = true; m_layersCount = value; }

    /**
     * <p>The number of layers.</p>
     */
    inline StackSummary& WithLayersCount(int value) { SetLayersCount(value); return *this;}


    /**
     * <p>The number of apps.</p>
     */
    inline int GetAppsCount() const{ return m_appsCount; }

    /**
     * <p>The number of apps.</p>
     */
    inline bool AppsCountHasBeenSet() const { return m_appsCountHasBeenSet; }

    /**
     * <p>The number of apps.</p>
     */
    inline void SetAppsCount(int value) { m_appsCountHasBeenSet = true; m_appsCount = value; }

    /**
     * <p>The number of apps.</p>
     */
    inline StackSummary& WithAppsCount(int value) { SetAppsCount(value); return *this;}


    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline const InstancesCount& GetInstancesCount() const{ return m_instancesCount; }

    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline bool InstancesCountHasBeenSet() const { return m_instancesCountHasBeenSet; }

    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline void SetInstancesCount(const InstancesCount& value) { m_instancesCountHasBeenSet = true; m_instancesCount = value; }

    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline void SetInstancesCount(InstancesCount&& value) { m_instancesCountHasBeenSet = true; m_instancesCount = std::move(value); }

    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline StackSummary& WithInstancesCount(const InstancesCount& value) { SetInstancesCount(value); return *this;}

    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline StackSummary& WithInstancesCount(InstancesCount&& value) { SetInstancesCount(std::move(value)); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    int m_layersCount;
    bool m_layersCountHasBeenSet;

    int m_appsCount;
    bool m_appsCountHasBeenSet;

    InstancesCount m_instancesCount;
    bool m_instancesCountHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
