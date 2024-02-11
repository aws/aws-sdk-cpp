/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/VerificationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace VerificationStateMapper
      {

        static const int FALSE_POSITIVE_HASH = HashingUtils::HashString("FALSE_POSITIVE");
        static const int BENIGN_POSITIVE_HASH = HashingUtils::HashString("BENIGN_POSITIVE");
        static const int TRUE_POSITIVE_HASH = HashingUtils::HashString("TRUE_POSITIVE");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        VerificationState GetVerificationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FALSE_POSITIVE_HASH)
          {
            return VerificationState::FALSE_POSITIVE;
          }
          else if (hashCode == BENIGN_POSITIVE_HASH)
          {
            return VerificationState::BENIGN_POSITIVE;
          }
          else if (hashCode == TRUE_POSITIVE_HASH)
          {
            return VerificationState::TRUE_POSITIVE;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return VerificationState::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationState>(hashCode);
          }

          return VerificationState::NOT_SET;
        }

        Aws::String GetNameForVerificationState(VerificationState enumValue)
        {
          switch(enumValue)
          {
          case VerificationState::NOT_SET:
            return {};
          case VerificationState::FALSE_POSITIVE:
            return "FALSE_POSITIVE";
          case VerificationState::BENIGN_POSITIVE:
            return "BENIGN_POSITIVE";
          case VerificationState::TRUE_POSITIVE:
            return "TRUE_POSITIVE";
          case VerificationState::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationStateMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
