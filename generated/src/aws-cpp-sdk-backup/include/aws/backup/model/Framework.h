/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains detailed information about a framework. Frameworks contain controls,
   * which evaluate and report on your backup events and resources. Frameworks
   * generate daily compliance results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Framework">AWS
   * API Reference</a></p>
   */
  class Framework
  {
  public:
    AWS_BACKUP_API Framework() = default;
    AWS_BACKUP_API Framework(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Framework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const { return m_frameworkName; }
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }
    template<typename FrameworkNameT = Aws::String>
    void SetFrameworkName(FrameworkNameT&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::forward<FrameworkNameT>(value); }
    template<typename FrameworkNameT = Aws::String>
    Framework& WithFrameworkName(FrameworkNameT&& value) { SetFrameworkName(std::forward<FrameworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const { return m_frameworkArn; }
    inline bool FrameworkArnHasBeenSet() const { return m_frameworkArnHasBeenSet; }
    template<typename FrameworkArnT = Aws::String>
    void SetFrameworkArn(FrameworkArnT&& value) { m_frameworkArnHasBeenSet = true; m_frameworkArn = std::forward<FrameworkArnT>(value); }
    template<typename FrameworkArnT = Aws::String>
    Framework& WithFrameworkArn(FrameworkArnT&& value) { SetFrameworkArn(std::forward<FrameworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const { return m_frameworkDescription; }
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }
    template<typename FrameworkDescriptionT = Aws::String>
    void SetFrameworkDescription(FrameworkDescriptionT&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::forward<FrameworkDescriptionT>(value); }
    template<typename FrameworkDescriptionT = Aws::String>
    Framework& WithFrameworkDescription(FrameworkDescriptionT&& value) { SetFrameworkDescription(std::forward<FrameworkDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of controls contained by the framework.</p>
     */
    inline int GetNumberOfControls() const { return m_numberOfControls; }
    inline bool NumberOfControlsHasBeenSet() const { return m_numberOfControlsHasBeenSet; }
    inline void SetNumberOfControls(int value) { m_numberOfControlsHasBeenSet = true; m_numberOfControls = value; }
    inline Framework& WithNumberOfControls(int value) { SetNumberOfControls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Framework& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    template<typename DeploymentStatusT = Aws::String>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = Aws::String>
    Framework& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;

    Aws::String m_frameworkArn;
    bool m_frameworkArnHasBeenSet = false;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet = false;

    int m_numberOfControls{0};
    bool m_numberOfControlsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
