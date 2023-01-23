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

        static const int Associated_HASH = HashingUtils::HashString("Associated");
        static const int Associating_HASH = HashingUtils::HashString("Associating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Disassociating_HASH = HashingUtils::HashString("Disassociating");
        static const int Disassociated_HASH = HashingUtils::HashString("Disassociated");


        RepositoryAssociationState GetRepositoryAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
