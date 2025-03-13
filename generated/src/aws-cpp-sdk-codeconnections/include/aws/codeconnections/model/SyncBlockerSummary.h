/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeconnections/model/SyncBlocker.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>A summary for sync blockers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/SyncBlockerSummary">AWS
   * API Reference</a></p>
   */
  class SyncBlockerSummary
  {
  public:
    AWS_CODECONNECTIONS_API SyncBlockerSummary() = default;
    AWS_CODECONNECTIONS_API SyncBlockerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API SyncBlockerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource name for sync blocker summary.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    SyncBlockerSummary& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource name for a sync blocker summary.</p>
     */
    inline const Aws::String& GetParentResourceName() const { return m_parentResourceName; }
    inline bool ParentResourceNameHasBeenSet() const { return m_parentResourceNameHasBeenSet; }
    template<typename ParentResourceNameT = Aws::String>
    void SetParentResourceName(ParentResourceNameT&& value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName = std::forward<ParentResourceNameT>(value); }
    template<typename ParentResourceNameT = Aws::String>
    SyncBlockerSummary& WithParentResourceName(ParentResourceNameT&& value) { SetParentResourceName(std::forward<ParentResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest events for a sync blocker summary.</p>
     */
    inline const Aws::Vector<SyncBlocker>& GetLatestBlockers() const { return m_latestBlockers; }
    inline bool LatestBlockersHasBeenSet() const { return m_latestBlockersHasBeenSet; }
    template<typename LatestBlockersT = Aws::Vector<SyncBlocker>>
    void SetLatestBlockers(LatestBlockersT&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers = std::forward<LatestBlockersT>(value); }
    template<typename LatestBlockersT = Aws::Vector<SyncBlocker>>
    SyncBlockerSummary& WithLatestBlockers(LatestBlockersT&& value) { SetLatestBlockers(std::forward<LatestBlockersT>(value)); return *this;}
    template<typename LatestBlockersT = SyncBlocker>
    SyncBlockerSummary& AddLatestBlockers(LatestBlockersT&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers.emplace_back(std::forward<LatestBlockersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_parentResourceName;
    bool m_parentResourceNameHasBeenSet = false;

    Aws::Vector<SyncBlocker> m_latestBlockers;
    bool m_latestBlockersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
