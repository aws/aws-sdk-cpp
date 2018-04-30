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
#include <aws/route53domains/model/Transferable.h>
#include <utility>

namespace Aws
{
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
   * <p>A complex type that contains information about whether the specified domain
   * can be transferred to Amazon Route 53.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainTransferability">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API DomainTransferability
  {
  public:
    DomainTransferability();
    DomainTransferability(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainTransferability& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Transferable& GetTransferable() const{ return m_transferable; }

    
    inline void SetTransferable(const Transferable& value) { m_transferableHasBeenSet = true; m_transferable = value; }

    
    inline void SetTransferable(Transferable&& value) { m_transferableHasBeenSet = true; m_transferable = std::move(value); }

    
    inline DomainTransferability& WithTransferable(const Transferable& value) { SetTransferable(value); return *this;}

    
    inline DomainTransferability& WithTransferable(Transferable&& value) { SetTransferable(std::move(value)); return *this;}

  private:

    Transferable m_transferable;
    bool m_transferableHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
