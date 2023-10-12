/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace RepositoryAssociationStateMapper
      {

        static constexpr uint32_t Associated_HASH = ConstExprHashingUtils::HashString("Associated");
        static constexpr uint32_t Associating_HASH = ConstExprHashingUtils::HashString("Associating");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Disassociating_HASH = ConstExprHashingUtils::HashString("Disassociating");
        static constexpr uint32_t Disassociated_HASH = ConstExprHashingUtils::HashString("Disassociated");


        RepositoryAssociationState GetRepositoryAssociationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Associated_HASH)
          {
            return RepositoryAssociationState::Associated;
          }
          else if (hashCode == Associating_HASH)
          {
            return RepositoryAssociationState::Associating;
          }
          else if (hashCode == Failed_HASH)
          {
            return RepositoryAssociationState::Failed;
          }
          else if (hashCode == Disassociating_HASH)
          {
            return RepositoryAssociationState::Disassociating;
          }
          else if (hashCode == Disassociated_HASH)
          {
            return RepositoryAssociationState::Disassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryAssociationState>(hashCode);
          }

          return RepositoryAssociationState::NOT_SET;
        }

        Aws::String GetNameForRepositoryAssociationState(RepositoryAssociationState enumValue)
        {
          switch(enumValue)
          {
          case RepositoryAssociationState::NOT_SET:
            return {};
          case RepositoryAssociationState::Associated:
            return "Associated";
          case RepositoryAssociationState::Associating:
            return "Associating";
          case RepositoryAssociationState::Failed:
            return "Failed";
          case RepositoryAssociationState::Disassociating:
            return "Disassociating";
          case RepositoryAssociationState::Disassociated:
            return "Disassociated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryAssociationStateMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
