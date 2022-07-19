/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ResourcePermission.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about the resource that is being monitored, including the name
   * of the resource, the type of resource, and whether or not permission is given to
   * DevOps Guru to access that resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/MonitoredResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API MonitoredResourceIdentifier
  {
  public:
    MonitoredResourceIdentifier();
    MonitoredResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    MonitoredResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline const Aws::String& GetMonitoredResourceName() const{ return m_monitoredResourceName; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(const Aws::String& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = value; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(Aws::String&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::move(value); }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(const char* value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName.assign(value); }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(const Aws::String& value) { SetMonitoredResourceName(value); return *this;}

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(Aws::String&& value) { SetMonitoredResourceName(std::move(value)); return *this;}

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(const char* value) { SetMonitoredResourceName(value); return *this;}


    /**
     * <p> The type of resource being monitored. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> The permission status of a resource. </p>
     */
    inline const ResourcePermission& GetResourcePermission() const{ return m_resourcePermission; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline bool ResourcePermissionHasBeenSet() const { return m_resourcePermissionHasBeenSet; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline void SetResourcePermission(const ResourcePermission& value) { m_resourcePermissionHasBeenSet = true; m_resourcePermission = value; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline void SetResourcePermission(ResourcePermission&& value) { m_resourcePermissionHasBeenSet = true; m_resourcePermission = std::move(value); }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline MonitoredResourceIdentifier& WithResourcePermission(const ResourcePermission& value) { SetResourcePermission(value); return *this;}

    /**
     * <p> The permission status of a resource. </p>
     */
    inline MonitoredResourceIdentifier& WithResourcePermission(ResourcePermission&& value) { SetResourcePermission(std::move(value)); return *this;}

  private:

    Aws::String m_monitoredResourceName;
    bool m_monitoredResourceNameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    ResourcePermission m_resourcePermission;
    bool m_resourcePermissionHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
