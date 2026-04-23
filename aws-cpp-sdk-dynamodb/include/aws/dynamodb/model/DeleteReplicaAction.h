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
   * <p>Represents a replica to be removed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteReplicaAction">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API DeleteReplicaAction
  {
  public:
    DeleteReplicaAction();
    DeleteReplicaAction(Aws::Utils::Json::JsonView jsonValue);
    DeleteReplicaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline DeleteReplicaAction& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline DeleteReplicaAction& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The region of the replica to be removed.</p>
     */
    inline DeleteReplicaAction& WithRegionName(const char* value) { SetRegionName(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
