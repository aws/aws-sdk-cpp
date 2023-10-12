/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/InvitationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace InvitationTypeMapper
      {

        static constexpr uint32_t INVITATION_HASH = ConstExprHashingUtils::HashString("INVITATION");
        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");


        InvitationType GetInvitationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITATION_HASH)
          {
            return InvitationType::INVITATION;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return InvitationType::ORGANIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvitationType>(hashCode);
          }

          return InvitationType::NOT_SET;
        }

        Aws::String GetNameForInvitationType(InvitationType enumValue)
        {
          switch(enumValue)
          {
          case InvitationType::NOT_SET:
            return {};
          case InvitationType::INVITATION:
            return "INVITATION";
          case InvitationType::ORGANIZATION:
            return "ORGANIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvitationTypeMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
