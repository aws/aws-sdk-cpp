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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsStatus.h>
#include <aws/dynamodb/model/PointInTimeRecoveryDescription.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the continuous backups and point in time recovery settings on the
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ContinuousBackupsDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ContinuousBackupsDescription
  {
  public:
    ContinuousBackupsDescription();
    ContinuousBackupsDescription(Aws::Utils::Json::JsonView jsonValue);
    ContinuousBackupsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline const ContinuousBackupsStatus& GetContinuousBackupsStatus() const{ return m_continuousBackupsStatus; }

    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline bool ContinuousBackupsStatusHasBeenSet() const { return m_continuousBackupsStatusHasBeenSet; }

    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline void SetContinuousBackupsStatus(const ContinuousBackupsStatus& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = value; }

    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline void SetContinuousBackupsStatus(ContinuousBackupsStatus&& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = std::move(value); }

    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(const ContinuousBackupsStatus& value) { SetContinuousBackupsStatus(value); return *this;}

    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(ContinuousBackupsStatus&& value) { SetContinuousBackupsStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline const PointInTimeRecoveryDescription& GetPointInTimeRecoveryDescription() const{ return m_pointInTimeRecoveryDescription; }

    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline bool PointInTimeRecoveryDescriptionHasBeenSet() const { return m_pointInTimeRecoveryDescriptionHasBeenSet; }

    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline void SetPointInTimeRecoveryDescription(const PointInTimeRecoveryDescription& value) { m_pointInTimeRecoveryDescriptionHasBeenSet = true; m_pointInTimeRecoveryDescription = value; }

    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline void SetPointInTimeRecoveryDescription(PointInTimeRecoveryDescription&& value) { m_pointInTimeRecoveryDescriptionHasBeenSet = true; m_pointInTimeRecoveryDescription = std::move(value); }

    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline ContinuousBackupsDescription& WithPointInTimeRecoveryDescription(const PointInTimeRecoveryDescription& value) { SetPointInTimeRecoveryDescription(value); return *this;}

    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline ContinuousBackupsDescription& WithPointInTimeRecoveryDescription(PointInTimeRecoveryDescription&& value) { SetPointInTimeRecoveryDescription(std::move(value)); return *this;}

  private:

    ContinuousBackupsStatus m_continuousBackupsStatus;
    bool m_continuousBackupsStatusHasBeenSet;

    PointInTimeRecoveryDescription m_pointInTimeRecoveryDescription;
    bool m_pointInTimeRecoveryDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
