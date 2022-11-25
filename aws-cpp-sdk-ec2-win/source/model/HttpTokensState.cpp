/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HttpTokensState.h>
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
      namespace HttpTokensStateMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");


        HttpTokensState GetHttpTokensStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return HttpTokensState::optional;
          }
          else if (hashCode == required_HASH)
          {
            return HttpTokensState::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpTokensState>(hashCode);
          }

          return HttpTokensState::NOT_SET;
        }

        Aws::String GetNameForHttpTokensState(HttpTokensState enumValue)
        {
          switch(enumValue)
          {
          case HttpTokensState::optional:
            return "optional";
          case HttpTokensState::required:
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

      } // namespace HttpTokensStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
