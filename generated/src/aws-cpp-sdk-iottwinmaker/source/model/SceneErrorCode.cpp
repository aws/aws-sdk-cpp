/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SceneErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace SceneErrorCodeMapper
      {

        static const int MATTERPORT_ERROR_HASH = HashingUtils::HashString("MATTERPORT_ERROR");


        SceneErrorCode GetSceneErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MATTERPORT_ERROR_HASH)
          {
            return SceneErrorCode::MATTERPORT_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SceneErrorCode>(hashCode);
          }

          return SceneErrorCode::NOT_SET;
        }

        Aws::String GetNameForSceneErrorCode(SceneErrorCode enumValue)
        {
          switch(enumValue)
          {
          case SceneErrorCode::NOT_SET:
            return {};
          case SceneErrorCode::MATTERPORT_ERROR:
            return "MATTERPORT_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SceneErrorCodeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
