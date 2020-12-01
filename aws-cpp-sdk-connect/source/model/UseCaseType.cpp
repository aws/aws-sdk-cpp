/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UseCaseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace UseCaseTypeMapper
      {

        static const int RULES_EVALUATION_HASH = HashingUtils::HashString("RULES_EVALUATION");


        UseCaseType GetUseCaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RULES_EVALUATION_HASH)
          {
            return UseCaseType::RULES_EVALUATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UseCaseType>(hashCode);
          }

          return UseCaseType::NOT_SET;
        }

        Aws::String GetNameForUseCaseType(UseCaseType enumValue)
        {
          switch(enumValue)
          {
          case UseCaseType::RULES_EVALUATION:
            return "RULES_EVALUATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UseCaseTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
