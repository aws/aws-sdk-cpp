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
    AWS_CODECOMMIT_API GetMergeOptionsResult() = default;
    AWS_CODECOMMIT_API GetMergeOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetMergeOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline const Aws::Vector<MergeOptionTypeEnum>& GetMergeOptions() const { return m_mergeOptions; }
    template<typename MergeOptionsT = Aws::Vector<MergeOptionTypeEnum>>
    void SetMergeOptions(MergeOptionsT&& value) { m_mergeOptionsHasBeenSet = true; m_mergeOptions = std::forward<MergeOptionsT>(value); }
    template<typename MergeOptionsT = Aws::Vector<MergeOptionTypeEnum>>
    GetMergeOptionsResult& WithMergeOptions(MergeOptionsT&& value) { SetMergeOptions(std::forward<MergeOptionsT>(value)); return *this;}
    inline GetMergeOptionsResult& AddMergeOptions(MergeOptionTypeEnum value) { m_mergeOptionsHasBeenSet = true; m_mergeOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const { return m_sourceCommitId; }
    template<typename SourceCommitIdT = Aws::String>
    void SetSourceCommitId(SourceCommitIdT&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::forward<SourceCommitIdT>(value); }
    template<typename SourceCommitIdT = Aws::String>
    GetMergeOptionsResult& WithSourceCommitId(SourceCommitIdT&& value) { SetSourceCommitId(std::forward<SourceCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const { return m_destinationCommitId; }
    template<typename DestinationCommitIdT = Aws::String>
    void SetDestinationCommitId(DestinationCommitIdT&& value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId = std::forward<DestinationCommitIdT>(value); }
    template<typename DestinationCommitIdT = Aws::String>
    GetMergeOptionsResult& WithDestinationCommitId(DestinationCommitIdT&& value) { SetDestinationCommitId(std::forward<DestinationCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const { return m_baseCommitId; }
    template<typename BaseCommitIdT = Aws::String>
    void SetBaseCommitId(BaseCommitIdT&& value) { m_baseCommitIdHasBeenSet = true; m_baseCommitId = std::forward<BaseCommitIdT>(value); }
    template<typename BaseCommitIdT = Aws::String>
    GetMergeOptionsResult& WithBaseCommitId(BaseCommitIdT&& value) { SetBaseCommitId(std::forward<BaseCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMergeOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MergeOptionTypeEnum> m_mergeOptions;
    bool m_mergeOptionsHasBeenSet = false;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet = false;

    Aws::String m_destinationCommitId;
    bool m_destinationCommitIdHasBeenSet = false;

    Aws::String m_baseCommitId;
    bool m_baseCommitIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
