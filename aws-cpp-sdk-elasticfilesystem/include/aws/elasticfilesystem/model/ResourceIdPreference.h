/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ResourceIdType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Resource.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes the resource type and its ID preference for the user's Amazon Web
   * Services account, in the current Amazon Web Services Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ResourceIdPreference">AWS
   * API Reference</a></p>
   */
  class ResourceIdPreference
  {
  public:
    AWS_EFS_API ResourceIdPreference();
    AWS_EFS_API ResourceIdPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ResourceIdPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline const ResourceIdType& GetResourceIdType() const{ return m_resourceIdType; }

    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline bool ResourceIdTypeHasBeenSet() const { return m_resourceIdTypeHasBeenSet; }

    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline void SetResourceIdType(const ResourceIdType& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = value; }

    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline void SetResourceIdType(ResourceIdType&& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = std::move(value); }

    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline ResourceIdPreference& WithResourceIdType(const ResourceIdType& value) { SetResourceIdType(value); return *this;}

    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline ResourceIdPreference& WithResourceIdType(ResourceIdType&& value) { SetResourceIdType(std::move(value)); return *this;}


    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline ResourceIdPreference& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline ResourceIdPreference& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline ResourceIdPreference& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline ResourceIdPreference& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    ResourceIdType m_resourceIdType;
    bool m_resourceIdTypeHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
