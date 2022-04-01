/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ConfluenceVersionMapper
      {

        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");
        static const int SERVER_HASH = HashingUtils::HashString("SERVER");


        ConfluenceVersion GetConfluenceVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUD_HASH)
          {
            return ConfluenceVersion::CLOUD;
          }
          else if (hashCode == SERVER_HASH)
          {
            return ConfluenceVersion::SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceVersion>(hashCode);
          }

          return ConfluenceVersion::NOT_SET;
        }

        Aws::String GetNameForConfluenceVersion(ConfluenceVersion enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceVersion::CLOUD:
            return "CLOUD";
          case ConfluenceVersion::SERVER:
            return "SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfluenceVersionMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
