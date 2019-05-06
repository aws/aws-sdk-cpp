/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API UpdateTriggerRequest : public GlueRequest
  {
  public:
    UpdateTriggerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrigger"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_nameHasBeenSet;

    TriggerUpdate m_triggerUpdate;
    bool m_triggerUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
