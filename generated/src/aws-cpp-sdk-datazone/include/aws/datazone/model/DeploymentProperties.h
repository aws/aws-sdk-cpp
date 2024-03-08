/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The deployment properties of the Amazon DataZone blueprint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeploymentProperties">AWS
   * API Reference</a></p>
   */
  class DeploymentProperties
  {
  public:
    AWS_DATAZONE_API DeploymentProperties();
    AWS_DATAZONE_API DeploymentProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DeploymentProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The end timeout of the environment blueprint deployment.</p>
     */
    inline int GetEndTimeoutMinutes() const{ return m_endTimeoutMinutes; }

    /**
     * <p>The end timeout of the environment blueprint deployment.</p>
     */
    inline bool EndTimeoutMinutesHasBeenSet() const { return m_endTimeoutMinutesHasBeenSet; }

    /**
     * <p>The end timeout of the environment blueprint deployment.</p>
     */
    inline void SetEndTimeoutMinutes(int value) { m_endTimeoutMinutesHasBeenSet = true; m_endTimeoutMinutes = value; }

    /**
     * <p>The end timeout of the environment blueprint deployment.</p>
     */
    inline DeploymentProperties& WithEndTimeoutMinutes(int value) { SetEndTimeoutMinutes(value); return *this;}


    /**
     * <p>The start timeout of the environment blueprint deployment.</p>
     */
    inline int GetStartTimeoutMinutes() const{ return m_startTimeoutMinutes; }

    /**
     * <p>The start timeout of the environment blueprint deployment.</p>
     */
    inline bool StartTimeoutMinutesHasBeenSet() const { return m_startTimeoutMinutesHasBeenSet; }

    /**
     * <p>The start timeout of the environment blueprint deployment.</p>
     */
    inline void SetStartTimeoutMinutes(int value) { m_startTimeoutMinutesHasBeenSet = true; m_startTimeoutMinutes = value; }

    /**
     * <p>The start timeout of the environment blueprint deployment.</p>
     */
    inline DeploymentProperties& WithStartTimeoutMinutes(int value) { SetStartTimeoutMinutes(value); return *this;}

  private:

    int m_endTimeoutMinutes;
    bool m_endTimeoutMinutesHasBeenSet = false;

    int m_startTimeoutMinutes;
    bool m_startTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
