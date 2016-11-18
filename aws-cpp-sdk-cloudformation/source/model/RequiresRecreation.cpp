/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/RequiresRecreation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace RequiresRecreationMapper
      {

        static const int Never_HASH = HashingUtils::HashString("Never");
        static const int Conditionally_HASH = HashingUtils::HashString("Conditionally");
        static const int Always_HASH = HashingUtils::HashString("Always");


        RequiresRecreation GetRequiresRecreationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Never_HASH)
          {
            return RequiresRecreation::Never;
          }
          else if (hashCode == Conditionally_HASH)
          {
            return RequiresRecreation::Conditionally;
          }
          else if (hashCode == Always_HASH)
          {
            return RequiresRecreation::Always;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiresRecreation>(hashCode);
          }

          return RequiresRecreation::NOT_SET;
        }

        Aws::String GetNameForRequiresRecreation(RequiresRecreation enumValue)
        {
          switch(enumValue)
          {
          case RequiresRecreation::Never:
            return "Never";
          case RequiresRecreation::Conditionally:
            return "Conditionally";
          case RequiresRecreation::Always:
            return "Always";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RequiresRecreationMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
