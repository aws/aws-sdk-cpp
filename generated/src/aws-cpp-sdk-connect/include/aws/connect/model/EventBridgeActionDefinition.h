/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The EventBridge action definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EventBridgeActionDefinition">AWS
   * API Reference</a></p>
   */
  class EventBridgeActionDefinition
  {
  public:
    AWS_CONNECT_API EventBridgeActionDefinition();
    AWS_CONNECT_API EventBridgeActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EventBridgeActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EventBridgeActionDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EventBridgeActionDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EventBridgeActionDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
