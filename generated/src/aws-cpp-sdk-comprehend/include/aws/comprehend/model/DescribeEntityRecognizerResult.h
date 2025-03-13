/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntityRecognizerProperties.h>
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
  class DescribeEntityRecognizerResult
  {
  public:
    AWS_COMPREHEND_API DescribeEntityRecognizerResult() = default;
    AWS_COMPREHEND_API DescribeEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline const EntityRecognizerProperties& GetEntityRecognizerProperties() const { return m_entityRecognizerProperties; }
    template<typename EntityRecognizerPropertiesT = EntityRecognizerProperties>
    void SetEntityRecognizerProperties(EntityRecognizerPropertiesT&& value) { m_entityRecognizerPropertiesHasBeenSet = true; m_entityRecognizerProperties = std::forward<EntityRecognizerPropertiesT>(value); }
    template<typename EntityRecognizerPropertiesT = EntityRecognizerProperties>
    DescribeEntityRecognizerResult& WithEntityRecognizerProperties(EntityRecognizerPropertiesT&& value) { SetEntityRecognizerProperties(std::forward<EntityRecognizerPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEntityRecognizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EntityRecognizerProperties m_entityRecognizerProperties;
    bool m_entityRecognizerPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
