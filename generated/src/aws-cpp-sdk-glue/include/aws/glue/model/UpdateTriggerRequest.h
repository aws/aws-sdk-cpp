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
    AWS_GLUE_API UpdateTriggerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrigger"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the trigger to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTriggerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new values with which to update the trigger.</p>
     */
    inline const TriggerUpdate& GetTriggerUpdate() const { return m_triggerUpdate; }
    inline bool TriggerUpdateHasBeenSet() const { return m_triggerUpdateHasBeenSet; }
    template<typename TriggerUpdateT = TriggerUpdate>
    void SetTriggerUpdate(TriggerUpdateT&& value) { m_triggerUpdateHasBeenSet = true; m_triggerUpdate = std::forward<TriggerUpdateT>(value); }
    template<typename TriggerUpdateT = TriggerUpdate>
    UpdateTriggerRequest& WithTriggerUpdate(TriggerUpdateT&& value) { SetTriggerUpdate(std::forward<TriggerUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TriggerUpdate m_triggerUpdate;
    bool m_triggerUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
