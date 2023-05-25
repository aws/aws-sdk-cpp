/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class CreateExclusionsPreviewResult
  {
  public:
    AWS_INSPECTOR_API CreateExclusionsPreviewResult();
    AWS_INSPECTOR_API CreateExclusionsPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateExclusionsPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline const Aws::String& GetPreviewToken() const{ return m_previewToken; }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(const Aws::String& value) { m_previewToken = value; }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(Aws::String&& value) { m_previewToken = std::move(value); }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(const char* value) { m_previewToken.assign(value); }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(const Aws::String& value) { SetPreviewToken(value); return *this;}

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(Aws::String&& value) { SetPreviewToken(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(const char* value) { SetPreviewToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateExclusionsPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateExclusionsPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateExclusionsPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_previewToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
