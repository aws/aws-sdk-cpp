/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ListInvoiceSummariesResourceType.h>
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
   * <p>Specifies the invoice summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceSummariesSelector">AWS
   * API Reference</a></p>
   */
  class InvoiceSummariesSelector
  {
  public:
    AWS_INVOICING_API InvoiceSummariesSelector() = default;
    AWS_INVOICING_API InvoiceSummariesSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceSummariesSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query identifier type (<code>INVOICE_ID</code> or
     * <code>ACCOUNT_ID</code>).</p>
     */
    inline ListInvoiceSummariesResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ListInvoiceSummariesResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline InvoiceSummariesSelector& WithResourceType(ListInvoiceSummariesResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the query identifier.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    InvoiceSummariesSelector& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ListInvoiceSummariesResourceType m_resourceType{ListInvoiceSummariesResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
