/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appfabric/model/IngestionState.h>
#include <aws/appfabric/model/IngestionType.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an ingestion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/Ingestion">AWS
   * API Reference</a></p>
   */
  class Ingestion
  {
  public:
    AWS_APPFABRIC_API Ingestion();
    AWS_APPFABRIC_API Ingestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Ingestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline Ingestion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline Ingestion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline Ingestion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline const Aws::String& GetAppBundleArn() const{ return m_appBundleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline void SetAppBundleArn(const Aws::String& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline void SetAppBundleArn(Aws::String&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline void SetAppBundleArn(const char* value) { m_appBundleArnHasBeenSet = true; m_appBundleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline Ingestion& WithAppBundleArn(const Aws::String& value) { SetAppBundleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline Ingestion& WithAppBundleArn(Aws::String&& value) { SetAppBundleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline Ingestion& WithAppBundleArn(const char* value) { SetAppBundleArn(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Ingestion& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Ingestion& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Ingestion& WithApp(const char* value) { SetApp(value); return *this;}


    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Ingestion& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Ingestion& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline Ingestion& WithTenantId(const char* value) { SetTenantId(value); return *this;}


    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline Ingestion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline Ingestion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline Ingestion& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline Ingestion& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the ingestion.</p>
     */
    inline const IngestionState& GetState() const{ return m_state; }

    /**
     * <p>The status of the ingestion.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the ingestion.</p>
     */
    inline void SetState(const IngestionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the ingestion.</p>
     */
    inline void SetState(IngestionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the ingestion.</p>
     */
    inline Ingestion& WithState(const IngestionState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the ingestion.</p>
     */
    inline Ingestion& WithState(IngestionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of the ingestion.</p>
     */
    inline const IngestionType& GetIngestionType() const{ return m_ingestionType; }

    /**
     * <p>The type of the ingestion.</p>
     */
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }

    /**
     * <p>The type of the ingestion.</p>
     */
    inline void SetIngestionType(const IngestionType& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }

    /**
     * <p>The type of the ingestion.</p>
     */
    inline void SetIngestionType(IngestionType&& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = std::move(value); }

    /**
     * <p>The type of the ingestion.</p>
     */
    inline Ingestion& WithIngestionType(const IngestionType& value) { SetIngestionType(value); return *this;}

    /**
     * <p>The type of the ingestion.</p>
     */
    inline Ingestion& WithIngestionType(IngestionType&& value) { SetIngestionType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_appBundleArn;
    bool m_appBundleArnHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    IngestionState m_state;
    bool m_stateHasBeenSet = false;

    IngestionType m_ingestionType;
    bool m_ingestionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
