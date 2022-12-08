/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Operational metadata for an application in Application Manager.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsMetadata">AWS API
   * Reference</a></p>
   */
  class OpsMetadata
  {
  public:
    AWS_SSM_API OpsMetadata();
    AWS_SSM_API OpsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline OpsMetadata& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline OpsMetadata& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline OpsMetadata& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline OpsMetadata& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline OpsMetadata& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline OpsMetadata& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}


    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline OpsMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline OpsMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline OpsMetadata& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline OpsMetadata& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}

    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline OpsMetadata& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}


    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline OpsMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline OpsMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
