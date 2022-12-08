/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  /**
   * <p>The result of the <code>ResolveCustomer</code> operation. Contains the
   * <code>CustomerIdentifier</code> along with the <code>CustomerAWSAccountId</code>
   * and <code>ProductCode</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomerResult">AWS
   * API Reference</a></p>
   */
  class ResolveCustomerResult
  {
  public:
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult();
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const{ return m_customerIdentifier; }

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline void SetCustomerIdentifier(const Aws::String& value) { m_customerIdentifier = value; }

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline void SetCustomerIdentifier(Aws::String&& value) { m_customerIdentifier = std::move(value); }

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline void SetCustomerIdentifier(const char* value) { m_customerIdentifier.assign(value); }

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(const Aws::String& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(Aws::String&& value) { SetCustomerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(const char* value) { SetCustomerIdentifier(value); return *this;}


    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCode = value; }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCode = std::move(value); }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline void SetProductCode(const char* value) { m_productCode.assign(value); }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline const Aws::String& GetCustomerAWSAccountId() const{ return m_customerAWSAccountId; }

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline void SetCustomerAWSAccountId(const Aws::String& value) { m_customerAWSAccountId = value; }

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline void SetCustomerAWSAccountId(Aws::String&& value) { m_customerAWSAccountId = std::move(value); }

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline void SetCustomerAWSAccountId(const char* value) { m_customerAWSAccountId.assign(value); }

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline ResolveCustomerResult& WithCustomerAWSAccountId(const Aws::String& value) { SetCustomerAWSAccountId(value); return *this;}

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline ResolveCustomerResult& WithCustomerAWSAccountId(Aws::String&& value) { SetCustomerAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the AWS account ID associated
     * with the <code>CustomerIdentifier</code> for the individual customer.</p>
     */
    inline ResolveCustomerResult& WithCustomerAWSAccountId(const char* value) { SetCustomerAWSAccountId(value); return *this;}

  private:

    Aws::String m_customerIdentifier;

    Aws::String m_productCode;

    Aws::String m_customerAWSAccountId;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
