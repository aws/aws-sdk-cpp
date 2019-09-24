/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COMPREHENDMEDICAL_API DescribePHIDetectionJobResult
  {
  public:
    DescribePHIDetectionJobResult();
    DescribePHIDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePHIDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline const ComprehendMedicalAsyncJobProperties& GetComprehendMedicalAsyncJobProperties() const{ return m_comprehendMedicalAsyncJobProperties; }

    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline void SetComprehendMedicalAsyncJobProperties(const ComprehendMedicalAsyncJobProperties& value) { m_comprehendMedicalAsyncJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline void SetComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobProperties&& value) { m_comprehendMedicalAsyncJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline DescribePHIDetectionJobResult& WithComprehendMedicalAsyncJobProperties(const ComprehendMedicalAsyncJobProperties& value) { SetComprehendMedicalAsyncJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a detection job.</p>
     */
    inline DescribePHIDetectionJobResult& WithComprehendMedicalAsyncJobProperties(ComprehendMedicalAsyncJobProperties&& value) { SetComprehendMedicalAsyncJobProperties(std::move(value)); return *this;}

  private:

    ComprehendMedicalAsyncJobProperties m_comprehendMedicalAsyncJobProperties;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
