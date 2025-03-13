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
    AWS_B2BI_API CreateStarterMappingTemplateResult() = default;
    AWS_B2BI_API CreateStarterMappingTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreateStarterMappingTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a string that represents the mapping template.</p>
     */
    inline const Aws::String& GetMappingTemplate() const { return m_mappingTemplate; }
    template<typename MappingTemplateT = Aws::String>
    void SetMappingTemplate(MappingTemplateT&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::forward<MappingTemplateT>(value); }
    template<typename MappingTemplateT = Aws::String>
    CreateStarterMappingTemplateResult& WithMappingTemplate(MappingTemplateT&& value) { SetMappingTemplate(std::forward<MappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStarterMappingTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
