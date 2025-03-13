/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/ResourceProfileArtifact.h>
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
namespace Macie2
{
namespace Model
{
  class ListResourceProfileArtifactsResult
  {
  public:
    AWS_MACIE2_API ListResourceProfileArtifactsResult() = default;
    AWS_MACIE2_API ListResourceProfileArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListResourceProfileArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline const Aws::Vector<ResourceProfileArtifact>& GetArtifacts() const { return m_artifacts; }
    template<typename ArtifactsT = Aws::Vector<ResourceProfileArtifact>>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = Aws::Vector<ResourceProfileArtifact>>
    ListResourceProfileArtifactsResult& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    template<typename ArtifactsT = ResourceProfileArtifact>
    ListResourceProfileArtifactsResult& AddArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts.emplace_back(std::forward<ArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceProfileArtifactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceProfileArtifactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceProfileArtifact> m_artifacts;
    bool m_artifactsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
