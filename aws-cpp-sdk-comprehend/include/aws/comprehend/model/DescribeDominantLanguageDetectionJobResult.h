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
  class AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult
  {
  public:
    DescribeDominantLanguageDetectionJobResult();
    DescribeDominantLanguageDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDominantLanguageDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
