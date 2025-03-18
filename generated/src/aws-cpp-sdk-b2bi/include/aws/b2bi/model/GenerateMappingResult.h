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
  class GenerateMappingResult
  {
  public:
    AWS_B2BI_API GenerateMappingResult() = default;
    AWS_B2BI_API GenerateMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GenerateMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a mapping template based on your inputs.</p>
     */
    inline const Aws::String& GetMappingTemplate() const { return m_mappingTemplate; }
    template<typename MappingTemplateT = Aws::String>
    void SetMappingTemplate(MappingTemplateT&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::forward<MappingTemplateT>(value); }
    template<typename MappingTemplateT = Aws::String>
    GenerateMappingResult& WithMappingTemplate(MappingTemplateT&& value) { SetMappingTemplate(std::forward<MappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a percentage that estimates the accuracy of the generated
     * mapping.</p>
     */
    inline double GetMappingAccuracy() const { return m_mappingAccuracy; }
    inline void SetMappingAccuracy(double value) { m_mappingAccuracyHasBeenSet = true; m_mappingAccuracy = value; }
    inline GenerateMappingResult& WithMappingAccuracy(double value) { SetMappingAccuracy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    double m_mappingAccuracy{0.0};
    bool m_mappingAccuracyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
