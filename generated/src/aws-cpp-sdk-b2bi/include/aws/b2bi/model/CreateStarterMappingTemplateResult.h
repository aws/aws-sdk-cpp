/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{
  class CreateStarterMappingTemplateResult
  {
  public:
    AWS_B2BI_API CreateStarterMappingTemplateResult();
    AWS_B2BI_API CreateStarterMappingTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreateStarterMappingTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a string that represents the mapping template.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplate = value; }
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplate = std::move(value); }
    inline void SetMappingTemplate(const char* value) { m_mappingTemplate.assign(value); }
    inline CreateStarterMappingTemplateResult& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}
    inline CreateStarterMappingTemplateResult& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}
    inline CreateStarterMappingTemplateResult& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStarterMappingTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStarterMappingTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStarterMappingTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mappingTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
