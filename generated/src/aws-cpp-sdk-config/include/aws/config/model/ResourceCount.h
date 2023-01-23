/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
   * <p>An object that contains the resource type and the number of
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceCount">AWS
   * API Reference</a></p>
   */
  class ResourceCount
  {
  public:
    AWS_CONFIGSERVICE_API ResourceCount();
    AWS_CONFIGSERVICE_API ResourceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline ResourceCount& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type (for example, <code>"AWS::EC2::Instance"</code>).</p>
     */
    inline ResourceCount& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The number of resources.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of resources.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of resources.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of resources.</p>
     */
    inline ResourceCount& WithCount(long long value) { SetCount(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
