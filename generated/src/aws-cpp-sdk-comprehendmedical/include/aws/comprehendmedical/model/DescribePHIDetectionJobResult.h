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
  class DescribePHIDetectionJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API DescribePHIDetectionJobResult();
    AWS_COMPREHENDMEDICAL_API DescribePHIDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API DescribePHIDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
