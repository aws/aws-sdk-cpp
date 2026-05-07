/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/InvoiceFrequency.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace InvoiceFrequencyMapper {

static const int ONE_TIME_HASH = HashingUtils::HashString("ONE_TIME");
static const int RECURRING_HASH = HashingUtils::HashString("RECURRING");

InvoiceFrequency GetInvoiceFrequencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONE_TIME_HASH) {
    return InvoiceFrequency::ONE_TIME;
  } else if (hashCode == RECURRING_HASH) {
    return InvoiceFrequency::RECURRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvoiceFrequency>(hashCode);
  }

  return InvoiceFrequency::NOT_SET;
}

Aws::String GetNameForInvoiceFrequency(InvoiceFrequency enumValue) {
  switch (enumValue) {
    case InvoiceFrequency::NOT_SET:
      return {};
    case InvoiceFrequency::ONE_TIME:
      return "ONE_TIME";
    case InvoiceFrequency::RECURRING:
      return "RECURRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvoiceFrequencyMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
