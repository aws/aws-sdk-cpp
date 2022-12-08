/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedAgreement.h>
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
  class DescribeAgreementResult
  {
  public:
    AWS_TRANSFER_API DescribeAgreementResult();
    AWS_TRANSFER_API DescribeAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details for the specified agreement, returned as a
     * <code>DescribedAgreement</code> object.</p>
     */
    inline const DescribedAgreement& GetAgreement() const{ return m_agreement; }

    /**
     * <p>The details for the specified agreement, returned as a
     * <code>DescribedAgreement</code> object.</p>
     */
    inline void SetAgreement(const DescribedAgreement& value) { m_agreement = value; }

    /**
     * <p>The details for the specified agreement, returned as a
     * <code>DescribedAgreement</code> object.</p>
     */
    inline void SetAgreement(DescribedAgreement&& value) { m_agreement = std::move(value); }

    /**
     * <p>The details for the specified agreement, returned as a
     * <code>DescribedAgreement</code> object.</p>
     */
    inline DescribeAgreementResult& WithAgreement(const DescribedAgreement& value) { SetAgreement(value); return *this;}

    /**
     * <p>The details for the specified agreement, returned as a
     * <code>DescribedAgreement</code> object.</p>
     */
    inline DescribeAgreementResult& WithAgreement(DescribedAgreement&& value) { SetAgreement(std::move(value)); return *this;}

  private:

    DescribedAgreement m_agreement;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
