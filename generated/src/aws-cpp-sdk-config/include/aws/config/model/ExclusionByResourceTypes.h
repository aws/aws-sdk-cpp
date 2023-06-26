/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Specifies whether the configuration recorder excludes resource types from
   * being recorded. Use the <code>resourceTypes</code> field to enter a
   * comma-separated list of resource types to exclude as exemptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ExclusionByResourceTypes">AWS
   * API Reference</a></p>
   */
  class ExclusionByResourceTypes
  {
  public:
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes();
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline ExclusionByResourceTypes& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline ExclusionByResourceTypes& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline ExclusionByResourceTypes& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline ExclusionByResourceTypes& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
