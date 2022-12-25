/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ResourceStatusValue.h>
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
   * <p>A structure that identifies the current group membership status for a
   * resource. Adding a resource to a resource group is performed asynchronously as a
   * background task. A <code>PENDING</code> status indicates, for this resource,
   * that the process isn't completed yet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceStatus">AWS
   * API Reference</a></p>
   */
  class ResourceStatus
  {
  public:
    AWS_RESOURCEGROUPS_API ResourceStatus();
    AWS_RESOURCEGROUPS_API ResourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ResourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status.</p>
     */
    inline const ResourceStatusValue& GetName() const{ return m_name; }

    /**
     * <p>The current status.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The current status.</p>
     */
    inline void SetName(const ResourceStatusValue& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The current status.</p>
     */
    inline void SetName(ResourceStatusValue&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The current status.</p>
     */
    inline ResourceStatus& WithName(const ResourceStatusValue& value) { SetName(value); return *this;}

    /**
     * <p>The current status.</p>
     */
    inline ResourceStatus& WithName(ResourceStatusValue&& value) { SetName(std::move(value)); return *this;}

  private:

    ResourceStatusValue m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
