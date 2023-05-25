/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TriggerUpdate.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateTriggerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateTriggerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrigger"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the trigger to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline UpdateTriggerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline UpdateTriggerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trigger to update.</p>
     */
    inline UpdateTriggerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline const TriggerUpdate& GetTriggerUpdate() const{ return m_triggerUpdate; }

    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline bool TriggerUpdateHasBeenSet() const { return m_triggerUpdateHasBeenSet; }

    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline void SetTriggerUpdate(const TriggerUpdate& value) { m_triggerUpdateHasBeenSet = true; m_triggerUpdate = value; }

    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline void SetTriggerUpdate(TriggerUpdate&& value) { m_triggerUpdateHasBeenSet = true; m_triggerUpdate = std::move(value); }

    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline UpdateTriggerRequest& WithTriggerUpdate(const TriggerUpdate& value) { SetTriggerUpdate(value); return *this;}

    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline UpdateTriggerRequest& WithTriggerUpdate(TriggerUpdate&& value) { SetTriggerUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TriggerUpdate m_triggerUpdate;
    bool m_triggerUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
