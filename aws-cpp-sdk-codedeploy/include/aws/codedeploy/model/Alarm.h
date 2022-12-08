/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/Alarm">AWS
   * API Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_CODEDEPLOY_API Alarm();
    AWS_CODEDEPLOY_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline Alarm& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline Alarm& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm. Maximum length is 255 characters. Each alarm name can
     * be used only once in a list of alarms.</p>
     */
    inline Alarm& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
