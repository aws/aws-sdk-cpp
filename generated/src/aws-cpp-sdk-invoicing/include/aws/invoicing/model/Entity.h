/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p>The organization name providing Amazon Web Services services.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_INVOICING_API Entity() = default;
    AWS_INVOICING_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity that issues the Amazon Web Services invoice.</p>
     */
    inline const Aws::String& GetInvoicingEntity() const { return m_invoicingEntity; }
    inline bool InvoicingEntityHasBeenSet() const { return m_invoicingEntityHasBeenSet; }
    template<typename InvoicingEntityT = Aws::String>
    void SetInvoicingEntity(InvoicingEntityT&& value) { m_invoicingEntityHasBeenSet = true; m_invoicingEntity = std::forward<InvoicingEntityT>(value); }
    template<typename InvoicingEntityT = Aws::String>
    Entity& WithInvoicingEntity(InvoicingEntityT&& value) { SetInvoicingEntity(std::forward<InvoicingEntityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invoicingEntity;
    bool m_invoicingEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
