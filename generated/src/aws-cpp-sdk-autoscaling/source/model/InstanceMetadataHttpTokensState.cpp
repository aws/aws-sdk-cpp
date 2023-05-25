/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceMetadataHttpTokensState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace InstanceMetadataHttpTokensStateMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");


        InstanceMetadataHttpTokensState GetInstanceMetadataHttpTokensStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return InstanceMetadataHttpTokensState::optional;
          }
          else if (hashCode == required_HASH)
          {
            return InstanceMetadataHttpTokensState::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataHttpTokensState>(hashCode);
          }

          return InstanceMetadataHttpTokensState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataHttpTokensState(InstanceMetadataHttpTokensState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataHttpTokensState::optional:
            return "optional";
          case InstanceMetadataHttpTokensState::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceMetadataHttpTokensStateMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
