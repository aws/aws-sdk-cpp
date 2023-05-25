/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a replica to be added.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateReplicaAction">AWS
   * API Reference</a></p>
   */
  class CreateReplicaAction
  {
  public:
    AWS_DYNAMODB_API CreateReplicaAction();
    AWS_DYNAMODB_API CreateReplicaAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CreateReplicaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline CreateReplicaAction& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline CreateReplicaAction& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline CreateReplicaAction& WithRegionName(const char* value) { SetRegionName(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
