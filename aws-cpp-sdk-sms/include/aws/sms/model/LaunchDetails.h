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

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * <p>Details about the latest launch of an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API LaunchDetails
  {
  public:
    LaunchDetails();
    LaunchDetails(Aws::Utils::Json::JsonView jsonValue);
    LaunchDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestLaunchTime() const{ return m_latestLaunchTime; }

    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline bool LatestLaunchTimeHasBeenSet() const { return m_latestLaunchTimeHasBeenSet; }

    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline void SetLatestLaunchTime(const Aws::Utils::DateTime& value) { m_latestLaunchTimeHasBeenSet = true; m_latestLaunchTime = value; }

    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline void SetLatestLaunchTime(Aws::Utils::DateTime&& value) { m_latestLaunchTimeHasBeenSet = true; m_latestLaunchTime = std::move(value); }

    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline LaunchDetails& WithLatestLaunchTime(const Aws::Utils::DateTime& value) { SetLatestLaunchTime(value); return *this;}

    /**
     * <p>Latest time this application was launched successfully.</p>
     */
    inline LaunchDetails& WithLatestLaunchTime(Aws::Utils::DateTime&& value) { SetLatestLaunchTime(std::move(value)); return *this;}


    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>Name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::Utils::DateTime m_latestLaunchTime;
    bool m_latestLaunchTimeHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
