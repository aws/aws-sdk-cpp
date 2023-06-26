/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PathPrefix.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace PathPrefixMapper
      {

        static const int EXECUTION_ID_HASH = HashingUtils::HashString("EXECUTION_ID");
        static const int SCHEMA_VERSION_HASH = HashingUtils::HashString("SCHEMA_VERSION");


        PathPrefix GetPathPrefixForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXECUTION_ID_HASH)
          {
            return PathPrefix::EXECUTION_ID;
          }
          else if (hashCode == SCHEMA_VERSION_HASH)
          {
            return PathPrefix::SCHEMA_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PathPrefix>(hashCode);
          }

          return PathPrefix::NOT_SET;
        }

        Aws::String GetNameForPathPrefix(PathPrefix enumValue)
        {
          switch(enumValue)
          {
          case PathPrefix::EXECUTION_ID:
            return "EXECUTION_ID";
          case PathPrefix::SCHEMA_VERSION:
            return "SCHEMA_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PathPrefixMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
