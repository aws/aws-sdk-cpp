/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AccessPreview.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetAccessPreviewResult
  {
  public:
    AWS_ACCESSANALYZER_API GetAccessPreviewResult();
    AWS_ACCESSANALYZER_API GetAccessPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetAccessPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline const AccessPreview& GetAccessPreview() const{ return m_accessPreview; }

    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline void SetAccessPreview(const AccessPreview& value) { m_accessPreview = value; }

    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline void SetAccessPreview(AccessPreview&& value) { m_accessPreview = std::move(value); }

    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline GetAccessPreviewResult& WithAccessPreview(const AccessPreview& value) { SetAccessPreview(value); return *this;}

    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline GetAccessPreviewResult& WithAccessPreview(AccessPreview&& value) { SetAccessPreview(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccessPreview m_accessPreview;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
