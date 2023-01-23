/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrefixType.h>
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
      namespace PrefixTypeMapper
      {

        static const int FILENAME_HASH = HashingUtils::HashString("FILENAME");
        static const int PATH_HASH = HashingUtils::HashString("PATH");
        static const int PATH_AND_FILENAME_HASH = HashingUtils::HashString("PATH_AND_FILENAME");


        PrefixType GetPrefixTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILENAME_HASH)
          {
            return PrefixType::FILENAME;
          }
          else if (hashCode == PATH_HASH)
          {
            return PrefixType::PATH;
          }
          else if (hashCode == PATH_AND_FILENAME_HASH)
          {
            return PrefixType::PATH_AND_FILENAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrefixType>(hashCode);
          }

          return PrefixType::NOT_SET;
        }

        Aws::String GetNameForPrefixType(PrefixType enumValue)
        {
          switch(enumValue)
          {
          case PrefixType::FILENAME:
            return "FILENAME";
          case PrefixType::PATH:
            return "PATH";
          case PrefixType::PATH_AND_FILENAME:
            return "PATH_AND_FILENAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrefixTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
