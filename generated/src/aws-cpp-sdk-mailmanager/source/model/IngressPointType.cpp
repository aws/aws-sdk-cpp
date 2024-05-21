/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace IngressPointTypeMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int AUTH_HASH = HashingUtils::HashString("AUTH");


        IngressPointType GetIngressPointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return IngressPointType::OPEN;
          }
          else if (hashCode == AUTH_HASH)
          {
            return IngressPointType::AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressPointType>(hashCode);
          }

          return IngressPointType::NOT_SET;
        }

        Aws::String GetNameForIngressPointType(IngressPointType enumValue)
        {
          switch(enumValue)
          {
          case IngressPointType::NOT_SET:
            return {};
          case IngressPointType::OPEN:
            return "OPEN";
          case IngressPointType::AUTH:
            return "AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressPointTypeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
