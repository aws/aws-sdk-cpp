/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class DescribeRepositoryAssociationResult
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationResult() = default;
    AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the repository association.</p>
     */
    inline const RepositoryAssociation& GetRepositoryAssociation() const { return m_repositoryAssociation; }
    template<typename RepositoryAssociationT = RepositoryAssociation>
    void SetRepositoryAssociation(RepositoryAssociationT&& value) { m_repositoryAssociationHasBeenSet = true; m_repositoryAssociation = std::forward<RepositoryAssociationT>(value); }
    template<typename RepositoryAssociationT = RepositoryAssociation>
    DescribeRepositoryAssociationResult& WithRepositoryAssociation(RepositoryAssociationT&& value) { SetRepositoryAssociation(std::forward<RepositoryAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeRepositoryAssociationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeRepositoryAssociationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRepositoryAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryAssociation m_repositoryAssociation;
    bool m_repositoryAssociationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
