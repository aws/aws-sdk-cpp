/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a branch of a source repository returned in a list of
   * branches.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSourceRepositoryBranchesItem">AWS
   * API Reference</a></p>
   */
  class ListSourceRepositoryBranchesItem
  {
  public:
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem() = default;
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline const Aws::String& GetRef() const { return m_ref; }
    inline bool RefHasBeenSet() const { return m_refHasBeenSet; }
    template<typename RefT = Aws::String>
    void SetRef(RefT&& value) { m_refHasBeenSet = true; m_ref = std::forward<RefT>(value); }
    template<typename RefT = Aws::String>
    ListSourceRepositoryBranchesItem& WithRef(RefT&& value) { SetRef(std::forward<RefT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListSourceRepositoryBranchesItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ListSourceRepositoryBranchesItem& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the tip of the branch at the time of the request, also known
     * as the head commit.</p>
     */
    inline const Aws::String& GetHeadCommitId() const { return m_headCommitId; }
    inline bool HeadCommitIdHasBeenSet() const { return m_headCommitIdHasBeenSet; }
    template<typename HeadCommitIdT = Aws::String>
    void SetHeadCommitId(HeadCommitIdT&& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = std::forward<HeadCommitIdT>(value); }
    template<typename HeadCommitIdT = Aws::String>
    ListSourceRepositoryBranchesItem& WithHeadCommitId(HeadCommitIdT&& value) { SetHeadCommitId(std::forward<HeadCommitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ref;
    bool m_refHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_headCommitId;
    bool m_headCommitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
