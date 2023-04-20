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
    AWS_GAMELIFT_API Alias();
    AWS_GAMELIFT_API Alias(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Alias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline Alias& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline Alias& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the alias. Alias IDs are unique within a Region.</p>
     */
    inline Alias& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline Alias& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline Alias& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline Alias& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline Alias& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline Alias& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift alias resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::alias/alias-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift alias ARN, the resource ID matches the alias ID value.</p>
     */
    inline Alias& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}


    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline Alias& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline Alias& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of an alias.</p>
     */
    inline Alias& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const{ return m_routingStrategy; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline void SetRoutingStrategy(const RoutingStrategy& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = value; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline void SetRoutingStrategy(RoutingStrategy&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::move(value); }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline Alias& WithRoutingStrategy(const RoutingStrategy& value) { SetRoutingStrategy(value); return *this;}

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline Alias& WithRoutingStrategy(RoutingStrategy&& value) { SetRoutingStrategy(std::move(value)); return *this;}


    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Alias& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Alias& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Alias& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that this data object was last modified. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Alias& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
