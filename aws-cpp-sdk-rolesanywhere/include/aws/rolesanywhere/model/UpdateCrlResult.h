/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/CrlDetail.h>
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
  class UpdateCrlResult
  {
  public:
    AWS_ROLESANYWHERE_API UpdateCrlResult();
    AWS_ROLESANYWHERE_API UpdateCrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API UpdateCrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline const CrlDetail& GetCrl() const{ return m_crl; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrl(const CrlDetail& value) { m_crl = value; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrl(CrlDetail&& value) { m_crl = std::move(value); }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline UpdateCrlResult& WithCrl(const CrlDetail& value) { SetCrl(value); return *this;}

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline UpdateCrlResult& WithCrl(CrlDetail&& value) { SetCrl(std::move(value)); return *this;}

  private:

    CrlDetail m_crl;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
