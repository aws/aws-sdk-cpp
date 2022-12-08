/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The edited service description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The edited service description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The edited service description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The edited service description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The edited service description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The edited service description.</p>
     */
    inline UpdateServiceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The edited service description.</p>
     */
    inline UpdateServiceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The edited service description.</p>
     */
    inline UpdateServiceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the service to edit.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service to edit.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service to edit.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service to edit.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service to edit.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service to edit.</p>
     */
    inline UpdateServiceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service to edit.</p>
     */
    inline UpdateServiceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service to edit.</p>
     */
    inline UpdateServiceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithSpec(const char* value) { SetSpec(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
