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
  class UpdateAgreementResult
  {
  public:
    AWS_TRANSFER_API UpdateAgreementResult();
    AWS_TRANSFER_API UpdateAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline UpdateAgreementResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline UpdateAgreementResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline UpdateAgreementResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}

  private:

    Aws::String m_agreementId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
