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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/RoutingStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties describing a fleet alias.</p> <p>Alias-related operations
   * include:</p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li> <p>
   * <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a> </p> </li> <li> <p>
   * <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Alias">AWS API
   * Reference</a></p>
   */
  class AWS_GAMELIFT_API Alias
  {
  public:
    Alias();
    Alias(const Aws::Utils::Json::JsonValue& jsonValue);
    Alias& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline Alias& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline Alias& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an alias; alias IDs are unique within a region.</p>
     */
    inline Alias& WithAliasId(const char* value) { SetAliasId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

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
    inline Alias& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline Alias& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline Alias& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline Alias& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline Alias& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an alias; alias ARNs are unique across all regions.</p>
     */
    inline Alias& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
    inline Alias& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline Alias& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of an alias.</p>
     */
    inline Alias& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Alias configuration for the alias, including routing type and settings.</p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const{ return m_routingStrategy; }

    /**
     * <p>Alias configuration for the alias, including routing type and settings.</p>
     */
    inline void SetRoutingStrategy(const RoutingStrategy& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = value; }

    /**
     * <p>Alias configuration for the alias, including routing type and settings.</p>
     */
    inline void SetRoutingStrategy(RoutingStrategy&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::move(value); }

    /**
     * <p>Alias configuration for the alias, including routing type and settings.</p>
     */
    inline Alias& WithRoutingStrategy(const RoutingStrategy& value) { SetRoutingStrategy(value); return *this;}

    /**
     * <p>Alias configuration for the alias, including routing type and settings.</p>
     */
    inline Alias& WithRoutingStrategy(RoutingStrategy&& value) { SetRoutingStrategy(std::move(value)); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Alias& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Alias& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>Time stamp indicating when this data object was last modified. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Time stamp indicating when this data object was last modified. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Time stamp indicating when this data object was last modified. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was last modified. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline Alias& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was last modified. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline Alias& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
