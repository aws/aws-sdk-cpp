/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/ApplicationVersionLifecycle.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines an application version summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ApplicationVersionSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationVersionSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ApplicationVersionSummary();
    AWS_MAINFRAMEMODERNIZATION_API ApplicationVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API ApplicationVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application version.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The application version.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The application version.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The application version.</p>
     */
    inline ApplicationVersionSummary& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline ApplicationVersionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline ApplicationVersionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationVersionLifecycle& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(const ApplicationVersionLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(ApplicationVersionLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationVersionSummary& WithStatus(const ApplicationVersionLifecycle& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationVersionSummary& WithStatus(ApplicationVersionLifecycle&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline ApplicationVersionSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline ApplicationVersionSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline ApplicationVersionSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    int m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ApplicationVersionLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
