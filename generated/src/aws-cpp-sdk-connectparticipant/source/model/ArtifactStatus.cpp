/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ArtifactStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ArtifactStatusMapper
      {

        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");


        ArtifactStatus GetArtifactStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return ArtifactStatus::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ArtifactStatus::REJECTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ArtifactStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactStatus>(hashCode);
          }

          return ArtifactStatus::NOT_SET;
        }

        Aws::String GetNameForArtifactStatus(ArtifactStatus enumValue)
        {
          switch(enumValue)
          {
          case ArtifactStatus::NOT_SET:
            return {};
          case ArtifactStatus::APPROVED:
            return "APPROVED";
          case ArtifactStatus::REJECTED:
            return "REJECTED";
          case ArtifactStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactStatusMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
