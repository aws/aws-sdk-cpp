/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/SampleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace SampleTypeMapper
      {

        static const int FIRST_N_HASH = HashingUtils::HashString("FIRST_N");
        static const int LAST_N_HASH = HashingUtils::HashString("LAST_N");
        static const int RANDOM_HASH = HashingUtils::HashString("RANDOM");


        SampleType GetSampleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIRST_N_HASH)
          {
            return SampleType::FIRST_N;
          }
          else if (hashCode == LAST_N_HASH)
          {
            return SampleType::LAST_N;
          }
          else if (hashCode == RANDOM_HASH)
          {
            return SampleType::RANDOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SampleType>(hashCode);
          }

          return SampleType::NOT_SET;
        }

        Aws::String GetNameForSampleType(SampleType enumValue)
        {
          switch(enumValue)
          {
          case SampleType::FIRST_N:
            return "FIRST_N";
          case SampleType::LAST_N:
            return "LAST_N";
          case SampleType::RANDOM:
            return "RANDOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SampleTypeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
