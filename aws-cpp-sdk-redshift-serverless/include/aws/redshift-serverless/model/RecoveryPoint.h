/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The automatically created recovery point of a namespace. Recovery points are
   * created every 30 minutes and kept for 24 hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RecoveryPoint">AWS
   * API Reference</a></p>
   */
  class RecoveryPoint
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint();
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The time the recovery point is created.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreateTime() const{ return m_recoveryPointCreateTime; }

    /**
     * <p>The time the recovery point is created.</p>
     */
    inline bool RecoveryPointCreateTimeHasBeenSet() const { return m_recoveryPointCreateTimeHasBeenSet; }

    /**
     * <p>The time the recovery point is created.</p>
     */
    inline void SetRecoveryPointCreateTime(const Aws::Utils::DateTime& value) { m_recoveryPointCreateTimeHasBeenSet = true; m_recoveryPointCreateTime = value; }

    /**
     * <p>The time the recovery point is created.</p>
     */
    inline void SetRecoveryPointCreateTime(Aws::Utils::DateTime&& value) { m_recoveryPointCreateTimeHasBeenSet = true; m_recoveryPointCreateTime = std::move(value); }

    /**
     * <p>The time the recovery point is created.</p>
     */
    inline RecoveryPoint& WithRecoveryPointCreateTime(const Aws::Utils::DateTime& value) { SetRecoveryPointCreateTime(value); return *this;}

    /**
     * <p>The time the recovery point is created.</p>
     */
    inline RecoveryPoint& WithRecoveryPointCreateTime(Aws::Utils::DateTime&& value) { SetRecoveryPointCreateTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = value; }

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::move(value); }

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId.assign(value); }

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline RecoveryPoint& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline RecoveryPoint& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline RecoveryPoint& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}


    /**
     * <p>The total size of the data in the recovery point in megabytes.</p>
     */
    inline double GetTotalSizeInMegaBytes() const{ return m_totalSizeInMegaBytes; }

    /**
     * <p>The total size of the data in the recovery point in megabytes.</p>
     */
    inline bool TotalSizeInMegaBytesHasBeenSet() const { return m_totalSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The total size of the data in the recovery point in megabytes.</p>
     */
    inline void SetTotalSizeInMegaBytes(double value) { m_totalSizeInMegaBytesHasBeenSet = true; m_totalSizeInMegaBytes = value; }

    /**
     * <p>The total size of the data in the recovery point in megabytes.</p>
     */
    inline RecoveryPoint& WithTotalSizeInMegaBytes(double value) { SetTotalSizeInMegaBytes(value); return *this;}


    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline RecoveryPoint& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::Utils::DateTime m_recoveryPointCreateTime;
    bool m_recoveryPointCreateTimeHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    double m_totalSizeInMegaBytes;
    bool m_totalSizeInMegaBytesHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
