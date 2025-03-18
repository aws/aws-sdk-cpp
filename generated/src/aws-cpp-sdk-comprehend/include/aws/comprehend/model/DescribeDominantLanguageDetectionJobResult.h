/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DominantLanguageDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeDominantLanguageDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDominantLanguageDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a dominant language
     * detection job.</p>
     */
    inline const DominantLanguageDetectionJobProperties& GetDominantLanguageDetectionJobProperties() const { return m_dominantLanguageDetectionJobProperties; }
    template<typename DominantLanguageDetectionJobPropertiesT = DominantLanguageDetectionJobProperties>
    void SetDominantLanguageDetectionJobProperties(DominantLanguageDetectionJobPropertiesT&& value) { m_dominantLanguageDetectionJobPropertiesHasBeenSet = true; m_dominantLanguageDetectionJobProperties = std::forward<DominantLanguageDetectionJobPropertiesT>(value); }
    template<typename DominantLanguageDetectionJobPropertiesT = DominantLanguageDetectionJobProperties>
    DescribeDominantLanguageDetectionJobResult& WithDominantLanguageDetectionJobProperties(DominantLanguageDetectionJobPropertiesT&& value) { SetDominantLanguageDetectionJobProperties(std::forward<DominantLanguageDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDominantLanguageDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DominantLanguageDetectionJobProperties m_dominantLanguageDetectionJobProperties;
    bool m_dominantLanguageDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
