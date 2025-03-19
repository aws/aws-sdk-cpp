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
    AWS_EFS_API ResourceIdPreference() = default;
    AWS_EFS_API ResourceIdPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ResourceIdPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the EFS resource ID preference, either <code>LONG_ID</code> (17
     * characters) or <code>SHORT_ID</code> (8 characters).</p>
     */
    inline ResourceIdType GetResourceIdType() const { return m_resourceIdType; }
    inline bool ResourceIdTypeHasBeenSet() const { return m_resourceIdTypeHasBeenSet; }
    inline void SetResourceIdType(ResourceIdType value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = value; }
    inline ResourceIdPreference& WithResourceIdType(ResourceIdType value) { SetResourceIdType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon EFS resources to which the ID preference setting
     * applies, <code>FILE_SYSTEM</code> and <code>MOUNT_TARGET</code>.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    ResourceIdPreference& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    inline ResourceIdPreference& AddResources(Resource value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    ///@}
  private:

    ResourceIdType m_resourceIdType{ResourceIdType::NOT_SET};
    bool m_resourceIdTypeHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
