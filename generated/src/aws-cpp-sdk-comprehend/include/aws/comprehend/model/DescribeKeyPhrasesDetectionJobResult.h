/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/KeyPhrasesDetectionJobProperties.h>
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
  class DescribeKeyPhrasesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline const KeyPhrasesDetectionJobProperties& GetKeyPhrasesDetectionJobProperties() const { return m_keyPhrasesDetectionJobProperties; }
    template<typename KeyPhrasesDetectionJobPropertiesT = KeyPhrasesDetectionJobProperties>
    void SetKeyPhrasesDetectionJobProperties(KeyPhrasesDetectionJobPropertiesT&& value) { m_keyPhrasesDetectionJobPropertiesHasBeenSet = true; m_keyPhrasesDetectionJobProperties = std::forward<KeyPhrasesDetectionJobPropertiesT>(value); }
    template<typename KeyPhrasesDetectionJobPropertiesT = KeyPhrasesDetectionJobProperties>
    DescribeKeyPhrasesDetectionJobResult& WithKeyPhrasesDetectionJobProperties(KeyPhrasesDetectionJobPropertiesT&& value) { SetKeyPhrasesDetectionJobProperties(std::forward<KeyPhrasesDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeKeyPhrasesDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KeyPhrasesDetectionJobProperties m_keyPhrasesDetectionJobProperties;
    bool m_keyPhrasesDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
