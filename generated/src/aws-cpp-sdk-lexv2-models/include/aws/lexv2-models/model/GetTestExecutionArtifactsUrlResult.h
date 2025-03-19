/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{
  class GetTestExecutionArtifactsUrlResult
  {
  public:
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult() = default;
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const { return m_testExecutionId; }
    template<typename TestExecutionIdT = Aws::String>
    void SetTestExecutionId(TestExecutionIdT&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::forward<TestExecutionIdT>(value); }
    template<typename TestExecutionIdT = Aws::String>
    GetTestExecutionArtifactsUrlResult& WithTestExecutionId(TestExecutionIdT&& value) { SetTestExecutionId(std::forward<TestExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline const Aws::String& GetDownloadArtifactsUrl() const { return m_downloadArtifactsUrl; }
    template<typename DownloadArtifactsUrlT = Aws::String>
    void SetDownloadArtifactsUrl(DownloadArtifactsUrlT&& value) { m_downloadArtifactsUrlHasBeenSet = true; m_downloadArtifactsUrl = std::forward<DownloadArtifactsUrlT>(value); }
    template<typename DownloadArtifactsUrlT = Aws::String>
    GetTestExecutionArtifactsUrlResult& WithDownloadArtifactsUrl(DownloadArtifactsUrlT&& value) { SetDownloadArtifactsUrl(std::forward<DownloadArtifactsUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTestExecutionArtifactsUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    Aws::String m_downloadArtifactsUrl;
    bool m_downloadArtifactsUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
