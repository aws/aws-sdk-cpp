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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentStatus.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Fleet">AWS API
   * Reference</a></p>
   */
  class AWS_ROBOMAKER_API Fleet
  {
  public:
    Fleet();
    Fleet(Aws::Utils::Json::JsonView jsonValue);
    Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Fleet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Fleet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Fleet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline Fleet& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline Fleet& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline const DeploymentStatus& GetLastDeploymentStatus() const{ return m_lastDeploymentStatus; }

    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline bool LastDeploymentStatusHasBeenSet() const { return m_lastDeploymentStatusHasBeenSet; }

    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline void SetLastDeploymentStatus(const DeploymentStatus& value) { m_lastDeploymentStatusHasBeenSet = true; m_lastDeploymentStatus = value; }

    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline void SetLastDeploymentStatus(DeploymentStatus&& value) { m_lastDeploymentStatusHasBeenSet = true; m_lastDeploymentStatus = std::move(value); }

    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline Fleet& WithLastDeploymentStatus(const DeploymentStatus& value) { SetLastDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline Fleet& WithLastDeploymentStatus(DeploymentStatus&& value) { SetLastDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const{ return m_lastDeploymentJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline bool LastDeploymentJobHasBeenSet() const { return m_lastDeploymentJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const Aws::String& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(Aws::String&& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const char* value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Fleet& WithLastDeploymentJob(const Aws::String& value) { SetLastDeploymentJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Fleet& WithLastDeploymentJob(Aws::String&& value) { SetLastDeploymentJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Fleet& WithLastDeploymentJob(const char* value) { SetLastDeploymentJob(value); return *this;}


    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const{ return m_lastDeploymentTime; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline bool LastDeploymentTimeHasBeenSet() const { return m_lastDeploymentTimeHasBeenSet; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(const Aws::Utils::DateTime& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = value; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(Aws::Utils::DateTime&& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = std::move(value); }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline Fleet& WithLastDeploymentTime(const Aws::Utils::DateTime& value) { SetLastDeploymentTime(value); return *this;}

    /**
     * <p>The time of the last deployment.</p>
     */
    inline Fleet& WithLastDeploymentTime(Aws::Utils::DateTime&& value) { SetLastDeploymentTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    DeploymentStatus m_lastDeploymentStatus;
    bool m_lastDeploymentStatusHasBeenSet;

    Aws::String m_lastDeploymentJob;
    bool m_lastDeploymentJobHasBeenSet;

    Aws::Utils::DateTime m_lastDeploymentTime;
    bool m_lastDeploymentTimeHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
