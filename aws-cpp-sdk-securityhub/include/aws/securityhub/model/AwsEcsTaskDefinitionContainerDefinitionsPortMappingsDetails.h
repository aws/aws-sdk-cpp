/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A port mapping for the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>The port number on the container instance to reserve for the container.</p>
     */
    inline int GetHostPort() const{ return m_hostPort; }

    /**
     * <p>The port number on the container instance to reserve for the container.</p>
     */
    inline bool HostPortHasBeenSet() const { return m_hostPortHasBeenSet; }

    /**
     * <p>The port number on the container instance to reserve for the container.</p>
     */
    inline void SetHostPort(int value) { m_hostPortHasBeenSet = true; m_hostPort = value; }

    /**
     * <p>The port number on the container instance to reserve for the container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithHostPort(int value) { SetHostPort(value); return *this;}


    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithProtocol(const char* value) { SetProtocol(value); return *this;}

  private:

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    int m_hostPort;
    bool m_hostPortHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
