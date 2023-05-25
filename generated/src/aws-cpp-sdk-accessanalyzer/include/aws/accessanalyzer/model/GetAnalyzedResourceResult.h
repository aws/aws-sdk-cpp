/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AnalyzedResource.h>
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
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzedResourceResponse">AWS
   * API Reference</a></p>
   */
  class GetAnalyzedResourceResult
  {
  public:
    AWS_ACCESSANALYZER_API GetAnalyzedResourceResult();
    AWS_ACCESSANALYZER_API GetAnalyzedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetAnalyzedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>AnalyzedResource</code> object that contains information that IAM
     * Access Analyzer found when it analyzed the resource.</p>
     */
    inline const AnalyzedResource& GetResource() const{ return m_resource; }

    /**
     * <p>An <code>AnalyzedResource</code> object that contains information that IAM
     * Access Analyzer found when it analyzed the resource.</p>
     */
    inline void SetResource(const AnalyzedResource& value) { m_resource = value; }

    /**
     * <p>An <code>AnalyzedResource</code> object that contains information that IAM
     * Access Analyzer found when it analyzed the resource.</p>
     */
    inline void SetResource(AnalyzedResource&& value) { m_resource = std::move(value); }

    /**
     * <p>An <code>AnalyzedResource</code> object that contains information that IAM
     * Access Analyzer found when it analyzed the resource.</p>
     */
    inline GetAnalyzedResourceResult& WithResource(const AnalyzedResource& value) { SetResource(value); return *this;}

    /**
     * <p>An <code>AnalyzedResource</code> object that contains information that IAM
     * Access Analyzer found when it analyzed the resource.</p>
     */
    inline GetAnalyzedResourceResult& WithResource(AnalyzedResource&& value) { SetResource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAnalyzedResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAnalyzedResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAnalyzedResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AnalyzedResource m_resource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
