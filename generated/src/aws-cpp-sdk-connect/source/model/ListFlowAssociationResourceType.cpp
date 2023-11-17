/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListFlowAssociationResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ListFlowAssociationResourceTypeMapper
      {

        static const int VOICE_PHONE_NUMBER_HASH = HashingUtils::HashString("VOICE_PHONE_NUMBER");


        ListFlowAssociationResourceType GetListFlowAssociationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOICE_PHONE_NUMBER_HASH)
          {
            return ListFlowAssociationResourceType::VOICE_PHONE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListFlowAssociationResourceType>(hashCode);
          }

          return ListFlowAssociationResourceType::NOT_SET;
        }

        Aws::String GetNameForListFlowAssociationResourceType(ListFlowAssociationResourceType enumValue)
        {
          switch(enumValue)
          {
          case ListFlowAssociationResourceType::NOT_SET:
            return {};
          case ListFlowAssociationResourceType::VOICE_PHONE_NUMBER:
            return "VOICE_PHONE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListFlowAssociationResourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
