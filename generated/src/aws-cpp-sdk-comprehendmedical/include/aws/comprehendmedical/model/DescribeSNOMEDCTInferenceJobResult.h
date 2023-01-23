/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
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
  class DescribeSNOMEDCTInferenceJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API DescribeSNOMEDCTInferenceJobResult();
    AWS_COMPREHENDMEDICAL_API DescribeSNOMEDCTInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API DescribeSNOMEDCTInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ComprehendMedicalAsyncJobProperties& GetComprehendMedicalAsyncJobProperties() const{ return m_comprehendMedicalAsyncJobProperties; }

    
    inline void SetComprehendMedicalAsyncJobProperties(const ComprehendMedicalAsyncJobProperties& value) { m_comprehendMedicalAsyncJobProperties = value; }

    
    inline void SetComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobProperties&& value) { m_comprehendMedicalAsyncJobProperties = std::move(value); }

    
    inline DescribeSNOMEDCTInferenceJobResult& WithComprehendMedicalAsyncJobProperties(const ComprehendMedicalAsyncJobProperties& value) { SetComprehendMedicalAsyncJobProperties(value); return *this;}

    
    inline DescribeSNOMEDCTInferenceJobResult& WithComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobProperties&& value) { SetComprehendMedicalAsyncJobProperties(std::move(value)); return *this;}

  private:

    ComprehendMedicalAsyncJobProperties m_comprehendMedicalAsyncJobProperties;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
