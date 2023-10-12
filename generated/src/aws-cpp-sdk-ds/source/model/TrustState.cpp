/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Verifying_HASH = ConstExprHashingUtils::HashString("Verifying");
        static constexpr uint32_t VerifyFailed_HASH = ConstExprHashingUtils::HashString("VerifyFailed");
        static constexpr uint32_t Verified_HASH = ConstExprHashingUtils::HashString("Verified");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t UpdateFailed_HASH = ConstExprHashingUtils::HashString("UpdateFailed");
        static constexpr uint32_t Updated_HASH = ConstExprHashingUtils::HashString("Updated");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        TrustState GetTrustStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Updating_HASH)
          {
            return TrustState::Updating;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return TrustState::UpdateFailed;
          }
          else if (hashCode == Updated_HASH)
          {
            return TrustState::Updated;
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
          case TrustState::NOT_SET:
            return {};
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
          case TrustState::Updating:
            return "Updating";
          case TrustState::UpdateFailed:
            return "UpdateFailed";
          case TrustState::Updated:
            return "Updated";
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

            return {};
          }
        }

      } // namespace TrustStateMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
