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
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>An application is any Amazon or third-party software that you can add to the
   * cluster. This structure contains a list of strings that indicates the software
   * to use with the cluster and accepts a user argument list. Amazon EMR accepts and
   * forwards the argument list to the corresponding installation script as bootstrap
   * action argument. For more information, see <a
   * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
   * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
   * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
   * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
   * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
   * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition,
   * respectively.</p> </li> </ul> <note> <p>In Amazon EMR releases 4.0 and greater,
   * the only accepted parameter is the application name. To pass arguments to
   * applications, you supply a configuration for each application.</p> </note>
   */
  class AWS_EMR_API Application
  {
  public:
    Application();
    Application(const Aws::Utils::Json::JsonValue& jsonValue);
    Application& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline Application& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline Application& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline Application& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline Application& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline Application& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(value); return *this;}

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline Application& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline Application& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>Arguments for Amazon EMR to pass to the application.</p>
     */
    inline Application& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& WithAdditionalInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(const Aws::String& key, const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(Aws::String&& key, const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(const Aws::String& key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(Aws::String&& key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(const char* key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(Aws::String&& key, const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

    /**
     * <p>This option is for advanced users only. This is meta information about
     * third-party applications that third-party vendors use for testing purposes.</p>
     */
    inline Application& AddAdditionalInfo(const char* key, const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo[key] = value; return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_additionalInfo;
    bool m_additionalInfoHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
