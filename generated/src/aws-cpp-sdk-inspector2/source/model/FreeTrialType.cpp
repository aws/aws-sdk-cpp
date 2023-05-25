/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FreeTrialType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FreeTrialTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int ECR_HASH = HashingUtils::HashString("ECR");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        FreeTrialType GetFreeTrialTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return FreeTrialType::EC2;
          }
          else if (hashCode == ECR_HASH)
          {
            return FreeTrialType::ECR;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return FreeTrialType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FreeTrialType>(hashCode);
          }

          return FreeTrialType::NOT_SET;
        }

        Aws::String GetNameForFreeTrialType(FreeTrialType enumValue)
        {
          switch(enumValue)
          {
          case FreeTrialType::EC2:
            return "EC2";
          case FreeTrialType::ECR:
            return "ECR";
          case FreeTrialType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FreeTrialTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
