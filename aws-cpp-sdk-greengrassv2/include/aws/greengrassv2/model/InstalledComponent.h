/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/InstalledComponentLifecycleState.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a component on a AWS IoT Greengrass core
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/InstalledComponent">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASSV2_API InstalledComponent
  {
  public:
    InstalledComponent();
    InstalledComponent(Aws::Utils::Json::JsonView jsonValue);
    InstalledComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline InstalledComponent& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline InstalledComponent& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline InstalledComponent& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p>
     */
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline InstalledComponent& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline InstalledComponent& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline InstalledComponent& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline const InstalledComponentLifecycleState& GetLifecycleState() const{ return m_lifecycleState; }

    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }

    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline void SetLifecycleState(const InstalledComponentLifecycleState& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }

    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline void SetLifecycleState(InstalledComponentLifecycleState&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::move(value); }

    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline InstalledComponent& WithLifecycleState(const InstalledComponentLifecycleState& value) { SetLifecycleState(value); return *this;}

    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline InstalledComponent& WithLifecycleState(InstalledComponentLifecycleState&& value) { SetLifecycleState(std::move(value)); return *this;}


    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline const Aws::String& GetLifecycleStateDetails() const{ return m_lifecycleStateDetails; }

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline bool LifecycleStateDetailsHasBeenSet() const { return m_lifecycleStateDetailsHasBeenSet; }

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline void SetLifecycleStateDetails(const Aws::String& value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails = value; }

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline void SetLifecycleStateDetails(Aws::String&& value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails = std::move(value); }

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline void SetLifecycleStateDetails(const char* value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails.assign(value); }

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline InstalledComponent& WithLifecycleStateDetails(const Aws::String& value) { SetLifecycleStateDetails(value); return *this;}

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline InstalledComponent& WithLifecycleStateDetails(Aws::String&& value) { SetLifecycleStateDetails(std::move(value)); return *this;}

    /**
     * <p>The details about the lifecycle state of the component.</p>
     */
    inline InstalledComponent& WithLifecycleStateDetails(const char* value) { SetLifecycleStateDetails(value); return *this;}


    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline bool GetIsRoot() const{ return m_isRoot; }

    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline bool IsRootHasBeenSet() const { return m_isRootHasBeenSet; }

    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline void SetIsRoot(bool value) { m_isRootHasBeenSet = true; m_isRoot = value; }

    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline InstalledComponent& WithIsRoot(bool value) { SetIsRoot(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet;

    InstalledComponentLifecycleState m_lifecycleState;
    bool m_lifecycleStateHasBeenSet;

    Aws::String m_lifecycleStateDetails;
    bool m_lifecycleStateDetailsHasBeenSet;

    bool m_isRoot;
    bool m_isRootHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
