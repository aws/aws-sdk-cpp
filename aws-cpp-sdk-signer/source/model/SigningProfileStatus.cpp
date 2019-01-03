/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/signer/model/SigningProfileStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace SigningProfileStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");


        SigningProfileStatus GetSigningProfileStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SigningProfileStatus::Active;
          }
          else if (hashCode == Canceled_HASH)
          {
            return SigningProfileStatus::Canceled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningProfileStatus>(hashCode);
          }

          return SigningProfileStatus::NOT_SET;
        }

        Aws::String GetNameForSigningProfileStatus(SigningProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case SigningProfileStatus::Active:
            return "Active";
          case SigningProfileStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningProfileStatusMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
