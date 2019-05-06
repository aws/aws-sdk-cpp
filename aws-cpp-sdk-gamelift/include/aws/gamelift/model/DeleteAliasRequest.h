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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAliasInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DeleteAliasRequest : public GameLiftRequest
  {
  public:
    DeleteAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline DeleteAliasRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline DeleteAliasRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * delete.</p>
     */
    inline DeleteAliasRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
