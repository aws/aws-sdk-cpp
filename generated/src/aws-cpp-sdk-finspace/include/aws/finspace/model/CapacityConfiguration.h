/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>A structure for the metadata of a cluster. It includes information like the
   * CPUs needed, memory of instances, and number of instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CapacityConfiguration">AWS
   * API Reference</a></p>
   */
  class CapacityConfiguration
  {
  public:
    AWS_FINSPACE_API CapacityConfiguration();
    AWS_FINSPACE_API CapacityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API CapacityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline CapacityConfiguration& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline CapacityConfiguration& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The type that determines the hardware of the host computer used for your
     * cluster instance. Each node type offers different memory and storage
     * capabilities. Choose a node type based on the requirements of the application or
     * software that you plan to run on your instance.</p> <p>You can only specify one
     * of the following values:</p> <ul> <li> <p> <code>kx.s.large</code> – The node
     * type with a configuration of 12 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.xlarge</code> – The node type with a configuration of 27 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.s.2xlarge</code> – The node type with a
     * configuration of 54 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.4xlarge</code> – The node type with a configuration of 108 GiB memory
     * and 16 vCPUs.</p> </li> <li> <p> <code>kx.s.8xlarge</code> – The node type with
     * a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.s.16xlarge</code> – The node type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.s.32xlarge</code> – The node
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> </ul>
     */
    inline CapacityConfiguration& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The number of instances running in a cluster.</p>
     */
    inline int GetNodeCount() const{ return m_nodeCount; }

    /**
     * <p>The number of instances running in a cluster.</p>
     */
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }

    /**
     * <p>The number of instances running in a cluster.</p>
     */
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }

    /**
     * <p>The number of instances running in a cluster.</p>
     */
    inline CapacityConfiguration& WithNodeCount(int value) { SetNodeCount(value); return *this;}

  private:

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_nodeCount;
    bool m_nodeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
