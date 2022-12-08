/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagPair.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLFTagsResult();
    AWS_LAKEFORMATION_API ListLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const{ return m_lFTags; }

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline void SetLFTags(const Aws::Vector<LFTagPair>& value) { m_lFTags = value; }

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline void SetLFTags(Aws::Vector<LFTagPair>&& value) { m_lFTags = std::move(value); }

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline ListLFTagsResult& WithLFTags(const Aws::Vector<LFTagPair>& value) { SetLFTags(value); return *this;}

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline ListLFTagsResult& WithLFTags(Aws::Vector<LFTagPair>&& value) { SetLFTags(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline ListLFTagsResult& AddLFTags(const LFTagPair& value) { m_lFTags.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline ListLFTagsResult& AddLFTags(LFTagPair&& value) { m_lFTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline ListLFTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline ListLFTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline ListLFTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LFTagPair> m_lFTags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
