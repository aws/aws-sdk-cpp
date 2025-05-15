/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConcurrencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace ConcurrencyTypeMapper
      {

        static const int Automatic_HASH = HashingUtils::HashString("Automatic");
        static const int Manual_HASH = HashingUtils::HashString("Manual");


        ConcurrencyType GetConcurrencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Automatic_HASH)
          {
            return ConcurrencyType::Automatic;
          }
          else if (hashCode == Manual_HASH)
          {
            return ConcurrencyType::Manual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConcurrencyType>(hashCode);
          }

          return ConcurrencyType::NOT_SET;
        }

        Aws::String GetNameForConcurrencyType(ConcurrencyType enumValue)
        {
          switch(enumValue)
          {
          case ConcurrencyType::NOT_SET:
            return {};
          case ConcurrencyType::Automatic:
            return "Automatic";
          case ConcurrencyType::Manual:
            return "Manual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConcurrencyTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
