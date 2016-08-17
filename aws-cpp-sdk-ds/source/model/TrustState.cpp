/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/TrustState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace TrustStateMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Verifying_HASH = HashingUtils::HashString("Verifying");
        static const int VerifyFailed_HASH = HashingUtils::HashString("VerifyFailed");
        static const int Verified_HASH = HashingUtils::HashString("Verified");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        TrustState GetTrustStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return TrustState::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return TrustState::Created;
          }
          else if (hashCode == Verifying_HASH)
          {
            return TrustState::Verifying;
          }
          else if (hashCode == VerifyFailed_HASH)
          {
            return TrustState::VerifyFailed;
          }
          else if (hashCode == Verified_HASH)
          {
            return TrustState::Verified;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TrustState::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return TrustState::Deleted;
          }
          else if (hashCode == Failed_HASH)
          {
            return TrustState::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustState>(hashCode);
          }

          return TrustState::NOT_SET;
        }

        Aws::String GetNameForTrustState(TrustState enumValue)
        {
          switch(enumValue)
          {
          case TrustState::Creating:
            return "Creating";
          case TrustState::Created:
            return "Created";
          case TrustState::Verifying:
            return "Verifying";
          case TrustState::VerifyFailed:
            return "VerifyFailed";
          case TrustState::Verified:
            return "Verified";
          case TrustState::Deleting:
            return "Deleting";
          case TrustState::Deleted:
            return "Deleted";
          case TrustState::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TrustStateMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
