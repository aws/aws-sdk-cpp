/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchGetTriggersRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetTriggersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTriggers"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggerNames() const{ return m_triggerNames; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline bool TriggerNamesHasBeenSet() const { return m_triggerNamesHasBeenSet; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline void SetTriggerNames(const Aws::Vector<Aws::String>& value) { m_triggerNamesHasBeenSet = true; m_triggerNames = value; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline void SetTriggerNames(Aws::Vector<Aws::String>&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames = std::move(value); }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& WithTriggerNames(const Aws::Vector<Aws::String>& value) { SetTriggerNames(value); return *this;}

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& WithTriggerNames(Aws::Vector<Aws::String>&& value) { SetTriggerNames(std::move(value)); return *this;}

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(const Aws::String& value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(value); return *this; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(Aws::String&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(const char* value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_triggerNames;
    bool m_triggerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
