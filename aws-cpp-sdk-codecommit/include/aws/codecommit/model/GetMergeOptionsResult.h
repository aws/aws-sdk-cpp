/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API GetMergeOptionsResult
  {
  public:
    GetMergeOptionsResult();
    GetMergeOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMergeOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline const Aws::Vector<MergeOptionTypeEnum>& GetMergeOptions() const{ return m_mergeOptions; }

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline void SetMergeOptions(const Aws::Vector<MergeOptionTypeEnum>& value) { m_mergeOptions = value; }

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline void SetMergeOptions(Aws::Vector<MergeOptionTypeEnum>&& value) { m_mergeOptions = std::move(value); }

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline GetMergeOptionsResult& WithMergeOptions(const Aws::Vector<MergeOptionTypeEnum>& value) { SetMergeOptions(value); return *this;}

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline GetMergeOptionsResult& WithMergeOptions(Aws::Vector<MergeOptionTypeEnum>&& value) { SetMergeOptions(std::move(value)); return *this;}

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline GetMergeOptionsResult& AddMergeOptions(const MergeOptionTypeEnum& value) { m_mergeOptions.push_back(value); return *this; }

    /**
     * <p>The merge option or strategy used to merge the code.</p>
     */
    inline GetMergeOptionsResult& AddMergeOptions(MergeOptionTypeEnum&& value) { m_mergeOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}


    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeOptionsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}


    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeOptionsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeOptionsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeOptionsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}

  private:

    Aws::Vector<MergeOptionTypeEnum> m_mergeOptions;

    Aws::String m_sourceCommitId;

    Aws::String m_destinationCommitId;

    Aws::String m_baseCommitId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
