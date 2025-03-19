/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/DetectedProfileObjectType.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class DetectProfileObjectTypeResult
  {
  public:
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult() = default;
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline const Aws::Vector<DetectedProfileObjectType>& GetDetectedProfileObjectTypes() const { return m_detectedProfileObjectTypes; }
    template<typename DetectedProfileObjectTypesT = Aws::Vector<DetectedProfileObjectType>>
    void SetDetectedProfileObjectTypes(DetectedProfileObjectTypesT&& value) { m_detectedProfileObjectTypesHasBeenSet = true; m_detectedProfileObjectTypes = std::forward<DetectedProfileObjectTypesT>(value); }
    template<typename DetectedProfileObjectTypesT = Aws::Vector<DetectedProfileObjectType>>
    DetectProfileObjectTypeResult& WithDetectedProfileObjectTypes(DetectedProfileObjectTypesT&& value) { SetDetectedProfileObjectTypes(std::forward<DetectedProfileObjectTypesT>(value)); return *this;}
    template<typename DetectedProfileObjectTypesT = DetectedProfileObjectType>
    DetectProfileObjectTypeResult& AddDetectedProfileObjectTypes(DetectedProfileObjectTypesT&& value) { m_detectedProfileObjectTypesHasBeenSet = true; m_detectedProfileObjectTypes.emplace_back(std::forward<DetectedProfileObjectTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectProfileObjectTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetectedProfileObjectType> m_detectedProfileObjectTypes;
    bool m_detectedProfileObjectTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
