﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An array of objects representing the destination for a replication
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationDestination">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API ReplicationDestination
  {
  public:
    ReplicationDestination();
    ReplicationDestination(Aws::Utils::Json::JsonView jsonValue);
    ReplicationDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region to replicate to.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region to replicate to.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region to replicate to.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region to replicate to.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region to replicate to.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region to replicate to.</p>
     */
    inline ReplicationDestination& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region to replicate to.</p>
     */
    inline ReplicationDestination& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region to replicate to.</p>
     */
    inline ReplicationDestination& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline ReplicationDestination& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline ReplicationDestination& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon ECR private registry to
     * replicate to. When configuring cross-Region replication within your own
     * registry, specify your own account ID.</p>
     */
    inline ReplicationDestination& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
