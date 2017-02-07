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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about build logs in Amazon CloudWatch Logs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/LogsLocation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API LogsLocation
  {
  public:
    LogsLocation();
    LogsLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    LogsLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline LogsLocation& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline LogsLocation& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs group for the build logs.</p>
     */
    inline LogsLocation& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline LogsLocation& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline LogsLocation& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs stream for the build logs.</p>
     */
    inline LogsLocation& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline const Aws::String& GetDeepLink() const{ return m_deepLink; }

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline void SetDeepLink(const Aws::String& value) { m_deepLinkHasBeenSet = true; m_deepLink = value; }

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline void SetDeepLink(Aws::String&& value) { m_deepLinkHasBeenSet = true; m_deepLink = value; }

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline void SetDeepLink(const char* value) { m_deepLinkHasBeenSet = true; m_deepLink.assign(value); }

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline LogsLocation& WithDeepLink(const Aws::String& value) { SetDeepLink(value); return *this;}

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline LogsLocation& WithDeepLink(Aws::String&& value) { SetDeepLink(value); return *this;}

    /**
     * <p>The URL to an individual build log in Amazon CloudWatch Logs.</p>
     */
    inline LogsLocation& WithDeepLink(const char* value) { SetDeepLink(value); return *this;}

  private:
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    Aws::String m_deepLink;
    bool m_deepLinkHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
