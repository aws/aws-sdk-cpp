/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace InsightTypeMapper
      {

        static const int REACTIVE_HASH = HashingUtils::HashString("REACTIVE");
        static const int PROACTIVE_HASH = HashingUtils::HashString("PROACTIVE");


        InsightType GetInsightTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REACTIVE_HASH)
          {
            return InsightType::REACTIVE;
          }
          else if (hashCode == PROACTIVE_HASH)
          {
            return InsightType::PROACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightType>(hashCode);
          }

          return InsightType::NOT_SET;
        }

        Aws::String GetNameForInsightType(InsightType enumValue)
        {
          switch(enumValue)
          {
          case InsightType::NOT_SET:
            return {};
          case InsightType::REACTIVE:
            return "REACTIVE";
          case InsightType::PROACTIVE:
            return "PROACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
