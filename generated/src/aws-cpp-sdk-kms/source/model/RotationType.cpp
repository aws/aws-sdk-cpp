/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/RotationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace RotationTypeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        RotationType GetRotationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return RotationType::AUTOMATIC;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return RotationType::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RotationType>(hashCode);
          }

          return RotationType::NOT_SET;
        }

        Aws::String GetNameForRotationType(RotationType enumValue)
        {
          switch(enumValue)
          {
          case RotationType::NOT_SET:
            return {};
          case RotationType::AUTOMATIC:
            return "AUTOMATIC";
          case RotationType::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RotationTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
