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
