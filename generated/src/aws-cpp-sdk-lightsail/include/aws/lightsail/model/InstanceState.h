/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the virtual private server (or <i>instance</i>)
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceState">AWS
   * API Reference</a></p>
   */
  class InstanceState
  {
  public:
    AWS_LIGHTSAIL_API InstanceState();
    AWS_LIGHTSAIL_API InstanceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code for the instance.</p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The status code for the instance.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code for the instance.</p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code for the instance.</p>
     */
    inline InstanceState& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline InstanceState& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline InstanceState& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The state of the instance (e.g., <code>running</code> or
     * <code>pending</code>).</p>
     */
    inline InstanceState& WithName(const char* value) { SetName(value); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
