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
    AWS_BACKUP_API Framework();
    AWS_BACKUP_API Framework(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Framework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = value; }

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::move(value); }

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetFrameworkName(const char* value) { m_frameworkNameHasBeenSet = true; m_frameworkName.assign(value); }

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline Framework& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline Framework& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline Framework& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const{ return m_frameworkArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline bool FrameworkArnHasBeenSet() const { return m_frameworkArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const Aws::String& value) { m_frameworkArnHasBeenSet = true; m_frameworkArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(Aws::String&& value) { m_frameworkArnHasBeenSet = true; m_frameworkArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const char* value) { m_frameworkArnHasBeenSet = true; m_frameworkArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline Framework& WithFrameworkArn(const Aws::String& value) { SetFrameworkArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline Framework& WithFrameworkArn(Aws::String&& value) { SetFrameworkArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline Framework& WithFrameworkArn(const char* value) { SetFrameworkArn(value); return *this;}


    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const{ return m_frameworkDescription; }

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline void SetFrameworkDescription(const Aws::String& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = value; }

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline void SetFrameworkDescription(Aws::String&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::move(value); }

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline void SetFrameworkDescription(const char* value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription.assign(value); }

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline Framework& WithFrameworkDescription(const Aws::String& value) { SetFrameworkDescription(value); return *this;}

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline Framework& WithFrameworkDescription(Aws::String&& value) { SetFrameworkDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the framework with a maximum 1,024 characters.</p>
     */
    inline Framework& WithFrameworkDescription(const char* value) { SetFrameworkDescription(value); return *this;}


    /**
     * <p>The number of controls contained by the framework.</p>
     */
    inline int GetNumberOfControls() const{ return m_numberOfControls; }

    /**
     * <p>The number of controls contained by the framework.</p>
     */
    inline bool NumberOfControlsHasBeenSet() const { return m_numberOfControlsHasBeenSet; }

    /**
     * <p>The number of controls contained by the framework.</p>
     */
    inline void SetNumberOfControls(int value) { m_numberOfControlsHasBeenSet = true; m_numberOfControls = value; }

    /**
     * <p>The number of controls contained by the framework.</p>
     */
    inline Framework& WithNumberOfControls(int value) { SetNumberOfControls(value); return *this;}


    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline Framework& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline Framework& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus.assign(value); }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline Framework& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline Framework& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline Framework& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}

  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;

    Aws::String m_frameworkArn;
    bool m_frameworkArnHasBeenSet = false;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet = false;

    int m_numberOfControls;
    bool m_numberOfControlsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
