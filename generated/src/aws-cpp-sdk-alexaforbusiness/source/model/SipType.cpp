/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SipType.h>
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
      namespace SipTypeMapper
      {

        static const int WORK_HASH = HashingUtils::HashString("WORK");


        SipType GetSipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORK_HASH)
          {
            return SipType::WORK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SipType>(hashCode);
          }

          return SipType::NOT_SET;
        }

        Aws::String GetNameForSipType(SipType enumValue)
        {
          switch(enumValue)
          {
          case SipType::WORK:
            return "WORK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SipTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
