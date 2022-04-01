/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/NamespaceDeletionStatusErrorCodes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace NamespaceDeletionStatusErrorCodesMapper
      {

        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");


        NamespaceDeletionStatusErrorCodes GetNamespaceDeletionStatusErrorCodesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_FAILED_HASH)
          {
            return NamespaceDeletionStatusErrorCodes::VALIDATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceDeletionStatusErrorCodes>(hashCode);
          }

          return NamespaceDeletionStatusErrorCodes::NOT_SET;
        }

        Aws::String GetNameForNamespaceDeletionStatusErrorCodes(NamespaceDeletionStatusErrorCodes enumValue)
        {
          switch(enumValue)
          {
          case NamespaceDeletionStatusErrorCodes::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceDeletionStatusErrorCodesMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
