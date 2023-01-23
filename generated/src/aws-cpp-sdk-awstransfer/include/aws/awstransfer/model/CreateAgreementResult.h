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
  class CreateAgreementResult
  {
  public:
    AWS_TRANSFER_API CreateAgreementResult();
    AWS_TRANSFER_API CreateAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline CreateAgreementResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline CreateAgreementResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline CreateAgreementResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}

  private:

    Aws::String m_agreementId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
