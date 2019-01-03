/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/securityhub/model/VerificationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace VerificationStateMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int TRUE_POSITIVE_HASH = HashingUtils::HashString("TRUE_POSITIVE");
        static const int FALSE_POSITIVE_HASH = HashingUtils::HashString("FALSE_POSITIVE");
        static const int BENIGN_POSITIVE_HASH = HashingUtils::HashString("BENIGN_POSITIVE");


        VerificationState GetVerificationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return VerificationState::UNKNOWN;
          }
          else if (hashCode == TRUE_POSITIVE_HASH)
          {
            return VerificationState::TRUE_POSITIVE;
          }
          else if (hashCode == FALSE_POSITIVE_HASH)
          {
            return VerificationState::FALSE_POSITIVE;
          }
          else if (hashCode == BENIGN_POSITIVE_HASH)
          {
            return VerificationState::BENIGN_POSITIVE;
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
          case VerificationState::UNKNOWN:
            return "UNKNOWN";
          case VerificationState::TRUE_POSITIVE:
            return "TRUE_POSITIVE";
          case VerificationState::FALSE_POSITIVE:
            return "FALSE_POSITIVE";
          case VerificationState::BENIGN_POSITIVE:
            return "BENIGN_POSITIVE";
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
  } // namespace SecurityHub
} // namespace Aws
