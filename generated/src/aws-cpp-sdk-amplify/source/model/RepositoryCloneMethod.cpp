/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/RepositoryCloneMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace RepositoryCloneMethodMapper
      {

        static const int SSH_HASH = HashingUtils::HashString("SSH");
        static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");
        static const int SIGV4_HASH = HashingUtils::HashString("SIGV4");


        RepositoryCloneMethod GetRepositoryCloneMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSH_HASH)
          {
            return RepositoryCloneMethod::SSH;
          }
          else if (hashCode == TOKEN_HASH)
          {
            return RepositoryCloneMethod::TOKEN;
          }
          else if (hashCode == SIGV4_HASH)
          {
            return RepositoryCloneMethod::SIGV4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryCloneMethod>(hashCode);
          }

          return RepositoryCloneMethod::NOT_SET;
        }

        Aws::String GetNameForRepositoryCloneMethod(RepositoryCloneMethod enumValue)
        {
          switch(enumValue)
          {
          case RepositoryCloneMethod::NOT_SET:
            return {};
          case RepositoryCloneMethod::SSH:
            return "SSH";
          case RepositoryCloneMethod::TOKEN:
            return "TOKEN";
          case RepositoryCloneMethod::SIGV4:
            return "SIGV4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryCloneMethodMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
