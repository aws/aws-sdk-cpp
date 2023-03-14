/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{
  class IsVpcPeeredResult
  {
  public:
    AWS_LIGHTSAIL_API IsVpcPeeredResult();
    AWS_LIGHTSAIL_API IsVpcPeeredResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API IsVpcPeeredResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline bool GetIsPeered() const{ return m_isPeered; }

    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline void SetIsPeered(bool value) { m_isPeered = value; }

    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline IsVpcPeeredResult& WithIsPeered(bool value) { SetIsPeered(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline IsVpcPeeredResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline IsVpcPeeredResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline IsVpcPeeredResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_isPeered;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
