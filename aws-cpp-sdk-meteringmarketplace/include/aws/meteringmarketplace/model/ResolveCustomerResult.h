/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The result of the ResolveCustomer operation. Contains the CustomerIdentifier
   * and product code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomerResult">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEMETERING_API ResolveCustomerResult
  {
  public:
    ResolveCustomerResult();
    ResolveCustomerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResolveCustomerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const{ return m_customerIdentifier; }

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline void SetCustomerIdentifier(const Aws::String& value) { m_customerIdentifier = value; }

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline void SetCustomerIdentifier(Aws::String&& value) { m_customerIdentifier = std::move(value); }

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline void SetCustomerIdentifier(const char* value) { m_customerIdentifier.assign(value); }

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(const Aws::String& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(Aws::String&& value) { SetCustomerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The CustomerIdentifier is used to identify an individual customer in your
     * application. Calls to BatchMeterUsage require CustomerIdentifiers for each
     * UsageRecord.</p>
     */
    inline ResolveCustomerResult& WithCustomerIdentifier(const char* value) { SetCustomerIdentifier(value); return *this;}


    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCode = value; }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCode = std::move(value); }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline void SetProductCode(const char* value) { m_productCode.assign(value); }

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent BatchMeterUsage calls should be made using this product
     * code.</p>
     */
    inline ResolveCustomerResult& WithProductCode(const char* value) { SetProductCode(value); return *this;}

  private:

    Aws::String m_customerIdentifier;

    Aws::String m_productCode;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
