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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API EnableImportFindingsForProductResult
  {
  public:
    EnableImportFindingsForProductResult();
    EnableImportFindingsForProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnableImportFindingsForProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const{ return m_productSubscriptionArn; }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(const Aws::String& value) { m_productSubscriptionArn = value; }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(Aws::String&& value) { m_productSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(const char* value) { m_productSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(const Aws::String& value) { SetProductSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(Aws::String&& value) { SetProductSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(const char* value) { SetProductSubscriptionArn(value); return *this;}

  private:

    Aws::String m_productSubscriptionArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
