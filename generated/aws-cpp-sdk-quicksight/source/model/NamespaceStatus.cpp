/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NamespaceStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int RETRYABLE_FAILURE_HASH = HashingUtils::HashString("RETRYABLE_FAILURE");
        static const int NON_RETRYABLE_FAILURE_HASH = HashingUtils::HashString("NON_RETRYABLE_FAILURE");


        NamespaceStatus GetNamespaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NamespaceStatus::CREATED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return NamespaceStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NamespaceStatus::DELETING;
          }
          else if (hashCode == RETRYABLE_FAILURE_HASH)
          {
            return NamespaceStatus::RETRYABLE_FAILURE;
          }
          else if (hashCode == NON_RETRYABLE_FAILURE_HASH)
          {
            return NamespaceStatus::NON_RETRYABLE_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceStatus>(hashCode);
          }

          return NamespaceStatus::NOT_SET;
        }

        Aws::String GetNameForNamespaceStatus(NamespaceStatus enumValue)
        {
          switch(enumValue)
          {
          case NamespaceStatus::CREATED:
            return "CREATED";
          case NamespaceStatus::CREATING:
            return "CREATING";
          case NamespaceStatus::DELETING:
            return "DELETING";
          case NamespaceStatus::RETRYABLE_FAILURE:
            return "RETRYABLE_FAILURE";
          case NamespaceStatus::NON_RETRYABLE_FAILURE:
            return "NON_RETRYABLE_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
