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
   * <p>A structure that contains information about a backed-up
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ProtectedResource">AWS
   * API Reference</a></p>
   */
  class ProtectedResource
  {
  public:
    AWS_BACKUP_API ProtectedResource();
    AWS_BACKUP_API ProtectedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ProtectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ProtectedResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ProtectedResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ProtectedResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline ProtectedResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline ProtectedResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline ProtectedResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const{ return m_lastBackupTime; }

    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool LastBackupTimeHasBeenSet() const { return m_lastBackupTimeHasBeenSet; }

    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastBackupTime(const Aws::Utils::DateTime& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = value; }

    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastBackupTime(Aws::Utils::DateTime&& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = std::move(value); }

    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ProtectedResource& WithLastBackupTime(const Aws::Utils::DateTime& value) { SetLastBackupTime(value); return *this;}

    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ProtectedResource& WithLastBackupTime(Aws::Utils::DateTime&& value) { SetLastBackupTime(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBackupTime;
    bool m_lastBackupTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
