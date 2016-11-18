/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/email/model/TlsPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace TlsPolicyMapper
      {

        static const int Require_HASH = HashingUtils::HashString("Require");
        static const int Optional_HASH = HashingUtils::HashString("Optional");


        TlsPolicy GetTlsPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Require_HASH)
          {
            return TlsPolicy::Require;
          }
          else if (hashCode == Optional_HASH)
          {
            return TlsPolicy::Optional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TlsPolicy>(hashCode);
          }

          return TlsPolicy::NOT_SET;
        }

        Aws::String GetNameForTlsPolicy(TlsPolicy enumValue)
        {
          switch(enumValue)
          {
          case TlsPolicy::Require:
            return "Require";
          case TlsPolicy::Optional:
            return "Optional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TlsPolicyMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
