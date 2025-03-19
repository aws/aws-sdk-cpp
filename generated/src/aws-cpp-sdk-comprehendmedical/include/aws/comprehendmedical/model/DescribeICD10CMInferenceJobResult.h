/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class DescribeICD10CMInferenceJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API DescribeICD10CMInferenceJobResult() = default;
    AWS_COMPREHENDMEDICAL_API DescribeICD10CMInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API DescribeICD10CMInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline const ComprehendMedicalAsyncJobProperties& GetComprehendMedicalAsyncJobProperties() const { return m_comprehendMedicalAsyncJobProperties; }
    template<typename ComprehendMedicalAsyncJobPropertiesT = ComprehendMedicalAsyncJobProperties>
    void SetComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobPropertiesT&& value) { m_comprehendMedicalAsyncJobPropertiesHasBeenSet = true; m_comprehendMedicalAsyncJobProperties = std::forward<ComprehendMedicalAsyncJobPropertiesT>(value); }
    template<typename ComprehendMedicalAsyncJobPropertiesT = ComprehendMedicalAsyncJobProperties>
    DescribeICD10CMInferenceJobResult& WithComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobPropertiesT&& value) { SetComprehendMedicalAsyncJobProperties(std::forward<ComprehendMedicalAsyncJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeICD10CMInferenceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ComprehendMedicalAsyncJobProperties m_comprehendMedicalAsyncJobProperties;
    bool m_comprehendMedicalAsyncJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
