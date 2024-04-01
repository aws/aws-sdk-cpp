/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateLicenseEndpointResult
  {
  public:
    AWS_DEADLINE_API CreateLicenseEndpointResult();
    AWS_DEADLINE_API CreateLicenseEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateLicenseEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The license endpoint ID.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointId = value; }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointId = std::move(value); }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointId.assign(value); }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline CreateLicenseEndpointResult& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}

    /**
     * <p>The license endpoint ID.</p>
     */
    inline CreateLicenseEndpointResult& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}

    /**
     * <p>The license endpoint ID.</p>
     */
    inline CreateLicenseEndpointResult& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLicenseEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLicenseEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLicenseEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_licenseEndpointId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
