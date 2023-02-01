/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/EnablementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace EnablementTypeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        EnablementType GetEnablementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EnablementType::ENABLED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EnablementType::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnablementType>(hashCode);
          }

          return EnablementType::NOT_SET;
        }

        Aws::String GetNameForEnablementType(EnablementType enumValue)
        {
          switch(enumValue)
          {
          case EnablementType::ENABLED:
            return "ENABLED";
          case EnablementType::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnablementTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
