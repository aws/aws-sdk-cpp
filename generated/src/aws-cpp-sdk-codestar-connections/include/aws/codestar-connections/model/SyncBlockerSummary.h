/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/SyncBlocker.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>A summary for sync blockers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/SyncBlockerSummary">AWS
   * API Reference</a></p>
   */
  class SyncBlockerSummary
  {
  public:
    AWS_CODESTARCONNECTIONS_API SyncBlockerSummary();
    AWS_CODESTARCONNECTIONS_API SyncBlockerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API SyncBlockerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource name for sync blocker summary.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline SyncBlockerSummary& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline SyncBlockerSummary& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline SyncBlockerSummary& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource name for a sync blocker summary.</p>
     */
    inline const Aws::String& GetParentResourceName() const{ return m_parentResourceName; }
    inline bool ParentResourceNameHasBeenSet() const { return m_parentResourceNameHasBeenSet; }
    inline void SetParentResourceName(const Aws::String& value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName = value; }
    inline void SetParentResourceName(Aws::String&& value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName = std::move(value); }
    inline void SetParentResourceName(const char* value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName.assign(value); }
    inline SyncBlockerSummary& WithParentResourceName(const Aws::String& value) { SetParentResourceName(value); return *this;}
    inline SyncBlockerSummary& WithParentResourceName(Aws::String&& value) { SetParentResourceName(std::move(value)); return *this;}
    inline SyncBlockerSummary& WithParentResourceName(const char* value) { SetParentResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest events for a sync blocker summary.</p>
     */
    inline const Aws::Vector<SyncBlocker>& GetLatestBlockers() const{ return m_latestBlockers; }
    inline bool LatestBlockersHasBeenSet() const { return m_latestBlockersHasBeenSet; }
    inline void SetLatestBlockers(const Aws::Vector<SyncBlocker>& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers = value; }
    inline void SetLatestBlockers(Aws::Vector<SyncBlocker>&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers = std::move(value); }
    inline SyncBlockerSummary& WithLatestBlockers(const Aws::Vector<SyncBlocker>& value) { SetLatestBlockers(value); return *this;}
    inline SyncBlockerSummary& WithLatestBlockers(Aws::Vector<SyncBlocker>&& value) { SetLatestBlockers(std::move(value)); return *this;}
    inline SyncBlockerSummary& AddLatestBlockers(const SyncBlocker& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers.push_back(value); return *this; }
    inline SyncBlockerSummary& AddLatestBlockers(SyncBlocker&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers.push_back(std::move(value)); return *this; }
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
} // namespace CodeStarconnections
} // namespace Aws
