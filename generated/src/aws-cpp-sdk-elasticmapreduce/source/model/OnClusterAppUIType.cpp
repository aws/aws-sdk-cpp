/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnClusterAppUIType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace OnClusterAppUITypeMapper
      {

        static const int SparkHistoryServer_HASH = HashingUtils::HashString("SparkHistoryServer");
        static const int YarnTimelineService_HASH = HashingUtils::HashString("YarnTimelineService");
        static const int TezUI_HASH = HashingUtils::HashString("TezUI");
        static const int ApplicationMaster_HASH = HashingUtils::HashString("ApplicationMaster");
        static const int JobHistoryServer_HASH = HashingUtils::HashString("JobHistoryServer");
        static const int ResourceManager_HASH = HashingUtils::HashString("ResourceManager");


        OnClusterAppUIType GetOnClusterAppUITypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SparkHistoryServer_HASH)
          {
            return OnClusterAppUIType::SparkHistoryServer;
          }
          else if (hashCode == YarnTimelineService_HASH)
          {
            return OnClusterAppUIType::YarnTimelineService;
          }
          else if (hashCode == TezUI_HASH)
          {
            return OnClusterAppUIType::TezUI;
          }
          else if (hashCode == ApplicationMaster_HASH)
          {
            return OnClusterAppUIType::ApplicationMaster;
          }
          else if (hashCode == JobHistoryServer_HASH)
          {
            return OnClusterAppUIType::JobHistoryServer;
          }
          else if (hashCode == ResourceManager_HASH)
          {
            return OnClusterAppUIType::ResourceManager;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnClusterAppUIType>(hashCode);
          }

          return OnClusterAppUIType::NOT_SET;
        }

        Aws::String GetNameForOnClusterAppUIType(OnClusterAppUIType enumValue)
        {
          switch(enumValue)
          {
          case OnClusterAppUIType::NOT_SET:
            return {};
          case OnClusterAppUIType::SparkHistoryServer:
            return "SparkHistoryServer";
          case OnClusterAppUIType::YarnTimelineService:
            return "YarnTimelineService";
          case OnClusterAppUIType::TezUI:
            return "TezUI";
          case OnClusterAppUIType::ApplicationMaster:
            return "ApplicationMaster";
          case OnClusterAppUIType::JobHistoryServer:
            return "JobHistoryServer";
          case OnClusterAppUIType::ResourceManager:
            return "ResourceManager";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnClusterAppUITypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
