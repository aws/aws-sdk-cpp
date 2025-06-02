/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProcessingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace ProcessingTypeMapper
      {

        static const int CONSISTENT_HASH = HashingUtils::HashString("CONSISTENT");
        static const int EVENTUAL_HASH = HashingUtils::HashString("EVENTUAL");
        static const int EVENTUAL_NO_LOOKUP_HASH = HashingUtils::HashString("EVENTUAL_NO_LOOKUP");


        ProcessingType GetProcessingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONSISTENT_HASH)
          {
            return ProcessingType::CONSISTENT;
          }
          else if (hashCode == EVENTUAL_HASH)
          {
            return ProcessingType::EVENTUAL;
          }
          else if (hashCode == EVENTUAL_NO_LOOKUP_HASH)
          {
            return ProcessingType::EVENTUAL_NO_LOOKUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingType>(hashCode);
          }

          return ProcessingType::NOT_SET;
        }

        Aws::String GetNameForProcessingType(ProcessingType enumValue)
        {
          switch(enumValue)
          {
          case ProcessingType::NOT_SET:
            return {};
          case ProcessingType::CONSISTENT:
            return "CONSISTENT";
          case ProcessingType::EVENTUAL:
            return "EVENTUAL";
          case ProcessingType::EVENTUAL_NO_LOOKUP:
            return "EVENTUAL_NO_LOOKUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
