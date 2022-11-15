/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperator.h>
#include <aws/quicksight/model/FolderFilterAttribute.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A filter to use to search a Amazon QuickSight folder.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FolderSearchFilter">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API FolderSearchFilter
  {
  public:
    FolderSearchFilter();
    FolderSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    FolderSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline const FilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline void SetOperator(const FilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline void SetOperator(FilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline FolderSearchFilter& WithOperator(const FilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The comparison operator that you want to use in the filter. For example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline FolderSearchFilter& WithOperator(FilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline const FolderFilterAttribute& GetName() const{ return m_name; }

    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline void SetName(const FolderFilterAttribute& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline void SetName(FolderFilterAttribute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline FolderSearchFilter& WithName(const FolderFilterAttribute& value) { SetName(value); return *this;}

    /**
     * <p>The name of a value that you want to use in the filter. For example,
     * <code>"Name": "PARENT_FOLDER_ARN"</code>.</p>
     */
    inline FolderSearchFilter& WithName(FolderFilterAttribute&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline FolderSearchFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline FolderSearchFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the named item (in this example,
     * <code>PARENT_FOLDER_ARN</code>), that you want to use as a filter. For example,
     * <code>"Value": "arn:aws:quicksight:us-east-1:1:folder/folderId"</code>.</p>
     */
    inline FolderSearchFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    FilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    FolderFilterAttribute m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
