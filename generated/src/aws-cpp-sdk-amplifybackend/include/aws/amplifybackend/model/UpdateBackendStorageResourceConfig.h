/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
   * <p>The resource configuration for updating backend storage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendStorageResourceConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendStorageResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendStorageResourceConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendStorageResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendStorageResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline UpdateBackendStorageResourceConfig& WithPermissions(const BackendStoragePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>The authorization configuration for the storage S3 bucket.</p>
     */
    inline UpdateBackendStorageResourceConfig& WithPermissions(BackendStoragePermissions&& value) { SetPermissions(std::move(value)); return *this;}


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
    inline UpdateBackendStorageResourceConfig& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the storage service.</p>
     */
    inline UpdateBackendStorageResourceConfig& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}

  private:

    BackendStoragePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    ServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
