/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/AssociationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace AssociationTypeMapper
      {

        static const int RESERVATION_TIME_WINDOW_ARN_HASH = HashingUtils::HashString("RESERVATION_TIME_WINDOW_ARN");


        AssociationType GetAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESERVATION_TIME_WINDOW_ARN_HASH)
          {
            return AssociationType::RESERVATION_TIME_WINDOW_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationType>(hashCode);
          }

          return AssociationType::NOT_SET;
        }

        Aws::String GetNameForAssociationType(AssociationType enumValue)
        {
          switch(enumValue)
          {
          case AssociationType::NOT_SET:
            return {};
          case AssociationType::RESERVATION_TIME_WINDOW_ARN:
            return "RESERVATION_TIME_WINDOW_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationTypeMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
