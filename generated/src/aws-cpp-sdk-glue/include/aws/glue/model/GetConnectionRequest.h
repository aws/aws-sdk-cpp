/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ComputeEnvironment.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetConnectionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnection"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetConnectionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetConnectionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the KMS key to decrypt the password, but
     * it does have permission to access the rest of the connection properties.</p>
     */
    inline bool GetHidePassword() const { return m_hidePassword; }
    inline bool HidePasswordHasBeenSet() const { return m_hidePasswordHasBeenSet; }
    inline void SetHidePassword(bool value) { m_hidePasswordHasBeenSet = true; m_hidePassword = value; }
    inline GetConnectionRequest& WithHidePassword(bool value) { SetHidePassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections that may be used in multiple services, specifies returning
     * properties for the specified compute environment.</p>
     */
    inline ComputeEnvironment GetApplyOverrideForComputeEnvironment() const { return m_applyOverrideForComputeEnvironment; }
    inline bool ApplyOverrideForComputeEnvironmentHasBeenSet() const { return m_applyOverrideForComputeEnvironmentHasBeenSet; }
    inline void SetApplyOverrideForComputeEnvironment(ComputeEnvironment value) { m_applyOverrideForComputeEnvironmentHasBeenSet = true; m_applyOverrideForComputeEnvironment = value; }
    inline GetConnectionRequest& WithApplyOverrideForComputeEnvironment(ComputeEnvironment value) { SetApplyOverrideForComputeEnvironment(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_hidePassword{false};
    bool m_hidePasswordHasBeenSet = false;

    ComputeEnvironment m_applyOverrideForComputeEnvironment{ComputeEnvironment::NOT_SET};
    bool m_applyOverrideForComputeEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
