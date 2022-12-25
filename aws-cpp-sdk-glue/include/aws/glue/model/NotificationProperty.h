/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration properties of a notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/NotificationProperty">AWS
   * API Reference</a></p>
   */
  class NotificationProperty
  {
  public:
    AWS_GLUE_API NotificationProperty();
    AWS_GLUE_API NotificationProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API NotificationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>After a job run starts, the number of minutes to wait before sending a job
     * run delay notification.</p>
     */
    inline int GetNotifyDelayAfter() const{ return m_notifyDelayAfter; }

    /**
     * <p>After a job run starts, the number of minutes to wait before sending a job
     * run delay notification.</p>
     */
    inline bool NotifyDelayAfterHasBeenSet() const { return m_notifyDelayAfterHasBeenSet; }

    /**
     * <p>After a job run starts, the number of minutes to wait before sending a job
     * run delay notification.</p>
     */
    inline void SetNotifyDelayAfter(int value) { m_notifyDelayAfterHasBeenSet = true; m_notifyDelayAfter = value; }

    /**
     * <p>After a job run starts, the number of minutes to wait before sending a job
     * run delay notification.</p>
     */
    inline NotificationProperty& WithNotifyDelayAfter(int value) { SetNotifyDelayAfter(value); return *this;}

  private:

    int m_notifyDelayAfter;
    bool m_notifyDelayAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
