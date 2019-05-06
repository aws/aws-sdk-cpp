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
#include <aws/gamelift/model/RoutingStrategy.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAliasInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateAliasRequest : public GameLiftRequest
  {
  public:
    UpdateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline UpdateAliasRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline UpdateAliasRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify the alias you want to
     * update.</p>
     */
    inline UpdateAliasRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline UpdateAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline UpdateAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline UpdateAliasRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline UpdateAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline UpdateAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline UpdateAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const{ return m_routingStrategy; }

    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }

    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline void SetRoutingStrategy(const RoutingStrategy& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = value; }

    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline void SetRoutingStrategy(RoutingStrategy&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::move(value); }

    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline UpdateAliasRequest& WithRoutingStrategy(const RoutingStrategy& value) { SetRoutingStrategy(value); return *this;}

    /**
     * <p>Object that specifies the fleet and routing type to use for the alias.</p>
     */
    inline UpdateAliasRequest& WithRoutingStrategy(RoutingStrategy&& value) { SetRoutingStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
