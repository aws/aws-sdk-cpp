/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace AssociationStatusMapper
      {

        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");


        AssociationStatus GetAssociationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return AssociationStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssociationStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return AssociationStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationStatus>(hashCode);
          }

          return AssociationStatus::NOT_SET;
        }

        Aws::String GetNameForAssociationStatus(AssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case AssociationStatus::NOT_SET:
            return {};
          case AssociationStatus::PROCESSING:
            return "PROCESSING";
          case AssociationStatus::FAILED:
            return "FAILED";
          case AssociationStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationStatusMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
