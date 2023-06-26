/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class StartProductSubscriptionResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline const ProductUserSummary& GetProductUserSummary() const{ return m_productUserSummary; }

    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline void SetProductUserSummary(const ProductUserSummary& value) { m_productUserSummary = value; }

    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline void SetProductUserSummary(ProductUserSummary&& value) { m_productUserSummary = std::move(value); }

    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline StartProductSubscriptionResult& WithProductUserSummary(const ProductUserSummary& value) { SetProductUserSummary(value); return *this;}

    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline StartProductSubscriptionResult& WithProductUserSummary(ProductUserSummary&& value) { SetProductUserSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartProductSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartProductSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartProductSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProductUserSummary m_productUserSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
