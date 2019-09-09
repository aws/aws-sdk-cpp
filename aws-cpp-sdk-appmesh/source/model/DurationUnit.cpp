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

#include <aws/appmesh/model/DurationUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace DurationUnitMapper
      {

        static const int ms_HASH = HashingUtils::HashString("ms");
        static const int s_HASH = HashingUtils::HashString("s");


        DurationUnit GetDurationUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ms_HASH)
          {
            return DurationUnit::ms;
          }
          else if (hashCode == s_HASH)
          {
            return DurationUnit::s;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DurationUnit>(hashCode);
          }

          return DurationUnit::NOT_SET;
        }

        Aws::String GetNameForDurationUnit(DurationUnit enumValue)
        {
          switch(enumValue)
          {
          case DurationUnit::ms:
            return "ms";
          case DurationUnit::s:
            return "s";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationUnitMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
