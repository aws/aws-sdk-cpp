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

#include <aws/datasync/model/Uid.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace UidMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int INT_VALUE_HASH = HashingUtils::HashString("INT_VALUE");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int BOTH_HASH = HashingUtils::HashString("BOTH");


        Uid GetUidForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Uid::NONE;
          }
          else if (hashCode == INT_VALUE_HASH)
          {
            return Uid::INT_VALUE;
          }
          else if (hashCode == NAME_HASH)
          {
            return Uid::NAME;
          }
          else if (hashCode == BOTH_HASH)
          {
            return Uid::BOTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Uid>(hashCode);
          }

          return Uid::NOT_SET;
        }

        Aws::String GetNameForUid(Uid enumValue)
        {
          switch(enumValue)
          {
          case Uid::NONE:
            return "NONE";
          case Uid::INT_VALUE:
            return "INT_VALUE";
          case Uid::NAME:
            return "NAME";
          case Uid::BOTH:
            return "BOTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UidMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
