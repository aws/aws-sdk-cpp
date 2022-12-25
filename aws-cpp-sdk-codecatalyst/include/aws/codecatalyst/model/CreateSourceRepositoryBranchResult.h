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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCatalyst
{
namespace Model
{
  class CreateSourceRepositoryBranchResult
  {
  public:
    AWS_CODECATALYST_API CreateSourceRepositoryBranchResult();
    AWS_CODECATALYST_API CreateSourceRepositoryBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateSourceRepositoryBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline const Aws::String& GetRef() const{ return m_ref; }

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline void SetRef(const Aws::String& value) { m_ref = value; }

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline void SetRef(Aws::String&& value) { m_ref = std::move(value); }

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline void SetRef(const char* value) { m_ref.assign(value); }

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithRef(const Aws::String& value) { SetRef(value); return *this;}

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithRef(Aws::String&& value) { SetRef(std::move(value)); return *this;}

    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithRef(const char* value) { SetRef(value); return *this;}


    /**
     * <p>The name of the newly created branch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline const Aws::String& GetHeadCommitId() const{ return m_headCommitId; }

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline void SetHeadCommitId(const Aws::String& value) { m_headCommitId = value; }

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline void SetHeadCommitId(Aws::String&& value) { m_headCommitId = std::move(value); }

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline void SetHeadCommitId(const char* value) { m_headCommitId.assign(value); }

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(const Aws::String& value) { SetHeadCommitId(value); return *this;}

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(Aws::String&& value) { SetHeadCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(const char* value) { SetHeadCommitId(value); return *this;}

  private:

    Aws::String m_ref;

    Aws::String m_name;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_headCommitId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
