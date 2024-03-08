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
        static const int CONNECT_CAMPAIGNS_HASH = HashingUtils::HashString("CONNECT_CAMPAIGNS");


        UseCaseType GetUseCaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RULES_EVALUATION_HASH)
          {
            return UseCaseType::RULES_EVALUATION;
          }
          else if (hashCode == CONNECT_CAMPAIGNS_HASH)
          {
            return UseCaseType::CONNECT_CAMPAIGNS;
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
          case UseCaseType::NOT_SET:
            return {};
          case UseCaseType::RULES_EVALUATION:
            return "RULES_EVALUATION";
          case UseCaseType::CONNECT_CAMPAIGNS:
            return "CONNECT_CAMPAIGNS";
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
