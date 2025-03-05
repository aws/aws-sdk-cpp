/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
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
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Describes an application resource that represents a collection of content for
   * streaming with Amazon GameLift Streams. To retrieve additional application
   * details, call <a>GetApplication</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_GAMELIFTSTREAMS_API ApplicationSummary();
    AWS_GAMELIFTSTREAMS_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that's assigned to an application resource and
     * uniquely identifies the application across all Amazon Web Services Regions.
     * Format is <code>arn:aws:gameliftstreams:[AWS Region]:[AWS
     * account]:application/[resource ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ApplicationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ApplicationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application. You can edit this value. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ApplicationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ApplicationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ApplicationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ApplicationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ApplicationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ApplicationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ApplicationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ApplicationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of configuration settings to run the application on a stream group.
     * This configures the operating system, and can include compatibility layers and
     * other drivers. </p> <p>A runtime environment can be one of the following:</p>
     * <ul> <li> <p> For Linux applications </p> <ul> <li> <p> Ubuntu 22.04
     * LTS(<code>Type=UBUNTU, Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p>
     * For Windows applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }
    inline ApplicationSummary& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}
    inline ApplicationSummary& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the application resource. Possible statuses include the
     * following:</p> <ul> <li> <p> <code>INITIALIZED</code>: Amazon GameLift Streams
     * has received the request and is initiating the work flow to create an
     * application. </p> </li> <li> <p> <code>PROCESSING</code>: The create application
     * work flow is in process. Amazon GameLift Streams is copying the content and
     * caching for future deployment in a stream group.</p> </li> <li> <p>
     * <code>READY</code>: The application is ready to deploy in a stream group.</p>
     * </li> <li> <p> <code>ERROR</code>: An error occurred when setting up the
     * application. See <code>StatusReason</code> for more information.</p> </li> <li>
     * <p> <code>DELETING</code>: Amazon GameLift Streams is in the process of deleting
     * the application.</p> </li> </ul>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ApplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ApplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ApplicationSummary& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}
    inline ApplicationSummary& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    ApplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
