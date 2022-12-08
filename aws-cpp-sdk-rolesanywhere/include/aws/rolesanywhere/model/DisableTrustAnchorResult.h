/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class DisableTrustAnchorResult
  {
  public:
    AWS_ROLESANYWHERE_API DisableTrustAnchorResult();
    AWS_ROLESANYWHERE_API DisableTrustAnchorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API DisableTrustAnchorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline const TrustAnchorDetail& GetTrustAnchor() const{ return m_trustAnchor; }

    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline void SetTrustAnchor(const TrustAnchorDetail& value) { m_trustAnchor = value; }

    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline void SetTrustAnchor(TrustAnchorDetail&& value) { m_trustAnchor = std::move(value); }

    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline DisableTrustAnchorResult& WithTrustAnchor(const TrustAnchorDetail& value) { SetTrustAnchor(value); return *this;}

    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline DisableTrustAnchorResult& WithTrustAnchor(TrustAnchorDetail&& value) { SetTrustAnchor(std::move(value)); return *this;}

  private:

    TrustAnchorDetail m_trustAnchor;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
