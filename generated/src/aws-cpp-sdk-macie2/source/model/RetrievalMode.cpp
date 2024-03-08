/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/RetrievalMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace RetrievalModeMapper
      {

        static const int CALLER_CREDENTIALS_HASH = HashingUtils::HashString("CALLER_CREDENTIALS");
        static const int ASSUME_ROLE_HASH = HashingUtils::HashString("ASSUME_ROLE");


        RetrievalMode GetRetrievalModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CALLER_CREDENTIALS_HASH)
          {
            return RetrievalMode::CALLER_CREDENTIALS;
          }
          else if (hashCode == ASSUME_ROLE_HASH)
          {
            return RetrievalMode::ASSUME_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalMode>(hashCode);
          }

          return RetrievalMode::NOT_SET;
        }

        Aws::String GetNameForRetrievalMode(RetrievalMode enumValue)
        {
          switch(enumValue)
          {
          case RetrievalMode::NOT_SET:
            return {};
          case RetrievalMode::CALLER_CREDENTIALS:
            return "CALLER_CREDENTIALS";
          case RetrievalMode::ASSUME_ROLE:
            return "ASSUME_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalModeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
