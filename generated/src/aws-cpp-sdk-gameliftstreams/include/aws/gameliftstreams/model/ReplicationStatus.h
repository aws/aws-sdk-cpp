/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/ReplicationStatusType.h>
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
   * <p>Represents the status of the replication of an application to a location. An
   * application cannot be streamed from a location until it has finished replicating
   * there.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ReplicationStatus">AWS
   * API Reference</a></p>
   */
  class ReplicationStatus
  {
  public:
    AWS_GAMELIFTSTREAMS_API ReplicationStatus();
    AWS_GAMELIFTSTREAMS_API ReplicationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API ReplicationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
     * of locations that Amazon GameLift Streams supports, see the Regions and quotas
     * section in the Amazon GameLift Streams Developer Guide . </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ReplicationStatus& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ReplicationStatus& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ReplicationStatus& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the replication process.</p>
     */
    inline const ReplicationStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplicationStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplicationStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReplicationStatus& WithStatus(const ReplicationStatusType& value) { SetStatus(value); return *this;}
    inline ReplicationStatus& WithStatus(ReplicationStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    ReplicationStatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
