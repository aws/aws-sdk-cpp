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

  class AWS_EFS_API ResourceIdPreference
  {
  public:
    ResourceIdPreference();
    ResourceIdPreference(Aws::Utils::Json::JsonView jsonValue);
    ResourceIdPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceIdType& GetResourceIdType() const{ return m_resourceIdType; }

    
    inline bool ResourceIdTypeHasBeenSet() const { return m_resourceIdTypeHasBeenSet; }

    
    inline void SetResourceIdType(const ResourceIdType& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = value; }

    
    inline void SetResourceIdType(ResourceIdType&& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = std::move(value); }

    
    inline ResourceIdPreference& WithResourceIdType(const ResourceIdType& value) { SetResourceIdType(value); return *this;}

    
    inline ResourceIdPreference& WithResourceIdType(ResourceIdType&& value) { SetResourceIdType(std::move(value)); return *this;}


    
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    
    inline ResourceIdPreference& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    
    inline ResourceIdPreference& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    
    inline ResourceIdPreference& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    
    inline ResourceIdPreference& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    ResourceIdType m_resourceIdType;
    bool m_resourceIdTypeHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
