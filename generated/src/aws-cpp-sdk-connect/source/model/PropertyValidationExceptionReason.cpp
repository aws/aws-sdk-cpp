/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PropertyValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace PropertyValidationExceptionReasonMapper
      {

        static constexpr uint32_t INVALID_FORMAT_HASH = ConstExprHashingUtils::HashString("INVALID_FORMAT");
        static constexpr uint32_t UNIQUE_CONSTRAINT_VIOLATED_HASH = ConstExprHashingUtils::HashString("UNIQUE_CONSTRAINT_VIOLATED");
        static constexpr uint32_t REFERENCED_RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("REFERENCED_RESOURCE_NOT_FOUND");
        static constexpr uint32_t RESOURCE_NAME_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("RESOURCE_NAME_ALREADY_EXISTS");
        static constexpr uint32_t REQUIRED_PROPERTY_MISSING_HASH = ConstExprHashingUtils::HashString("REQUIRED_PROPERTY_MISSING");
        static constexpr uint32_t NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("NOT_SUPPORTED");


        PropertyValidationExceptionReason GetPropertyValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_FORMAT_HASH)
          {
            return PropertyValidationExceptionReason::INVALID_FORMAT;
          }
          else if (hashCode == UNIQUE_CONSTRAINT_VIOLATED_HASH)
          {
            return PropertyValidationExceptionReason::UNIQUE_CONSTRAINT_VIOLATED;
          }
          else if (hashCode == REFERENCED_RESOURCE_NOT_FOUND_HASH)
          {
            return PropertyValidationExceptionReason::REFERENCED_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == RESOURCE_NAME_ALREADY_EXISTS_HASH)
          {
            return PropertyValidationExceptionReason::RESOURCE_NAME_ALREADY_EXISTS;
          }
          else if (hashCode == REQUIRED_PROPERTY_MISSING_HASH)
          {
            return PropertyValidationExceptionReason::REQUIRED_PROPERTY_MISSING;
          }
          else if (hashCode == NOT_SUPPORTED_HASH)
          {
            return PropertyValidationExceptionReason::NOT_SUPPORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyValidationExceptionReason>(hashCode);
          }

          return PropertyValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForPropertyValidationExceptionReason(PropertyValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case PropertyValidationExceptionReason::NOT_SET:
            return {};
          case PropertyValidationExceptionReason::INVALID_FORMAT:
            return "INVALID_FORMAT";
          case PropertyValidationExceptionReason::UNIQUE_CONSTRAINT_VIOLATED:
            return "UNIQUE_CONSTRAINT_VIOLATED";
          case PropertyValidationExceptionReason::REFERENCED_RESOURCE_NOT_FOUND:
            return "REFERENCED_RESOURCE_NOT_FOUND";
          case PropertyValidationExceptionReason::RESOURCE_NAME_ALREADY_EXISTS:
            return "RESOURCE_NAME_ALREADY_EXISTS";
          case PropertyValidationExceptionReason::REQUIRED_PROPERTY_MISSING:
            return "REQUIRED_PROPERTY_MISSING";
          case PropertyValidationExceptionReason::NOT_SUPPORTED:
            return "NOT_SUPPORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyValidationExceptionReasonMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
