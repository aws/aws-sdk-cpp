/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcBlockPublicAccessState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VpcBlockPublicAccessStateMapper
      {

        static const int default_state_HASH = HashingUtils::HashString("default-state");
        static const int update_in_progress_HASH = HashingUtils::HashString("update-in-progress");
        static const int update_complete_HASH = HashingUtils::HashString("update-complete");


        VpcBlockPublicAccessState GetVpcBlockPublicAccessStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default_state_HASH)
          {
            return VpcBlockPublicAccessState::default_state;
          }
          else if (hashCode == update_in_progress_HASH)
          {
            return VpcBlockPublicAccessState::update_in_progress;
          }
          else if (hashCode == update_complete_HASH)
          {
            return VpcBlockPublicAccessState::update_complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcBlockPublicAccessState>(hashCode);
          }

          return VpcBlockPublicAccessState::NOT_SET;
        }

        Aws::String GetNameForVpcBlockPublicAccessState(VpcBlockPublicAccessState enumValue)
        {
          switch(enumValue)
          {
          case VpcBlockPublicAccessState::NOT_SET:
            return {};
          case VpcBlockPublicAccessState::default_state:
            return "default-state";
          case VpcBlockPublicAccessState::update_in_progress:
            return "update-in-progress";
          case VpcBlockPublicAccessState::update_complete:
            return "update-complete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcBlockPublicAccessStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
