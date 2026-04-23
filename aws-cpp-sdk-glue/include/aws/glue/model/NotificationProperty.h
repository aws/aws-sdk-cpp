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
  class AWS_GLUE_API NotificationProperty
  {
  public:
    NotificationProperty();
    NotificationProperty(Aws::Utils::Json::JsonView jsonValue);
    NotificationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_notifyDelayAfterHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
