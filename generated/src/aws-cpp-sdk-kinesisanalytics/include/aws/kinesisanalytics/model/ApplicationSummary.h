/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   *  <p>This documentation is for version 1 of the Amazon Kinesis Data
   * Analytics API, which only supports SQL applications. Version 2 of the API
   * supports SQL and Java applications. For more information about version 2, see <a
   * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
   * API V2 Documentation</a>.</p>  <p>Provides application summary
   * information, including the application Amazon Resource Name (ARN), name, and
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_KINESISANALYTICS_API ApplicationSummary();
    AWS_KINESISANALYTICS_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ApplicationSummary& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ApplicationSummary& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARNHasBeenSet = true; m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARNHasBeenSet = true; m_applicationARN.assign(value); }
    inline ApplicationSummary& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline ApplicationSummary& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }
    inline ApplicationSummary& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}
    inline ApplicationSummary& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
