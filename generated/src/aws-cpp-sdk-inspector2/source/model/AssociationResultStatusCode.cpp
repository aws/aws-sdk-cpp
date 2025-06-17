/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AssociationResultStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace AssociationResultStatusCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int SCAN_CONFIGURATION_NOT_FOUND_HASH = HashingUtils::HashString("SCAN_CONFIGURATION_NOT_FOUND");
        static const int INVALID_INPUT_HASH = HashingUtils::HashString("INVALID_INPUT");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");


        AssociationResultStatusCode GetAssociationResultStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return AssociationResultStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return AssociationResultStatusCode::ACCESS_DENIED;
          }
          else if (hashCode == SCAN_CONFIGURATION_NOT_FOUND_HASH)
          {
            return AssociationResultStatusCode::SCAN_CONFIGURATION_NOT_FOUND;
          }
          else if (hashCode == INVALID_INPUT_HASH)
          {
            return AssociationResultStatusCode::INVALID_INPUT;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return AssociationResultStatusCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return AssociationResultStatusCode::QUOTA_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationResultStatusCode>(hashCode);
          }

          return AssociationResultStatusCode::NOT_SET;
        }

        Aws::String GetNameForAssociationResultStatusCode(AssociationResultStatusCode enumValue)
        {
          switch(enumValue)
          {
          case AssociationResultStatusCode::NOT_SET:
            return {};
          case AssociationResultStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case AssociationResultStatusCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case AssociationResultStatusCode::SCAN_CONFIGURATION_NOT_FOUND:
            return "SCAN_CONFIGURATION_NOT_FOUND";
          case AssociationResultStatusCode::INVALID_INPUT:
            return "INVALID_INPUT";
          case AssociationResultStatusCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case AssociationResultStatusCode::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationResultStatusCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
