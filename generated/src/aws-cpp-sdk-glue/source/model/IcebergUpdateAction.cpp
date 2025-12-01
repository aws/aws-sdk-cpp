/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/IcebergUpdateAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace IcebergUpdateActionMapper {

static const int add_schema_HASH = HashingUtils::HashString("add-schema");
static const int set_current_schema_HASH = HashingUtils::HashString("set-current-schema");
static const int add_spec_HASH = HashingUtils::HashString("add-spec");
static const int set_default_spec_HASH = HashingUtils::HashString("set-default-spec");
static const int add_sort_order_HASH = HashingUtils::HashString("add-sort-order");
static const int set_default_sort_order_HASH = HashingUtils::HashString("set-default-sort-order");
static const int set_location_HASH = HashingUtils::HashString("set-location");
static const int set_properties_HASH = HashingUtils::HashString("set-properties");
static const int remove_properties_HASH = HashingUtils::HashString("remove-properties");
static const int add_encryption_key_HASH = HashingUtils::HashString("add-encryption-key");
static const int remove_encryption_key_HASH = HashingUtils::HashString("remove-encryption-key");

IcebergUpdateAction GetIcebergUpdateActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == add_schema_HASH) {
    return IcebergUpdateAction::add_schema;
  } else if (hashCode == set_current_schema_HASH) {
    return IcebergUpdateAction::set_current_schema;
  } else if (hashCode == add_spec_HASH) {
    return IcebergUpdateAction::add_spec;
  } else if (hashCode == set_default_spec_HASH) {
    return IcebergUpdateAction::set_default_spec;
  } else if (hashCode == add_sort_order_HASH) {
    return IcebergUpdateAction::add_sort_order;
  } else if (hashCode == set_default_sort_order_HASH) {
    return IcebergUpdateAction::set_default_sort_order;
  } else if (hashCode == set_location_HASH) {
    return IcebergUpdateAction::set_location;
  } else if (hashCode == set_properties_HASH) {
    return IcebergUpdateAction::set_properties;
  } else if (hashCode == remove_properties_HASH) {
    return IcebergUpdateAction::remove_properties;
  } else if (hashCode == add_encryption_key_HASH) {
    return IcebergUpdateAction::add_encryption_key;
  } else if (hashCode == remove_encryption_key_HASH) {
    return IcebergUpdateAction::remove_encryption_key;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IcebergUpdateAction>(hashCode);
  }

  return IcebergUpdateAction::NOT_SET;
}

Aws::String GetNameForIcebergUpdateAction(IcebergUpdateAction enumValue) {
  switch (enumValue) {
    case IcebergUpdateAction::NOT_SET:
      return {};
    case IcebergUpdateAction::add_schema:
      return "add-schema";
    case IcebergUpdateAction::set_current_schema:
      return "set-current-schema";
    case IcebergUpdateAction::add_spec:
      return "add-spec";
    case IcebergUpdateAction::set_default_spec:
      return "set-default-spec";
    case IcebergUpdateAction::add_sort_order:
      return "add-sort-order";
    case IcebergUpdateAction::set_default_sort_order:
      return "set-default-sort-order";
    case IcebergUpdateAction::set_location:
      return "set-location";
    case IcebergUpdateAction::set_properties:
      return "set-properties";
    case IcebergUpdateAction::remove_properties:
      return "remove-properties";
    case IcebergUpdateAction::add_encryption_key:
      return "add-encryption-key";
    case IcebergUpdateAction::remove_encryption_key:
      return "remove-encryption-key";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IcebergUpdateActionMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
