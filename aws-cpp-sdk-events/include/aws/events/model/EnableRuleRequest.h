/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API EnableRuleRequest : public CloudWatchEventsRequest
  {
  public:
    EnableRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline EnableRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline EnableRuleRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline EnableRuleRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
