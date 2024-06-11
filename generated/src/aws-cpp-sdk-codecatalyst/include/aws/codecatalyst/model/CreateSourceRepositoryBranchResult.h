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


    ///@{
    /**
     * <p>The Git reference name of the branch.</p>
     */
    inline const Aws::String& GetRef() const{ return m_ref; }
    inline void SetRef(const Aws::String& value) { m_ref = value; }
    inline void SetRef(Aws::String&& value) { m_ref = std::move(value); }
    inline void SetRef(const char* value) { m_ref.assign(value); }
    inline CreateSourceRepositoryBranchResult& WithRef(const Aws::String& value) { SetRef(value); return *this;}
    inline CreateSourceRepositoryBranchResult& WithRef(Aws::String&& value) { SetRef(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchResult& WithRef(const char* value) { SetRef(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the newly created branch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSourceRepositoryBranchResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSourceRepositoryBranchResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the branch was last updated, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline CreateSourceRepositoryBranchResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline CreateSourceRepositoryBranchResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the tip of the newly created branch.</p>
     */
    inline const Aws::String& GetHeadCommitId() const{ return m_headCommitId; }
    inline void SetHeadCommitId(const Aws::String& value) { m_headCommitId = value; }
    inline void SetHeadCommitId(Aws::String&& value) { m_headCommitId = std::move(value); }
    inline void SetHeadCommitId(const char* value) { m_headCommitId.assign(value); }
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(const Aws::String& value) { SetHeadCommitId(value); return *this;}
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(Aws::String&& value) { SetHeadCommitId(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchResult& WithHeadCommitId(const char* value) { SetHeadCommitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSourceRepositoryBranchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSourceRepositoryBranchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ref;

    Aws::String m_name;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_headCommitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
