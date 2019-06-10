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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API CreateDatasetRequest : public PersonalizeRequest
  {
  public:
    CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
