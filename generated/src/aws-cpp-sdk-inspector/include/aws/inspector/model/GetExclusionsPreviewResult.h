﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/PreviewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/ExclusionPreview.h>
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
namespace Inspector
{
namespace Model
{
  class GetExclusionsPreviewResult
  {
  public:
    AWS_INSPECTOR_API GetExclusionsPreviewResult();
    AWS_INSPECTOR_API GetExclusionsPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetExclusionsPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the status of the request to generate an exclusions preview.</p>
     */
    inline const PreviewStatus& GetPreviewStatus() const{ return m_previewStatus; }
    inline void SetPreviewStatus(const PreviewStatus& value) { m_previewStatus = value; }
    inline void SetPreviewStatus(PreviewStatus&& value) { m_previewStatus = std::move(value); }
    inline GetExclusionsPreviewResult& WithPreviewStatus(const PreviewStatus& value) { SetPreviewStatus(value); return *this;}
    inline GetExclusionsPreviewResult& WithPreviewStatus(PreviewStatus&& value) { SetPreviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the exclusions included in the preview.</p>
     */
    inline const Aws::Vector<ExclusionPreview>& GetExclusionPreviews() const{ return m_exclusionPreviews; }
    inline void SetExclusionPreviews(const Aws::Vector<ExclusionPreview>& value) { m_exclusionPreviews = value; }
    inline void SetExclusionPreviews(Aws::Vector<ExclusionPreview>&& value) { m_exclusionPreviews = std::move(value); }
    inline GetExclusionsPreviewResult& WithExclusionPreviews(const Aws::Vector<ExclusionPreview>& value) { SetExclusionPreviews(value); return *this;}
    inline GetExclusionsPreviewResult& WithExclusionPreviews(Aws::Vector<ExclusionPreview>&& value) { SetExclusionPreviews(std::move(value)); return *this;}
    inline GetExclusionsPreviewResult& AddExclusionPreviews(const ExclusionPreview& value) { m_exclusionPreviews.push_back(value); return *this; }
    inline GetExclusionsPreviewResult& AddExclusionPreviews(ExclusionPreview&& value) { m_exclusionPreviews.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameters is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetExclusionsPreviewResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetExclusionsPreviewResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetExclusionsPreviewResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExclusionsPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExclusionsPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExclusionsPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PreviewStatus m_previewStatus;

    Aws::Vector<ExclusionPreview> m_exclusionPreviews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
