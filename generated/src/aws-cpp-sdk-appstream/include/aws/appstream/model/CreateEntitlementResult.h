/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Entitlement.h>
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
  class CreateEntitlementResult
  {
  public:
    AWS_APPSTREAM_API CreateEntitlementResult();
    AWS_APPSTREAM_API CreateEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateEntitlementResult& WithEntitlement(const Entitlement& value) { SetEntitlement(value); return *this;}

    /**
     * <p>The entitlement.</p>
     */
    inline CreateEntitlementResult& WithEntitlement(Entitlement&& value) { SetEntitlement(std::move(value)); return *this;}

  private:

    Entitlement m_entitlement;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
