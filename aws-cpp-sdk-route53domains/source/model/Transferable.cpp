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

#include <aws/route53domains/model/Transferable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace TransferableMapper
      {

        static const int TRANSFERABLE_HASH = HashingUtils::HashString("TRANSFERABLE");
        static const int UNTRANSFERABLE_HASH = HashingUtils::HashString("UNTRANSFERABLE");
        static const int DONT_KNOW_HASH = HashingUtils::HashString("DONT_KNOW");


        Transferable GetTransferableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSFERABLE_HASH)
          {
            return Transferable::TRANSFERABLE;
          }
          else if (hashCode == UNTRANSFERABLE_HASH)
          {
            return Transferable::UNTRANSFERABLE;
          }
          else if (hashCode == DONT_KNOW_HASH)
          {
            return Transferable::DONT_KNOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Transferable>(hashCode);
          }

          return Transferable::NOT_SET;
        }

        Aws::String GetNameForTransferable(Transferable enumValue)
        {
          switch(enumValue)
          {
          case Transferable::TRANSFERABLE:
            return "TRANSFERABLE";
          case Transferable::UNTRANSFERABLE:
            return "UNTRANSFERABLE";
          case Transferable::DONT_KNOW:
            return "DONT_KNOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransferableMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
