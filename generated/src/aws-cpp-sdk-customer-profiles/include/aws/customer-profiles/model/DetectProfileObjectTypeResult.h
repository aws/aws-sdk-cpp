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
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult();
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline const Aws::Vector<DetectedProfileObjectType>& GetDetectedProfileObjectTypes() const{ return m_detectedProfileObjectTypes; }

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline void SetDetectedProfileObjectTypes(const Aws::Vector<DetectedProfileObjectType>& value) { m_detectedProfileObjectTypes = value; }

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline void SetDetectedProfileObjectTypes(Aws::Vector<DetectedProfileObjectType>&& value) { m_detectedProfileObjectTypes = std::move(value); }

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline DetectProfileObjectTypeResult& WithDetectedProfileObjectTypes(const Aws::Vector<DetectedProfileObjectType>& value) { SetDetectedProfileObjectTypes(value); return *this;}

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline DetectProfileObjectTypeResult& WithDetectedProfileObjectTypes(Aws::Vector<DetectedProfileObjectType>&& value) { SetDetectedProfileObjectTypes(std::move(value)); return *this;}

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline DetectProfileObjectTypeResult& AddDetectedProfileObjectTypes(const DetectedProfileObjectType& value) { m_detectedProfileObjectTypes.push_back(value); return *this; }

    /**
     * <p>Detected <code>ProfileObjectType</code> mappings from given objects. A
     * maximum of one mapping is supported.</p>
     */
    inline DetectProfileObjectTypeResult& AddDetectedProfileObjectTypes(DetectedProfileObjectType&& value) { m_detectedProfileObjectTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectProfileObjectTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectProfileObjectTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectProfileObjectTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DetectedProfileObjectType> m_detectedProfileObjectTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
