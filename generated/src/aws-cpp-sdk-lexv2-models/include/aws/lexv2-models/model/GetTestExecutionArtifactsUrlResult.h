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
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult();
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionId = value; }

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline void SetTestExecutionId(const char* value) { m_testExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}


    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline const Aws::String& GetDownloadArtifactsUrl() const{ return m_downloadArtifactsUrl; }

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline void SetDownloadArtifactsUrl(const Aws::String& value) { m_downloadArtifactsUrl = value; }

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline void SetDownloadArtifactsUrl(Aws::String&& value) { m_downloadArtifactsUrl = std::move(value); }

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline void SetDownloadArtifactsUrl(const char* value) { m_downloadArtifactsUrl.assign(value); }

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithDownloadArtifactsUrl(const Aws::String& value) { SetDownloadArtifactsUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithDownloadArtifactsUrl(Aws::String&& value) { SetDownloadArtifactsUrl(std::move(value)); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL to download completed test execution.</p>
     */
    inline GetTestExecutionArtifactsUrlResult& WithDownloadArtifactsUrl(const char* value) { SetDownloadArtifactsUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTestExecutionArtifactsUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTestExecutionArtifactsUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTestExecutionArtifactsUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_testExecutionId;

    Aws::String m_downloadArtifactsUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
