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

#include <aws/appsync/model/ResolverKind.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ResolverKindMapper
      {

        static const int UNIT_HASH = HashingUtils::HashString("UNIT");
        static const int PIPELINE_HASH = HashingUtils::HashString("PIPELINE");


        ResolverKind GetResolverKindForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIT_HASH)
          {
            return ResolverKind::UNIT;
          }
          else if (hashCode == PIPELINE_HASH)
          {
            return ResolverKind::PIPELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverKind>(hashCode);
          }

          return ResolverKind::NOT_SET;
        }

        Aws::String GetNameForResolverKind(ResolverKind enumValue)
        {
          switch(enumValue)
          {
          case ResolverKind::UNIT:
            return "UNIT";
          case ResolverKind::PIPELINE:
            return "PIPELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverKindMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
