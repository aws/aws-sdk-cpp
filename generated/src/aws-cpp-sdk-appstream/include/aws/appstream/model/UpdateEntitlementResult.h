/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Entitlement.h>
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
namespace AppStream
{
namespace Model
{
  class UpdateEntitlementResult
  {
  public:
    AWS_APPSTREAM_API UpdateEntitlementResult();
    AWS_APPSTREAM_API UpdateEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entitlement.</p>
     */
    inline const Entitlement& GetEntitlement() const{ return m_entitlement; }

    /**
     * <p>The entitlement.</p>
     */
    inline void SetEntitlement(const Entitlement& value) { m_entitlement = value; }

    /**
     * <p>The entitlement.</p>
     */
    inline void SetEntitlement(Entitlement&& value) { m_entitlement = std::move(value); }

    /**
     * <p>The entitlement.</p>
     */
    inline UpdateEntitlementResult& WithEntitlement(const Entitlement& value) { SetEntitlement(value); return *this;}

    /**
     * <p>The entitlement.</p>
     */
    inline UpdateEntitlementResult& WithEntitlement(Entitlement&& value) { SetEntitlement(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEntitlementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEntitlementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEntitlementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Entitlement m_entitlement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
