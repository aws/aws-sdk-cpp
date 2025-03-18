/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/RepositoryMetadata.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a get repository operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryOutput">AWS
   * API Reference</a></p>
   */
  class GetRepositoryResult
  {
  public:
    AWS_CODECOMMIT_API GetRepositoryResult() = default;
    AWS_CODECOMMIT_API GetRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the repository.</p>
     */
    inline const RepositoryMetadata& GetRepositoryMetadata() const { return m_repositoryMetadata; }
    template<typename RepositoryMetadataT = RepositoryMetadata>
    void SetRepositoryMetadata(RepositoryMetadataT&& value) { m_repositoryMetadataHasBeenSet = true; m_repositoryMetadata = std::forward<RepositoryMetadataT>(value); }
    template<typename RepositoryMetadataT = RepositoryMetadata>
    GetRepositoryResult& WithRepositoryMetadata(RepositoryMetadataT&& value) { SetRepositoryMetadata(std::forward<RepositoryMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryMetadata m_repositoryMetadata;
    bool m_repositoryMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
