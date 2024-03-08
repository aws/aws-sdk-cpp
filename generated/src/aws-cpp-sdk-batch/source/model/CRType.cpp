/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CRType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace CRTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int SPOT_HASH = HashingUtils::HashString("SPOT");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");
        static const int FARGATE_SPOT_HASH = HashingUtils::HashString("FARGATE_SPOT");


        CRType GetCRTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return CRType::EC2;
          }
          else if (hashCode == SPOT_HASH)
          {
            return CRType::SPOT;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return CRType::FARGATE;
          }
          else if (hashCode == FARGATE_SPOT_HASH)
          {
            return CRType::FARGATE_SPOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CRType>(hashCode);
          }

          return CRType::NOT_SET;
        }

        Aws::String GetNameForCRType(CRType enumValue)
        {
          switch(enumValue)
          {
          case CRType::NOT_SET:
            return {};
          case CRType::EC2:
            return "EC2";
          case CRType::SPOT:
            return "SPOT";
          case CRType::FARGATE:
            return "FARGATE";
          case CRType::FARGATE_SPOT:
            return "FARGATE_SPOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CRTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
