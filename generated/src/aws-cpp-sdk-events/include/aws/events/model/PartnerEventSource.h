/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A partner event source is created by an SaaS partner. If a customer creates a
   * partner event bus that matches this event source, that Amazon Web Services
   * account can receive events from the partner's applications or
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PartnerEventSource">AWS
   * API Reference</a></p>
   */
  class PartnerEventSource
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PartnerEventSource();
    AWS_CLOUDWATCHEVENTS_API PartnerEventSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API PartnerEventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline PartnerEventSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline PartnerEventSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline PartnerEventSource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the partner event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline PartnerEventSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the partner event source.</p>
     */
    inline PartnerEventSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner event source.</p>
     */
    inline PartnerEventSource& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
