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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Ingestion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Ingestion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Ingestion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline const Aws::String& GetAppBundleArn() const{ return m_appBundleArn; }
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }
    inline void SetAppBundleArn(const Aws::String& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = value; }
    inline void SetAppBundleArn(Aws::String&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::move(value); }
    inline void SetAppBundleArn(const char* value) { m_appBundleArnHasBeenSet = true; m_appBundleArn.assign(value); }
    inline Ingestion& WithAppBundleArn(const Aws::String& value) { SetAppBundleArn(value); return *this;}
    inline Ingestion& WithAppBundleArn(Aws::String&& value) { SetAppBundleArn(std::move(value)); return *this;}
    inline Ingestion& WithAppBundleArn(const char* value) { SetAppBundleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }
    inline Ingestion& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline Ingestion& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline Ingestion& WithApp(const char* value) { SetApp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline Ingestion& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline Ingestion& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline Ingestion& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Ingestion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Ingestion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Ingestion& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Ingestion& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingestion.</p>
     */
    inline const IngestionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IngestionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IngestionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Ingestion& WithState(const IngestionState& value) { SetState(value); return *this;}
    inline Ingestion& WithState(IngestionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the ingestion.</p>
     */
    inline const IngestionType& GetIngestionType() const{ return m_ingestionType; }
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }
    inline void SetIngestionType(const IngestionType& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }
    inline void SetIngestionType(IngestionType&& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = std::move(value); }
    inline Ingestion& WithIngestionType(const IngestionType& value) { SetIngestionType(value); return *this;}
    inline Ingestion& WithIngestionType(IngestionType&& value) { SetIngestionType(std::move(value)); return *this;}
    ///@}
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
