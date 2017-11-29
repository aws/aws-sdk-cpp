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

#include <aws/kinesisvideo/model/APIName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace APINameMapper
      {

        static const int PUT_MEDIA_HASH = HashingUtils::HashString("PUT_MEDIA");
        static const int GET_MEDIA_HASH = HashingUtils::HashString("GET_MEDIA");
        static const int LIST_FRAGMENTS_HASH = HashingUtils::HashString("LIST_FRAGMENTS");
        static const int GET_MEDIA_FOR_FRAGMENT_LIST_HASH = HashingUtils::HashString("GET_MEDIA_FOR_FRAGMENT_LIST");


        APIName GetAPINameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUT_MEDIA_HASH)
          {
            return APIName::PUT_MEDIA;
          }
          else if (hashCode == GET_MEDIA_HASH)
          {
            return APIName::GET_MEDIA;
          }
          else if (hashCode == LIST_FRAGMENTS_HASH)
          {
            return APIName::LIST_FRAGMENTS;
          }
          else if (hashCode == GET_MEDIA_FOR_FRAGMENT_LIST_HASH)
          {
            return APIName::GET_MEDIA_FOR_FRAGMENT_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<APIName>(hashCode);
          }

          return APIName::NOT_SET;
        }

        Aws::String GetNameForAPIName(APIName enumValue)
        {
          switch(enumValue)
          {
          case APIName::PUT_MEDIA:
            return "PUT_MEDIA";
          case APIName::GET_MEDIA:
            return "GET_MEDIA";
          case APIName::LIST_FRAGMENTS:
            return "LIST_FRAGMENTS";
          case APIName::GET_MEDIA_FOR_FRAGMENT_LIST:
            return "GET_MEDIA_FOR_FRAGMENT_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace APINameMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
