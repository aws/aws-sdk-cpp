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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class ArtifactType
  {
    NOT_SET,
    UNKNOWN,
    SCREENSHOT,
    DEVICE_LOG,
    MESSAGE_LOG,
    VIDEO_LOG,
    RESULT_LOG,
    SERVICE_LOG,
    WEBKIT_LOG,
    INSTRUMENTATION_OUTPUT,
    EXERCISER_MONKEY_OUTPUT,
    CALABASH_JSON_OUTPUT,
    CALABASH_PRETTY_OUTPUT,
    CALABASH_STANDARD_OUTPUT,
    CALABASH_JAVA_XML_OUTPUT,
    AUTOMATION_OUTPUT,
    APPIUM_SERVER_OUTPUT,
    APPIUM_JAVA_OUTPUT,
    APPIUM_JAVA_XML_OUTPUT,
    APPIUM_PYTHON_OUTPUT,
    APPIUM_PYTHON_XML_OUTPUT,
    EXPLORER_EVENT_LOG,
    EXPLORER_SUMMARY_LOG,
    APPLICATION_CRASH_REPORT,
    XCTEST_LOG,
    VIDEO,
    CUSTOMER_ARTIFACT,
    CUSTOMER_ARTIFACT_LOG,
    TESTSPEC_OUTPUT
  };

namespace ArtifactTypeMapper
{
AWS_DEVICEFARM_API ArtifactType GetArtifactTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForArtifactType(ArtifactType value);
} // namespace ArtifactTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
