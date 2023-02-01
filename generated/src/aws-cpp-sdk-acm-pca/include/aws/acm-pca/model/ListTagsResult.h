/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/Tag.h>
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
namespace ACMPCA
{
namespace Model
{
  class ListTagsResult
  {
  public:
    AWS_ACMPCA_API ListTagsResult();
    AWS_ACMPCA_API ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline ListTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline ListTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline ListTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with your private CA.</p>
     */
    inline ListTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <b>NextToken</b> parameter in a subsequent pagination request. </p>
     */
    inline ListTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
