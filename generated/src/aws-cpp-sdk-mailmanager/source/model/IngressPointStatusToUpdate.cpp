/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointStatusToUpdate.h>
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
      namespace IngressPointStatusToUpdateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        IngressPointStatusToUpdate GetIngressPointStatusToUpdateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return IngressPointStatusToUpdate::ACTIVE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return IngressPointStatusToUpdate::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressPointStatusToUpdate>(hashCode);
          }

          return IngressPointStatusToUpdate::NOT_SET;
        }

        Aws::String GetNameForIngressPointStatusToUpdate(IngressPointStatusToUpdate enumValue)
        {
          switch(enumValue)
          {
          case IngressPointStatusToUpdate::NOT_SET:
            return {};
          case IngressPointStatusToUpdate::ACTIVE:
            return "ACTIVE";
          case IngressPointStatusToUpdate::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressPointStatusToUpdateMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
