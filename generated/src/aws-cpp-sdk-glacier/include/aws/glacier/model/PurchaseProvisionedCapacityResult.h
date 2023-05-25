/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  class PurchaseProvisionedCapacityResult
  {
  public:
    AWS_GLACIER_API PurchaseProvisionedCapacityResult();
    AWS_GLACIER_API PurchaseProvisionedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API PurchaseProvisionedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline const Aws::String& GetCapacityId() const{ return m_capacityId; }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(const Aws::String& value) { m_capacityId = value; }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(Aws::String&& value) { m_capacityId = std::move(value); }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(const char* value) { m_capacityId.assign(value); }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline PurchaseProvisionedCapacityResult& WithCapacityId(const Aws::String& value) { SetCapacityId(value); return *this;}

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline PurchaseProvisionedCapacityResult& WithCapacityId(Aws::String&& value) { SetCapacityId(std::move(value)); return *this;}

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline PurchaseProvisionedCapacityResult& WithCapacityId(const char* value) { SetCapacityId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PurchaseProvisionedCapacityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PurchaseProvisionedCapacityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PurchaseProvisionedCapacityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_capacityId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
