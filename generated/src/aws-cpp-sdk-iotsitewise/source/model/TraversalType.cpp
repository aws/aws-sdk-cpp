/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TraversalType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace TraversalTypeMapper
      {

        static const int PATH_TO_ROOT_HASH = HashingUtils::HashString("PATH_TO_ROOT");


        TraversalType GetTraversalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATH_TO_ROOT_HASH)
          {
            return TraversalType::PATH_TO_ROOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TraversalType>(hashCode);
          }

          return TraversalType::NOT_SET;
        }

        Aws::String GetNameForTraversalType(TraversalType enumValue)
        {
          switch(enumValue)
          {
          case TraversalType::NOT_SET:
            return {};
          case TraversalType::PATH_TO_ROOT:
            return "PATH_TO_ROOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraversalTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
