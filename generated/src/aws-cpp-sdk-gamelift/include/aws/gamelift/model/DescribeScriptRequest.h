/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeScriptRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeScriptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScript"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the Realtime script to retrieve properties for. You
     * can use either the script ID or ARN value.</p>
     */
    inline const Aws::String& GetScriptId() const { return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    template<typename ScriptIdT = Aws::String>
    void SetScriptId(ScriptIdT&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::forward<ScriptIdT>(value); }
    template<typename ScriptIdT = Aws::String>
    DescribeScriptRequest& WithScriptId(ScriptIdT&& value) { SetScriptId(std::forward<ScriptIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
