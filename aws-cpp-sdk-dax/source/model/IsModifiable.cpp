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

#include <aws/dax/model/IsModifiable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DAX
  {
    namespace Model
    {
      namespace IsModifiableMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");
        static const int CONDITIONAL_HASH = HashingUtils::HashString("CONDITIONAL");


        IsModifiable GetIsModifiableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return IsModifiable::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return IsModifiable::FALSE;
          }
          else if (hashCode == CONDITIONAL_HASH)
          {
            return IsModifiable::CONDITIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsModifiable>(hashCode);
          }

          return IsModifiable::NOT_SET;
        }

        Aws::String GetNameForIsModifiable(IsModifiable enumValue)
        {
          switch(enumValue)
          {
          case IsModifiable::TRUE:
            return "TRUE";
          case IsModifiable::FALSE:
            return "FALSE";
          case IsModifiable::CONDITIONAL:
            return "CONDITIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsModifiableMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
