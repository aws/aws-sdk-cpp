/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class UpdateCertificateResult
  {
  public:
    AWS_TRANSFER_API UpdateCertificateResult();
    AWS_TRANSFER_API UpdateCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>Returns the identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:

    Aws::String m_certificateId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
