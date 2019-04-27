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

#include <aws/ssm/model/ParameterTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ParameterTierMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int Advanced_HASH = HashingUtils::HashString("Advanced");


        ParameterTier GetParameterTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return ParameterTier::Standard;
          }
          else if (hashCode == Advanced_HASH)
          {
            return ParameterTier::Advanced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterTier>(hashCode);
          }

          return ParameterTier::NOT_SET;
        }

        Aws::String GetNameForParameterTier(ParameterTier enumValue)
        {
          switch(enumValue)
          {
          case ParameterTier::Standard:
            return "Standard";
          case ParameterTier::Advanced:
            return "Advanced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTierMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
