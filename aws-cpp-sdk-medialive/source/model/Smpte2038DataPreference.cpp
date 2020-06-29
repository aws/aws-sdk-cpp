/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Smpte2038DataPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Smpte2038DataPreferenceMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int PREFER_HASH = HashingUtils::HashString("PREFER");


        Smpte2038DataPreference GetSmpte2038DataPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return Smpte2038DataPreference::IGNORE;
          }
          else if (hashCode == PREFER_HASH)
          {
            return Smpte2038DataPreference::PREFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Smpte2038DataPreference>(hashCode);
          }

          return Smpte2038DataPreference::NOT_SET;
        }

        Aws::String GetNameForSmpte2038DataPreference(Smpte2038DataPreference enumValue)
        {
          switch(enumValue)
          {
          case Smpte2038DataPreference::IGNORE:
            return "IGNORE";
          case Smpte2038DataPreference::PREFER:
            return "PREFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Smpte2038DataPreferenceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
