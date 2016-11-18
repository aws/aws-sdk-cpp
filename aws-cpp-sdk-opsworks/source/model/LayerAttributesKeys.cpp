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
#include <aws/opsworks/model/LayerAttributesKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace LayerAttributesKeysMapper
      {

        static const int EcsClusterArn_HASH = HashingUtils::HashString("EcsClusterArn");
        static const int EnableHaproxyStats_HASH = HashingUtils::HashString("EnableHaproxyStats");
        static const int HaproxyStatsUrl_HASH = HashingUtils::HashString("HaproxyStatsUrl");
        static const int HaproxyStatsUser_HASH = HashingUtils::HashString("HaproxyStatsUser");
        static const int HaproxyStatsPassword_HASH = HashingUtils::HashString("HaproxyStatsPassword");
        static const int HaproxyHealthCheckUrl_HASH = HashingUtils::HashString("HaproxyHealthCheckUrl");
        static const int HaproxyHealthCheckMethod_HASH = HashingUtils::HashString("HaproxyHealthCheckMethod");
        static const int MysqlRootPassword_HASH = HashingUtils::HashString("MysqlRootPassword");
        static const int MysqlRootPasswordUbiquitous_HASH = HashingUtils::HashString("MysqlRootPasswordUbiquitous");
        static const int GangliaUrl_HASH = HashingUtils::HashString("GangliaUrl");
        static const int GangliaUser_HASH = HashingUtils::HashString("GangliaUser");
        static const int GangliaPassword_HASH = HashingUtils::HashString("GangliaPassword");
        static const int MemcachedMemory_HASH = HashingUtils::HashString("MemcachedMemory");
        static const int NodejsVersion_HASH = HashingUtils::HashString("NodejsVersion");
        static const int RubyVersion_HASH = HashingUtils::HashString("RubyVersion");
        static const int RubygemsVersion_HASH = HashingUtils::HashString("RubygemsVersion");
        static const int ManageBundler_HASH = HashingUtils::HashString("ManageBundler");
        static const int BundlerVersion_HASH = HashingUtils::HashString("BundlerVersion");
        static const int RailsStack_HASH = HashingUtils::HashString("RailsStack");
        static const int PassengerVersion_HASH = HashingUtils::HashString("PassengerVersion");
        static const int Jvm_HASH = HashingUtils::HashString("Jvm");
        static const int JvmVersion_HASH = HashingUtils::HashString("JvmVersion");
        static const int JvmOptions_HASH = HashingUtils::HashString("JvmOptions");
        static const int JavaAppServer_HASH = HashingUtils::HashString("JavaAppServer");
        static const int JavaAppServerVersion_HASH = HashingUtils::HashString("JavaAppServerVersion");


        LayerAttributesKeys GetLayerAttributesKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EcsClusterArn_HASH)
          {
            return LayerAttributesKeys::EcsClusterArn;
          }
          else if (hashCode == EnableHaproxyStats_HASH)
          {
            return LayerAttributesKeys::EnableHaproxyStats;
          }
          else if (hashCode == HaproxyStatsUrl_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsUrl;
          }
          else if (hashCode == HaproxyStatsUser_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsUser;
          }
          else if (hashCode == HaproxyStatsPassword_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsPassword;
          }
          else if (hashCode == HaproxyHealthCheckUrl_HASH)
          {
            return LayerAttributesKeys::HaproxyHealthCheckUrl;
          }
          else if (hashCode == HaproxyHealthCheckMethod_HASH)
          {
            return LayerAttributesKeys::HaproxyHealthCheckMethod;
          }
          else if (hashCode == MysqlRootPassword_HASH)
          {
            return LayerAttributesKeys::MysqlRootPassword;
          }
          else if (hashCode == MysqlRootPasswordUbiquitous_HASH)
          {
            return LayerAttributesKeys::MysqlRootPasswordUbiquitous;
          }
          else if (hashCode == GangliaUrl_HASH)
          {
            return LayerAttributesKeys::GangliaUrl;
          }
          else if (hashCode == GangliaUser_HASH)
          {
            return LayerAttributesKeys::GangliaUser;
          }
          else if (hashCode == GangliaPassword_HASH)
          {
            return LayerAttributesKeys::GangliaPassword;
          }
          else if (hashCode == MemcachedMemory_HASH)
          {
            return LayerAttributesKeys::MemcachedMemory;
          }
          else if (hashCode == NodejsVersion_HASH)
          {
            return LayerAttributesKeys::NodejsVersion;
          }
          else if (hashCode == RubyVersion_HASH)
          {
            return LayerAttributesKeys::RubyVersion;
          }
          else if (hashCode == RubygemsVersion_HASH)
          {
            return LayerAttributesKeys::RubygemsVersion;
          }
          else if (hashCode == ManageBundler_HASH)
          {
            return LayerAttributesKeys::ManageBundler;
          }
          else if (hashCode == BundlerVersion_HASH)
          {
            return LayerAttributesKeys::BundlerVersion;
          }
          else if (hashCode == RailsStack_HASH)
          {
            return LayerAttributesKeys::RailsStack;
          }
          else if (hashCode == PassengerVersion_HASH)
          {
            return LayerAttributesKeys::PassengerVersion;
          }
          else if (hashCode == Jvm_HASH)
          {
            return LayerAttributesKeys::Jvm;
          }
          else if (hashCode == JvmVersion_HASH)
          {
            return LayerAttributesKeys::JvmVersion;
          }
          else if (hashCode == JvmOptions_HASH)
          {
            return LayerAttributesKeys::JvmOptions;
          }
          else if (hashCode == JavaAppServer_HASH)
          {
            return LayerAttributesKeys::JavaAppServer;
          }
          else if (hashCode == JavaAppServerVersion_HASH)
          {
            return LayerAttributesKeys::JavaAppServerVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerAttributesKeys>(hashCode);
          }

          return LayerAttributesKeys::NOT_SET;
        }

        Aws::String GetNameForLayerAttributesKeys(LayerAttributesKeys enumValue)
        {
          switch(enumValue)
          {
          case LayerAttributesKeys::EcsClusterArn:
            return "EcsClusterArn";
          case LayerAttributesKeys::EnableHaproxyStats:
            return "EnableHaproxyStats";
          case LayerAttributesKeys::HaproxyStatsUrl:
            return "HaproxyStatsUrl";
          case LayerAttributesKeys::HaproxyStatsUser:
            return "HaproxyStatsUser";
          case LayerAttributesKeys::HaproxyStatsPassword:
            return "HaproxyStatsPassword";
          case LayerAttributesKeys::HaproxyHealthCheckUrl:
            return "HaproxyHealthCheckUrl";
          case LayerAttributesKeys::HaproxyHealthCheckMethod:
            return "HaproxyHealthCheckMethod";
          case LayerAttributesKeys::MysqlRootPassword:
            return "MysqlRootPassword";
          case LayerAttributesKeys::MysqlRootPasswordUbiquitous:
            return "MysqlRootPasswordUbiquitous";
          case LayerAttributesKeys::GangliaUrl:
            return "GangliaUrl";
          case LayerAttributesKeys::GangliaUser:
            return "GangliaUser";
          case LayerAttributesKeys::GangliaPassword:
            return "GangliaPassword";
          case LayerAttributesKeys::MemcachedMemory:
            return "MemcachedMemory";
          case LayerAttributesKeys::NodejsVersion:
            return "NodejsVersion";
          case LayerAttributesKeys::RubyVersion:
            return "RubyVersion";
          case LayerAttributesKeys::RubygemsVersion:
            return "RubygemsVersion";
          case LayerAttributesKeys::ManageBundler:
            return "ManageBundler";
          case LayerAttributesKeys::BundlerVersion:
            return "BundlerVersion";
          case LayerAttributesKeys::RailsStack:
            return "RailsStack";
          case LayerAttributesKeys::PassengerVersion:
            return "PassengerVersion";
          case LayerAttributesKeys::Jvm:
            return "Jvm";
          case LayerAttributesKeys::JvmVersion:
            return "JvmVersion";
          case LayerAttributesKeys::JvmOptions:
            return "JvmOptions";
          case LayerAttributesKeys::JavaAppServer:
            return "JavaAppServer";
          case LayerAttributesKeys::JavaAppServerVersion:
            return "JavaAppServerVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LayerAttributesKeysMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
