/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/ClassificationScopeUpdateOperation.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies S3 buckets to add or remove from the exclusion list defined by the
   * classification scope for an Amazon Macie account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3ClassificationScopeExclusionUpdate">AWS
   * API Reference</a></p>
   */
  class S3ClassificationScopeExclusionUpdate
  {
  public:
    AWS_MACIE2_API S3ClassificationScopeExclusionUpdate();
    AWS_MACIE2_API S3ClassificationScopeExclusionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3ClassificationScopeExclusionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBucketNames() const{ return m_bucketNames; }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline bool BucketNamesHasBeenSet() const { return m_bucketNamesHasBeenSet; }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline void SetBucketNames(const Aws::Vector<Aws::String>& value) { m_bucketNamesHasBeenSet = true; m_bucketNames = value; }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline void SetBucketNames(Aws::Vector<Aws::String>&& value) { m_bucketNamesHasBeenSet = true; m_bucketNames = std::move(value); }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline S3ClassificationScopeExclusionUpdate& WithBucketNames(const Aws::Vector<Aws::String>& value) { SetBucketNames(value); return *this;}

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline S3ClassificationScopeExclusionUpdate& WithBucketNames(Aws::Vector<Aws::String>&& value) { SetBucketNames(std::move(value)); return *this;}

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline S3ClassificationScopeExclusionUpdate& AddBucketNames(const Aws::String& value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(value); return *this; }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline S3ClassificationScopeExclusionUpdate& AddBucketNames(Aws::String&& value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Depending on the value specified for the update operation
     * (ClassificationScopeUpdateOperation), an array of strings that: lists the names
     * of buckets to add or remove from the list, or specifies a new set of bucket
     * names that overwrites all existing names in the list. Each string must be the
     * full name of an S3 bucket. Values are case sensitive.</p>
     */
    inline S3ClassificationScopeExclusionUpdate& AddBucketNames(const char* value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(value); return *this; }


    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline const ClassificationScopeUpdateOperation& GetOperation() const{ return m_operation; }

    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline void SetOperation(const ClassificationScopeUpdateOperation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline void SetOperation(ClassificationScopeUpdateOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline S3ClassificationScopeExclusionUpdate& WithOperation(const ClassificationScopeUpdateOperation& value) { SetOperation(value); return *this;}

    /**
     * <p>Specifies how to apply the changes to the exclusion list. Valid values
     * are:</p> <ul><li><p>ADD - Append the specified bucket names to the current
     * list.</p></li> <li><p>REMOVE - Remove the specified bucket names from the
     * current list.</p></li> <li><p>REPLACE - Overwrite the current list with the
     * specified list of bucket names. If you specify this value, Amazon Macie removes
     * all existing names from the list and adds all the specified names to the
     * list.</p></li></ul>
     */
    inline S3ClassificationScopeExclusionUpdate& WithOperation(ClassificationScopeUpdateOperation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_bucketNames;
    bool m_bucketNamesHasBeenSet = false;

    ClassificationScopeUpdateOperation m_operation;
    bool m_operationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
