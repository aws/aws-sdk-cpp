/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressionListImportAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace SuppressionListImportActionMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int PUT_HASH = HashingUtils::HashString("PUT");


        SuppressionListImportAction GetSuppressionListImportActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return SuppressionListImportAction::DELETE_;
          }
          else if (hashCode == PUT_HASH)
          {
            return SuppressionListImportAction::PUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuppressionListImportAction>(hashCode);
          }

          return SuppressionListImportAction::NOT_SET;
        }

        Aws::String GetNameForSuppressionListImportAction(SuppressionListImportAction enumValue)
        {
          switch(enumValue)
          {
          case SuppressionListImportAction::DELETE_:
            return "DELETE";
          case SuppressionListImportAction::PUT:
            return "PUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuppressionListImportActionMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
