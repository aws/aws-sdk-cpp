/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/Reason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace ReasonMapper
      {

        static const int AWS_THREAT_INTELLIGENCE_HASH = HashingUtils::HashString("AWS_THREAT_INTELLIGENCE");


        Reason GetReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_THREAT_INTELLIGENCE_HASH)
          {
            return Reason::AWS_THREAT_INTELLIGENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Reason>(hashCode);
          }

          return Reason::NOT_SET;
        }

        Aws::String GetNameForReason(Reason enumValue)
        {
          switch(enumValue)
          {
          case Reason::NOT_SET:
            return {};
          case Reason::AWS_THREAT_INTELLIGENCE:
            return "AWS_THREAT_INTELLIGENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReasonMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
