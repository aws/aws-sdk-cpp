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
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem();
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ListSourceRepositoryBranchesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline const Aws::String& GetRef() const{ return m_ref; }
    inline bool RefHasBeenSet() const { return m_refHasBeenSet; }
    inline void SetRef(const Aws::String& value) { m_refHasBeenSet = true; m_ref = value; }
    inline void SetRef(Aws::String&& value) { m_refHasBeenSet = true; m_ref = std::move(value); }
    inline void SetRef(const char* value) { m_refHasBeenSet = true; m_ref.assign(value); }
    inline ListSourceRepositoryBranchesItem& WithRef(const Aws::String& value) { SetRef(value); return *this;}
    inline ListSourceRepositoryBranchesItem& WithRef(Aws::String&& value) { SetRef(std::move(value)); return *this;}
    inline ListSourceRepositoryBranchesItem& WithRef(const char* value) { SetRef(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListSourceRepositoryBranchesItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListSourceRepositoryBranchesItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListSourceRepositoryBranchesItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ListSourceRepositoryBranchesItem& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ListSourceRepositoryBranchesItem& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the tip of the branch at the time of the request, also known
     * as the head commit.</p>
     */
    inline const Aws::String& GetHeadCommitId() const{ return m_headCommitId; }
    inline bool HeadCommitIdHasBeenSet() const { return m_headCommitIdHasBeenSet; }
    inline void SetHeadCommitId(const Aws::String& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = value; }
    inline void SetHeadCommitId(Aws::String&& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = std::move(value); }
    inline void SetHeadCommitId(const char* value) { m_headCommitIdHasBeenSet = true; m_headCommitId.assign(value); }
    inline ListSourceRepositoryBranchesItem& WithHeadCommitId(const Aws::String& value) { SetHeadCommitId(value); return *this;}
    inline ListSourceRepositoryBranchesItem& WithHeadCommitId(Aws::String&& value) { SetHeadCommitId(std::move(value)); return *this;}
    inline ListSourceRepositoryBranchesItem& WithHeadCommitId(const char* value) { SetHeadCommitId(value); return *this;}
    ///@}
  private:

    Aws::String m_ref;
    bool m_refHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_headCommitId;
    bool m_headCommitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
