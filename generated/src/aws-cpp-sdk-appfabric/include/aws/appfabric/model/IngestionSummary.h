﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IngestionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IngestionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IngestionSummary& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline IngestionSummary& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline IngestionSummary& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline IngestionSummary& WithApp(const char* value) { SetApp(value); return *this;}
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
    inline IngestionSummary& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline IngestionSummary& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline IngestionSummary& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingestion.</p>
     */
    inline const IngestionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IngestionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IngestionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IngestionSummary& WithState(const IngestionState& value) { SetState(value); return *this;}
    inline IngestionSummary& WithState(IngestionState&& value) { SetState(std::move(value)); return *this;}
    ///@}
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
