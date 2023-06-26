/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/ConfirmationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeService
  {
    namespace Model
    {
      namespace ConfirmationStatusMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Confirmed_HASH = HashingUtils::HashString("Confirmed");
        static const int Denied_HASH = HashingUtils::HashString("Denied");


        ConfirmationStatus GetConfirmationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return ConfirmationStatus::None;
          }
          else if (hashCode == Confirmed_HASH)
          {
            return ConfirmationStatus::Confirmed;
          }
          else if (hashCode == Denied_HASH)
          {
            return ConfirmationStatus::Denied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfirmationStatus>(hashCode);
          }

          return ConfirmationStatus::NOT_SET;
        }

        Aws::String GetNameForConfirmationStatus(ConfirmationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfirmationStatus::None:
            return "None";
          case ConfirmationStatus::Confirmed:
            return "Confirmed";
          case ConfirmationStatus::Denied:
            return "Denied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfirmationStatusMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
