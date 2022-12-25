/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A structure that identifies a resource that is currently pending addition to
   * the group as a member. Adding a resource to a resource group happens
   * asynchronously as a background task and this one isn't completed
   * yet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/PendingResource">AWS
   * API Reference</a></p>
   */
  class PendingResource
  {
  public:
    AWS_RESOURCEGROUPS_API PendingResource();
    AWS_RESOURCEGROUPS_API PendingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API PendingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline PendingResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline PendingResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource that's in a pending state.</p>
     */
    inline PendingResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
