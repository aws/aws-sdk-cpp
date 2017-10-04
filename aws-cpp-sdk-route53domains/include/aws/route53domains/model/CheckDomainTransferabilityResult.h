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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainTransferability.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The CheckDomainTransferability response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferabilityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult
  {
  public:
    CheckDomainTransferabilityResult();
    CheckDomainTransferabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CheckDomainTransferabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Amazon Route 53.</p>
     */
    inline const DomainTransferability& GetTransferability() const{ return m_transferability; }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Amazon Route 53.</p>
     */
    inline void SetTransferability(const DomainTransferability& value) { m_transferability = value; }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Amazon Route 53.</p>
     */
    inline void SetTransferability(DomainTransferability&& value) { m_transferability = std::move(value); }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Amazon Route 53.</p>
     */
    inline CheckDomainTransferabilityResult& WithTransferability(const DomainTransferability& value) { SetTransferability(value); return *this;}

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Amazon Route 53.</p>
     */
    inline CheckDomainTransferabilityResult& WithTransferability(DomainTransferability&& value) { SetTransferability(std::move(value)); return *this;}

  private:

    DomainTransferability m_transferability;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
