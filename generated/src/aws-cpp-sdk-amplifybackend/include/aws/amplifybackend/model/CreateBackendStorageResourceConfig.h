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
   * <p>The resource configuration for creating backend storage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendStorageResourceConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendStorageResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendStorageResourceConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendStorageResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendStorageResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline CreateBackendStorageResourceConfig& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline CreateBackendStorageResourceConfig& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline CreateBackendStorageResourceConfig& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline const BackendStoragePermissions& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const BackendStoragePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(BackendStoragePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline CreateBackendStorageResourceConfig& WithPermissions(const BackendStoragePermissions& value) { SetPermissions(value); return *this;}
    inline CreateBackendStorageResourceConfig& WithPermissions(BackendStoragePermissions&& value) { SetPermissions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the storage service.</p>
     */
    inline const ServiceName& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const ServiceName& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(ServiceName&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline CreateBackendStorageResourceConfig& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}
    inline CreateBackendStorageResourceConfig& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    BackendStoragePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    ServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
