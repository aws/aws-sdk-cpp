/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The Service Connect resource. Each configuration maps a discovery name to a
   * Cloud Map service name. The data is stored in Cloud Map as part of the Service
   * Connect configuration for each discovery name of this Amazon ECS service.</p>
   * <p>A task can resolve the <code>dnsName</code> for each of the
   * <code>clientAliases</code> of a service. However a task can't resolve the
   * discovery names. If you want to connect to a service, refer to the
   * <code>ServiceConnectConfiguration</code> of that service for the list of
   * <code>clientAliases</code> that you can use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectServiceResource">AWS
   * API Reference</a></p>
   */
  class ServiceConnectServiceResource
  {
  public:
    AWS_ECS_API ServiceConnectServiceResource();
    AWS_ECS_API ServiceConnectServiceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectServiceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline const Aws::String& GetDiscoveryName() const{ return m_discoveryName; }

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline bool DiscoveryNameHasBeenSet() const { return m_discoveryNameHasBeenSet; }

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(const Aws::String& value) { m_discoveryNameHasBeenSet = true; m_discoveryName = value; }

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(Aws::String&& value) { m_discoveryNameHasBeenSet = true; m_discoveryName = std::move(value); }

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(const char* value) { m_discoveryNameHasBeenSet = true; m_discoveryName.assign(value); }

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryName(const Aws::String& value) { SetDiscoveryName(value); return *this;}

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryName(Aws::String&& value) { SetDiscoveryName(std::move(value)); return *this;}

    /**
     * <p>The discovery name of this Service Connect resource.</p> <p>The
     * <code>discoveryName</code> is the name of the new Cloud Map service that Amazon
     * ECS creates for this Amazon ECS service. This must be unique within the Cloud
     * Map namespace. The name can contain up to 64 characters. The name can include
     * lowercase letters, numbers, underscores (_), and hyphens (-). The name can't
     * start with a hyphen.</p> <p>If this parameter isn't specified, the default value
     * of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryName(const char* value) { SetDiscoveryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline const Aws::String& GetDiscoveryArn() const{ return m_discoveryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline bool DiscoveryArnHasBeenSet() const { return m_discoveryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline void SetDiscoveryArn(const Aws::String& value) { m_discoveryArnHasBeenSet = true; m_discoveryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline void SetDiscoveryArn(Aws::String&& value) { m_discoveryArnHasBeenSet = true; m_discoveryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline void SetDiscoveryArn(const char* value) { m_discoveryArnHasBeenSet = true; m_discoveryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryArn(const Aws::String& value) { SetDiscoveryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryArn(Aws::String&& value) { SetDiscoveryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the namespace in Cloud Map that matches
     * the discovery name for this Service Connect resource. You can use this ARN in
     * other integrations with Cloud Map. However, Service Connect can't ensure
     * connectivity outside of Amazon ECS.</p>
     */
    inline ServiceConnectServiceResource& WithDiscoveryArn(const char* value) { SetDiscoveryArn(value); return *this;}

  private:

    Aws::String m_discoveryName;
    bool m_discoveryNameHasBeenSet = false;

    Aws::String m_discoveryArn;
    bool m_discoveryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
