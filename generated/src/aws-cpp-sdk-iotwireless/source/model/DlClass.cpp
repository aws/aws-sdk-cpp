/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DlClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace DlClassMapper
      {

        static const int ClassB_HASH = HashingUtils::HashString("ClassB");
        static const int ClassC_HASH = HashingUtils::HashString("ClassC");


        DlClass GetDlClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ClassB_HASH)
          {
            return DlClass::ClassB;
          }
          else if (hashCode == ClassC_HASH)
          {
            return DlClass::ClassC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DlClass>(hashCode);
          }

          return DlClass::NOT_SET;
        }

        Aws::String GetNameForDlClass(DlClass enumValue)
        {
          switch(enumValue)
          {
          case DlClass::NOT_SET:
            return {};
          case DlClass::ClassB:
            return "ClassB";
          case DlClass::ClassC:
            return "ClassC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DlClassMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
