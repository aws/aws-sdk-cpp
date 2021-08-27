/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>A complex type that contains information about whether the specified domain
   * can be transferred to Route 53.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainTransferability">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API DomainTransferability
  {
  public:
    DomainTransferability();
    DomainTransferability(Aws::Utils::Json::JsonView jsonValue);
    DomainTransferability& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Transferable& GetTransferable() const{ return m_transferable; }

    
    inline bool TransferableHasBeenSet() const { return m_transferableHasBeenSet; }

    
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
