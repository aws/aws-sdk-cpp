/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{
  class GetPromptFileResult
  {
  public:
    AWS_CONNECT_API GetPromptFileResult() = default;
    AWS_CONNECT_API GetPromptFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetPromptFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline const Aws::String& GetPromptPresignedUrl() const { return m_promptPresignedUrl; }
    template<typename PromptPresignedUrlT = Aws::String>
    void SetPromptPresignedUrl(PromptPresignedUrlT&& value) { m_promptPresignedUrlHasBeenSet = true; m_promptPresignedUrl = std::forward<PromptPresignedUrlT>(value); }
    template<typename PromptPresignedUrlT = Aws::String>
    GetPromptFileResult& WithPromptPresignedUrl(PromptPresignedUrlT&& value) { SetPromptPresignedUrl(std::forward<PromptPresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetPromptFileResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    GetPromptFileResult& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPromptFileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptPresignedUrl;
    bool m_promptPresignedUrlHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
