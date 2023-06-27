/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/IngestionState.h>
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
   * <p>Contains a summary of an ingestion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/IngestionSummary">AWS
   * API Reference</a></p>
   */
  class IngestionSummary
  {
  public:
    AWS_APPFABRIC_API IngestionSummary();
    AWS_APPFABRIC_API IngestionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API IngestionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline IngestionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline IngestionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline IngestionSummary& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline IngestionSummary& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline IngestionSummary& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline IngestionSummary& WithApp(const char* value) { SetApp(value); return *this;}


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
    inline IngestionSummary& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline IngestionSummary& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline IngestionSummary& WithTenantId(const char* value) { SetTenantId(value); return *this;}


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
    inline IngestionSummary& WithState(const IngestionState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the ingestion.</p>
     */
    inline IngestionSummary& WithState(IngestionState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    IngestionState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
