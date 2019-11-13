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

#include <aws/dataexchange/model/Origin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace OriginMapper
      {

        static const int OWNED_HASH = HashingUtils::HashString("OWNED");
        static const int ENTITLED_HASH = HashingUtils::HashString("ENTITLED");


        Origin GetOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNED_HASH)
          {
            return Origin::OWNED;
          }
          else if (hashCode == ENTITLED_HASH)
          {
            return Origin::ENTITLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Origin>(hashCode);
          }

          return Origin::NOT_SET;
        }

        Aws::String GetNameForOrigin(Origin enumValue)
        {
          switch(enumValue)
          {
          case Origin::OWNED:
            return "OWNED";
          case Origin::ENTITLED:
            return "ENTITLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
