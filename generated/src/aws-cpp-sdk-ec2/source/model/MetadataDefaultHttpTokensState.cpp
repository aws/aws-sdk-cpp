/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MetadataDefaultHttpTokensState.h>
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
      namespace MetadataDefaultHttpTokensStateMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");
        static const int no_preference_HASH = HashingUtils::HashString("no-preference");


        MetadataDefaultHttpTokensState GetMetadataDefaultHttpTokensStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return MetadataDefaultHttpTokensState::optional;
          }
          else if (hashCode == required_HASH)
          {
            return MetadataDefaultHttpTokensState::required;
          }
          else if (hashCode == no_preference_HASH)
          {
            return MetadataDefaultHttpTokensState::no_preference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataDefaultHttpTokensState>(hashCode);
          }

          return MetadataDefaultHttpTokensState::NOT_SET;
        }

        Aws::String GetNameForMetadataDefaultHttpTokensState(MetadataDefaultHttpTokensState enumValue)
        {
          switch(enumValue)
          {
          case MetadataDefaultHttpTokensState::NOT_SET:
            return {};
          case MetadataDefaultHttpTokensState::optional:
            return "optional";
          case MetadataDefaultHttpTokensState::required:
            return "required";
          case MetadataDefaultHttpTokensState::no_preference:
            return "no-preference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataDefaultHttpTokensStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
