/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SourceCredentialsInfo.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListSourceCredentialsResult
  {
  public:
    AWS_CODEBUILD_API ListSourceCredentialsResult() = default;
    AWS_CODEBUILD_API ListSourceCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListSourceCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline const Aws::Vector<SourceCredentialsInfo>& GetSourceCredentialsInfos() const { return m_sourceCredentialsInfos; }
    template<typename SourceCredentialsInfosT = Aws::Vector<SourceCredentialsInfo>>
    void SetSourceCredentialsInfos(SourceCredentialsInfosT&& value) { m_sourceCredentialsInfosHasBeenSet = true; m_sourceCredentialsInfos = std::forward<SourceCredentialsInfosT>(value); }
    template<typename SourceCredentialsInfosT = Aws::Vector<SourceCredentialsInfo>>
    ListSourceCredentialsResult& WithSourceCredentialsInfos(SourceCredentialsInfosT&& value) { SetSourceCredentialsInfos(std::forward<SourceCredentialsInfosT>(value)); return *this;}
    template<typename SourceCredentialsInfosT = SourceCredentialsInfo>
    ListSourceCredentialsResult& AddSourceCredentialsInfos(SourceCredentialsInfosT&& value) { m_sourceCredentialsInfosHasBeenSet = true; m_sourceCredentialsInfos.emplace_back(std::forward<SourceCredentialsInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSourceCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SourceCredentialsInfo> m_sourceCredentialsInfos;
    bool m_sourceCredentialsInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
