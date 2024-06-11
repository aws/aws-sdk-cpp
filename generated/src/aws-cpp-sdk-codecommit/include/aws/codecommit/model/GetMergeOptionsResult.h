/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeOptionTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{
  class GetMergeOptionsResult
  {
  public:
    AWS_CODECOMMIT_API GetMergeOptionsResult();
    AWS_CODECOMMIT_API GetMergeOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetMergeOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline const Aws::Vector<MergeOptionTypeEnum>& GetMergeOptions() const{ return m_mergeOptions; }
    inline void SetMergeOptions(const Aws::Vector<MergeOptionTypeEnum>& value) { m_mergeOptions = value; }
    inline void SetMergeOptions(Aws::Vector<MergeOptionTypeEnum>&& value) { m_mergeOptions = std::move(value); }
    inline GetMergeOptionsResult& WithMergeOptions(const Aws::Vector<MergeOptionTypeEnum>& value) { SetMergeOptions(value); return *this;}
    inline GetMergeOptionsResult& WithMergeOptions(Aws::Vector<MergeOptionTypeEnum>&& value) { SetMergeOptions(std::move(value)); return *this;}
    inline GetMergeOptionsResult& AddMergeOptions(const MergeOptionTypeEnum& value) { m_mergeOptions.push_back(value); return *this; }
    inline GetMergeOptionsResult& AddMergeOptions(MergeOptionTypeEnum&& value) { m_mergeOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }
    inline GetMergeOptionsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}
    inline GetMergeOptionsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}
    inline GetMergeOptionsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }
    inline GetMergeOptionsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}
    inline GetMergeOptionsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}
    inline GetMergeOptionsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }
    inline GetMergeOptionsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}
    inline GetMergeOptionsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}
    inline GetMergeOptionsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMergeOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMergeOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMergeOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MergeOptionTypeEnum> m_mergeOptions;

    Aws::String m_sourceCommitId;

    Aws::String m_destinationCommitId;

    Aws::String m_baseCommitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
