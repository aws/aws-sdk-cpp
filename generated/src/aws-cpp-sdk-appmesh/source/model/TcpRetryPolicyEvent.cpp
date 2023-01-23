/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/TcpRetryPolicyEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace TcpRetryPolicyEventMapper
      {

        static const int connection_error_HASH = HashingUtils::HashString("connection-error");


        TcpRetryPolicyEvent GetTcpRetryPolicyEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == connection_error_HASH)
          {
            return TcpRetryPolicyEvent::connection_error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TcpRetryPolicyEvent>(hashCode);
          }

          return TcpRetryPolicyEvent::NOT_SET;
        }

        Aws::String GetNameForTcpRetryPolicyEvent(TcpRetryPolicyEvent enumValue)
        {
          switch(enumValue)
          {
          case TcpRetryPolicyEvent::connection_error:
            return "connection-error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TcpRetryPolicyEventMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
