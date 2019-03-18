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
#include <aws/dynamodb/model/UpdateGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/CreateGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/DeleteGlobalSecondaryIndexAction.h>
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
   * <p>Represents one of the following:</p> <ul> <li> <p>A new global secondary
   * index to be added to an existing table.</p> </li> <li> <p>New provisioned
   * throughput parameters for an existing global secondary index.</p> </li> <li>
   * <p>An existing global secondary index to be removed from an existing table.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API GlobalSecondaryIndexUpdate
  {
  public:
    GlobalSecondaryIndexUpdate();
    GlobalSecondaryIndexUpdate(Aws::Utils::Json::JsonView jsonValue);
    GlobalSecondaryIndexUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline const UpdateGlobalSecondaryIndexAction& GetUpdate() const{ return m_update; }

    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }

    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline void SetUpdate(const UpdateGlobalSecondaryIndexAction& value) { m_updateHasBeenSet = true; m_update = value; }

    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline void SetUpdate(UpdateGlobalSecondaryIndexAction&& value) { m_updateHasBeenSet = true; m_update = std::move(value); }

    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline GlobalSecondaryIndexUpdate& WithUpdate(const UpdateGlobalSecondaryIndexAction& value) { SetUpdate(value); return *this;}

    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline GlobalSecondaryIndexUpdate& WithUpdate(UpdateGlobalSecondaryIndexAction&& value) { SetUpdate(std::move(value)); return *this;}


    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline const CreateGlobalSecondaryIndexAction& GetCreate() const{ return m_create; }

    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }

    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline void SetCreate(const CreateGlobalSecondaryIndexAction& value) { m_createHasBeenSet = true; m_create = value; }

    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline void SetCreate(CreateGlobalSecondaryIndexAction&& value) { m_createHasBeenSet = true; m_create = std::move(value); }

    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline GlobalSecondaryIndexUpdate& WithCreate(const CreateGlobalSecondaryIndexAction& value) { SetCreate(value); return *this;}

    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline GlobalSecondaryIndexUpdate& WithCreate(CreateGlobalSecondaryIndexAction&& value) { SetCreate(std::move(value)); return *this;}


    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline const DeleteGlobalSecondaryIndexAction& GetDelete() const{ return m_delete; }

    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }

    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline void SetDelete(const DeleteGlobalSecondaryIndexAction& value) { m_deleteHasBeenSet = true; m_delete = value; }

    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline void SetDelete(DeleteGlobalSecondaryIndexAction&& value) { m_deleteHasBeenSet = true; m_delete = std::move(value); }

    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline GlobalSecondaryIndexUpdate& WithDelete(const DeleteGlobalSecondaryIndexAction& value) { SetDelete(value); return *this;}

    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline GlobalSecondaryIndexUpdate& WithDelete(DeleteGlobalSecondaryIndexAction&& value) { SetDelete(std::move(value)); return *this;}

  private:

    UpdateGlobalSecondaryIndexAction m_update;
    bool m_updateHasBeenSet;

    CreateGlobalSecondaryIndexAction m_create;
    bool m_createHasBeenSet;

    DeleteGlobalSecondaryIndexAction m_delete;
    bool m_deleteHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
