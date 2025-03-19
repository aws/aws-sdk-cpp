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
    AWS_APPFABRIC_API Ingestion() = default;
    AWS_APPFABRIC_API Ingestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Ingestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Ingestion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the ingestion.</p>
     */
    inline const Aws::String& GetAppBundleArn() const { return m_appBundleArn; }
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }
    template<typename AppBundleArnT = Aws::String>
    void SetAppBundleArn(AppBundleArnT&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::forward<AppBundleArnT>(value); }
    template<typename AppBundleArnT = Aws::String>
    Ingestion& WithAppBundleArn(AppBundleArnT&& value) { SetAppBundleArn(std::forward<AppBundleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const { return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    template<typename AppT = Aws::String>
    void SetApp(AppT&& value) { m_appHasBeenSet = true; m_app = std::forward<AppT>(value); }
    template<typename AppT = Aws::String>
    Ingestion& WithApp(AppT&& value) { SetApp(std::forward<AppT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    Ingestion& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Ingestion& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Ingestion& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingestion.</p>
     */
    inline IngestionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IngestionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Ingestion& WithState(IngestionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the ingestion.</p>
     */
    inline IngestionType GetIngestionType() const { return m_ingestionType; }
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }
    inline void SetIngestionType(IngestionType value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }
    inline Ingestion& WithIngestionType(IngestionType value) { SetIngestionType(value); return *this;}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    IngestionState m_state{IngestionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    IngestionType m_ingestionType{IngestionType::NOT_SET};
    bool m_ingestionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
