/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
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
   * details, call <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetApplication.html">GetApplication</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_GAMELIFTSTREAMS_API ApplicationSummary() = default;
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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ApplicationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that uniquely identifies the application resource. Example ID:
     * <code>a-9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ApplicationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application. You can edit this value. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApplicationSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApplicationSummary& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ApplicationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ApplicationSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration settings that identify the operating system for an application
     * resource. This can also include a compatibility layer and other drivers. </p>
     * <p>A runtime environment can be one of the following:</p> <ul> <li> <p> For
     * Linux applications </p> <ul> <li> <p> Ubuntu 22.04 LTS (<code>Type=UBUNTU,
     * Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p> For Windows
     * applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 9.0-2
     * (<code>Type=PROTON, Version=20250516</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    void SetRuntimeEnvironment(RuntimeEnvironmentT&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::forward<RuntimeEnvironmentT>(value); }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    ApplicationSummary& WithRuntimeEnvironment(RuntimeEnvironmentT&& value) { SetRuntimeEnvironment(std::forward<RuntimeEnvironmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
