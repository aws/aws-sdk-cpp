/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties that describe an alias resource.</p> <p> <b>Related actions</b>
   * </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Alias">AWS API
   * Reference</a></p>
   */
  class Alias
  {
  public:
    AWS_GAMELIFT_API Alias() = default;
    AWS_GAMELIFT_API Alias(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Alias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline const Aws::String& GetAliasId() const { return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    template<typename AliasIdT = Aws::String>
    void SetAliasId(AliasIdT&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::forward<AliasIdT>(value); }
    template<typename AliasIdT = Aws::String>
    Alias& WithAliasId(AliasIdT&& value) { SetAliasId(std::forward<AliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Alias& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers alias resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
    template<typename AliasArnT = Aws::String>
    void SetAliasArn(AliasArnT&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::forward<AliasArnT>(value); }
    template<typename AliasArnT = Aws::String>
    Alias& WithAliasArn(AliasArnT&& value) { SetAliasArn(std::forward<AliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Alias& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const { return m_routingStrategy; }
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }
    template<typename RoutingStrategyT = RoutingStrategy>
    void SetRoutingStrategy(RoutingStrategyT&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::forward<RoutingStrategyT>(value); }
    template<typename RoutingStrategyT = RoutingStrategy>
    Alias& WithRoutingStrategy(RoutingStrategyT&& value) { SetRoutingStrategy(std::forward<RoutingStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Alias& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Alias& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
