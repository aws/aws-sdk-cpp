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

#include <aws/medialive/model/HlsWebdavHttpTransferMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsWebdavHttpTransferModeMapper
      {

        static const int CHUNKED_HASH = HashingUtils::HashString("CHUNKED");
        static const int NON_CHUNKED_HASH = HashingUtils::HashString("NON_CHUNKED");


        HlsWebdavHttpTransferMode GetHlsWebdavHttpTransferModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHUNKED_HASH)
          {
            return HlsWebdavHttpTransferMode::CHUNKED;
          }
          else if (hashCode == NON_CHUNKED_HASH)
          {
            return HlsWebdavHttpTransferMode::NON_CHUNKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsWebdavHttpTransferMode>(hashCode);
          }

          return HlsWebdavHttpTransferMode::NOT_SET;
        }

        Aws::String GetNameForHlsWebdavHttpTransferMode(HlsWebdavHttpTransferMode enumValue)
        {
          switch(enumValue)
          {
          case HlsWebdavHttpTransferMode::CHUNKED:
            return "CHUNKED";
          case HlsWebdavHttpTransferMode::NON_CHUNKED:
            return "NON_CHUNKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsWebdavHttpTransferModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
