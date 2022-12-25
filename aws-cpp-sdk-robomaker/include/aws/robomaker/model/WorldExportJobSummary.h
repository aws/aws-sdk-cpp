/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/OutputLocation.h>
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
   * <p>Information about a world export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldExportJobSummary">AWS
   * API Reference</a></p>
   */
  class WorldExportJobSummary
  {
  public:
    AWS_ROBOMAKER_API WorldExportJobSummary();
    AWS_ROBOMAKER_API WorldExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline WorldExportJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline WorldExportJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline WorldExportJobSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline const WorldExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline void SetStatus(const WorldExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline void SetStatus(WorldExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline WorldExportJobSummary& WithStatus(const WorldExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline WorldExportJobSummary& WithStatus(WorldExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline WorldExportJobSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline WorldExportJobSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A list of worlds.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const{ return m_worlds; }

    /**
     * <p>A list of worlds.</p>
     */
    inline bool WorldsHasBeenSet() const { return m_worldsHasBeenSet; }

    /**
     * <p>A list of worlds.</p>
     */
    inline void SetWorlds(const Aws::Vector<Aws::String>& value) { m_worldsHasBeenSet = true; m_worlds = value; }

    /**
     * <p>A list of worlds.</p>
     */
    inline void SetWorlds(Aws::Vector<Aws::String>&& value) { m_worldsHasBeenSet = true; m_worlds = std::move(value); }

    /**
     * <p>A list of worlds.</p>
     */
    inline WorldExportJobSummary& WithWorlds(const Aws::Vector<Aws::String>& value) { SetWorlds(value); return *this;}

    /**
     * <p>A list of worlds.</p>
     */
    inline WorldExportJobSummary& WithWorlds(Aws::Vector<Aws::String>&& value) { SetWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of worlds.</p>
     */
    inline WorldExportJobSummary& AddWorlds(const Aws::String& value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }

    /**
     * <p>A list of worlds.</p>
     */
    inline WorldExportJobSummary& AddWorlds(Aws::String&& value) { m_worldsHasBeenSet = true; m_worlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of worlds.</p>
     */
    inline WorldExportJobSummary& AddWorlds(const char* value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }


    
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    
    inline WorldExportJobSummary& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    
    inline WorldExportJobSummary& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    WorldExportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
