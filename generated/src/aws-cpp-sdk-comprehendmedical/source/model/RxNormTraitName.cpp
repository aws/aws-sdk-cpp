/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RxNormTraitName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace RxNormTraitNameMapper
      {

        static const int NEGATION_HASH = HashingUtils::HashString("NEGATION");
        static const int PAST_HISTORY_HASH = HashingUtils::HashString("PAST_HISTORY");


        RxNormTraitName GetRxNormTraitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEGATION_HASH)
          {
            return RxNormTraitName::NEGATION;
          }
          else if (hashCode == PAST_HISTORY_HASH)
          {
            return RxNormTraitName::PAST_HISTORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RxNormTraitName>(hashCode);
          }

          return RxNormTraitName::NOT_SET;
        }

        Aws::String GetNameForRxNormTraitName(RxNormTraitName enumValue)
        {
          switch(enumValue)
          {
          case RxNormTraitName::NOT_SET:
            return {};
          case RxNormTraitName::NEGATION:
            return "NEGATION";
          case RxNormTraitName::PAST_HISTORY:
            return "PAST_HISTORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RxNormTraitNameMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
