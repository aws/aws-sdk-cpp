/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/AcceptanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Artifact
  {
    namespace Model
    {
      namespace AcceptanceTypeMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int EXPLICIT_HASH = HashingUtils::HashString("EXPLICIT");


        AcceptanceType GetAcceptanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return AcceptanceType::PASSTHROUGH;
          }
          else if (hashCode == EXPLICIT_HASH)
          {
            return AcceptanceType::EXPLICIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptanceType>(hashCode);
          }

          return AcceptanceType::NOT_SET;
        }

        Aws::String GetNameForAcceptanceType(AcceptanceType enumValue)
        {
          switch(enumValue)
          {
          case AcceptanceType::NOT_SET:
            return {};
          case AcceptanceType::PASSTHROUGH:
            return "PASSTHROUGH";
          case AcceptanceType::EXPLICIT:
            return "EXPLICIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptanceTypeMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws
