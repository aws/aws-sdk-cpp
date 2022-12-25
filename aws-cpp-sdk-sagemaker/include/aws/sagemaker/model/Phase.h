/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the traffic pattern.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Phase">AWS API
   * Reference</a></p>
   */
  class Phase
  {
  public:
    AWS_SAGEMAKER_API Phase();
    AWS_SAGEMAKER_API Phase(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Phase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how many concurrent users to start with.</p>
     */
    inline int GetInitialNumberOfUsers() const{ return m_initialNumberOfUsers; }

    /**
     * <p>Specifies how many concurrent users to start with.</p>
     */
    inline bool InitialNumberOfUsersHasBeenSet() const { return m_initialNumberOfUsersHasBeenSet; }

    /**
     * <p>Specifies how many concurrent users to start with.</p>
     */
    inline void SetInitialNumberOfUsers(int value) { m_initialNumberOfUsersHasBeenSet = true; m_initialNumberOfUsers = value; }

    /**
     * <p>Specifies how many concurrent users to start with.</p>
     */
    inline Phase& WithInitialNumberOfUsers(int value) { SetInitialNumberOfUsers(value); return *this;}


    /**
     * <p>Specified how many new users to spawn in a minute.</p>
     */
    inline int GetSpawnRate() const{ return m_spawnRate; }

    /**
     * <p>Specified how many new users to spawn in a minute.</p>
     */
    inline bool SpawnRateHasBeenSet() const { return m_spawnRateHasBeenSet; }

    /**
     * <p>Specified how many new users to spawn in a minute.</p>
     */
    inline void SetSpawnRate(int value) { m_spawnRateHasBeenSet = true; m_spawnRate = value; }

    /**
     * <p>Specified how many new users to spawn in a minute.</p>
     */
    inline Phase& WithSpawnRate(int value) { SetSpawnRate(value); return *this;}


    /**
     * <p>Specifies how long traffic phase should be.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>Specifies how long traffic phase should be.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>Specifies how long traffic phase should be.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>Specifies how long traffic phase should be.</p>
     */
    inline Phase& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_initialNumberOfUsers;
    bool m_initialNumberOfUsersHasBeenSet = false;

    int m_spawnRate;
    bool m_spawnRateHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
