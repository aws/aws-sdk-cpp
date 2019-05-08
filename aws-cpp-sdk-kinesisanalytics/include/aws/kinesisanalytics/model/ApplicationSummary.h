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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/ApplicationStatus.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
   * Analytics API, which only supports SQL applications. Version 2 of the API
   * supports SQL and Java applications. For more information about version 2, see <a
   * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
   * API V2 Documentation</a>.</p> </note> <p>Provides application summary
   * information, including the application Amazon Resource Name (ARN), name, and
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API ApplicationSummary
  {
  public:
    ApplicationSummary();
    ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>ARN of the application.</p>
     */
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }

    /**
     * <p>ARN of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARNHasBeenSet = true; m_applicationARN = value; }

    /**
     * <p>ARN of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::move(value); }

    /**
     * <p>ARN of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARNHasBeenSet = true; m_applicationARN.assign(value); }

    /**
     * <p>ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>Status of the application.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }

    /**
     * <p>Status of the application.</p>
     */
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }

    /**
     * <p>Status of the application.</p>
     */
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }

    /**
     * <p>Status of the application.</p>
     */
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }

    /**
     * <p>Status of the application.</p>
     */
    inline ApplicationSummary& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}

    /**
     * <p>Status of the application.</p>
     */
    inline ApplicationSummary& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
