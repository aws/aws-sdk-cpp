/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/BackendStoragePermissions.h>
#include <aws/amplifybackend/model/ServiceName.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The details for a backend storage resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendStorageResourceConfig">AWS
   * API Reference</a></p>
   */
  class GetBackendStorageResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendStorageResourceConfig();
    AWS_AMPLIFYBACKEND_API GetBackendStorageResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API GetBackendStorageResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline GetBackendStorageResourceConfig& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline GetBackendStorageResourceConfig& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline GetBackendStorageResourceConfig& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Returns True if the storage resource has been imported.</p>
     */
    inline bool GetImported() const{ return m_imported; }

    /**
     * <p>Returns True if the storage resource has been imported.</p>
     */
    inline bool ImportedHasBeenSet() const { return m_importedHasBeenSet; }

    /**
     * <p>Returns True if the storage resource has been imported.</p>
     */
    inline void SetImported(bool value) { m_importedHasBeenSet = true; m_imported = value; }

    /**
     * <p>Returns True if the storage resource has been imported.</p>
     */
    inline GetBackendStorageResourceConfig& WithImported(bool value) { SetImported(value); return *this;}


    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline const BackendStoragePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline void SetPermissions(const BackendStoragePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline void SetPermissions(BackendStoragePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline GetBackendStorageResourceConfig& WithPermissions(const BackendStoragePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline GetBackendStorageResourceConfig& WithPermissions(BackendStoragePermissions&& value) { SetPermissions(std::move(value)); return *this;}


    /**
     * <p>The name of the storage service.</p>
     */
    inline const ServiceName& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the storage service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the storage service.</p>
     */
    inline void SetServiceName(const ServiceName& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the storage service.</p>
     */
    inline void SetServiceName(ServiceName&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the storage service.</p>
     */
    inline GetBackendStorageResourceConfig& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the storage service.</p>
     */
    inline GetBackendStorageResourceConfig& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    bool m_imported;
    bool m_importedHasBeenSet = false;

    BackendStoragePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    ServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
