/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The <code>RunTask</code> request could not be processed due to conflicts. The
   * provided <code>clientToken</code> is already in use with a different
   * <code>RunTask</code> request. The <code>resourceIds</code> are the existing task
   * ARNs which are already associated with the <code>clientToken</code>. </p> <p>To
   * fix this issue:</p> <ul> <li> <p>Run <code>RunTask</code> with a unique
   * <code>clientToken</code>.</p> </li> <li> <p>Run <code>RunTask</code> with the
   * <code>clientToken</code> and the original set of parameters</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_ECS_API ConflictException();
    AWS_ECS_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline ConflictException& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline ConflictException& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline ConflictException& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline ConflictException& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The existing task ARNs which are already associated with the
     * <code>clientToken</code>.</p>
     */
    inline ConflictException& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
