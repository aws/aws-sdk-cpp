/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ContinuousBackupsDescription
  {
  public:
    AWS_DYNAMODB_API ContinuousBackupsDescription();
    AWS_DYNAMODB_API ContinuousBackupsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ContinuousBackupsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>ContinuousBackupsStatus</code> can be one of the following states:
     * ENABLED, DISABLED</p>
     */
    inline const ContinuousBackupsStatus& GetContinuousBackupsStatus() const{ return m_continuousBackupsStatus; }
    inline bool ContinuousBackupsStatusHasBeenSet() const { return m_continuousBackupsStatusHasBeenSet; }
    inline void SetContinuousBackupsStatus(const ContinuousBackupsStatus& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = value; }
    inline void SetContinuousBackupsStatus(ContinuousBackupsStatus&& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = std::move(value); }
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(const ContinuousBackupsStatus& value) { SetContinuousBackupsStatus(value); return *this;}
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(ContinuousBackupsStatus&& value) { SetContinuousBackupsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the point in time recovery settings applied to the
     * table.</p>
     */
    inline const PointInTimeRecoveryDescription& GetPointInTimeRecoveryDescription() const{ return m_pointInTimeRecoveryDescription; }
    inline bool PointInTimeRecoveryDescriptionHasBeenSet() const { return m_pointInTimeRecoveryDescriptionHasBeenSet; }
    inline void SetPointInTimeRecoveryDescription(const PointInTimeRecoveryDescription& value) { m_pointInTimeRecoveryDescriptionHasBeenSet = true; m_pointInTimeRecoveryDescription = value; }
    inline void SetPointInTimeRecoveryDescription(PointInTimeRecoveryDescription&& value) { m_pointInTimeRecoveryDescriptionHasBeenSet = true; m_pointInTimeRecoveryDescription = std::move(value); }
    inline ContinuousBackupsDescription& WithPointInTimeRecoveryDescription(const PointInTimeRecoveryDescription& value) { SetPointInTimeRecoveryDescription(value); return *this;}
    inline ContinuousBackupsDescription& WithPointInTimeRecoveryDescription(PointInTimeRecoveryDescription&& value) { SetPointInTimeRecoveryDescription(std::move(value)); return *this;}
    ///@}
  private:

    ContinuousBackupsStatus m_continuousBackupsStatus;
    bool m_continuousBackupsStatusHasBeenSet = false;

    PointInTimeRecoveryDescription m_pointInTimeRecoveryDescription;
    bool m_pointInTimeRecoveryDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
