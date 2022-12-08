/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DominantLanguageDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeDominantLanguageDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult();
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline const DominantLanguageDetectionJobProperties& GetDominantLanguageDetectionJobProperties() const{ return m_dominantLanguageDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline void SetDominantLanguageDetectionJobProperties(const DominantLanguageDetectionJobProperties& value) { m_dominantLanguageDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline void SetDominantLanguageDetectionJobProperties(DominantLanguageDetectionJobProperties&& value) { m_dominantLanguageDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline DescribeDominantLanguageDetectionJobResult& WithDominantLanguageDetectionJobProperties(const DominantLanguageDetectionJobProperties& value) { SetDominantLanguageDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline DescribeDominantLanguageDetectionJobResult& WithDominantLanguageDetectionJobProperties(DominantLanguageDetectionJobProperties&& value) { SetDominantLanguageDetectionJobProperties(std::move(value)); return *this;}

  private:

    DominantLanguageDetectionJobProperties m_dominantLanguageDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
