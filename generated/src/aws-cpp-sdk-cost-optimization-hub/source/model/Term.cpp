/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Term.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace TermMapper
      {

        static const int OneYear_HASH = HashingUtils::HashString("OneYear");
        static const int ThreeYears_HASH = HashingUtils::HashString("ThreeYears");


        Term GetTermForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneYear_HASH)
          {
            return Term::OneYear;
          }
          else if (hashCode == ThreeYears_HASH)
          {
            return Term::ThreeYears;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Term>(hashCode);
          }

          return Term::NOT_SET;
        }

        Aws::String GetNameForTerm(Term enumValue)
        {
          switch(enumValue)
          {
          case Term::NOT_SET:
            return {};
          case Term::OneYear:
            return "OneYear";
          case Term::ThreeYears:
            return "ThreeYears";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TermMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
