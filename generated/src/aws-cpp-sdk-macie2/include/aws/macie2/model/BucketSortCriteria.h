/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/OrderBy.h>
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
   * <p>Specifies criteria for sorting the results of a query for information about
   * S3 buckets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketSortCriteria">AWS
   * API Reference</a></p>
   */
  class BucketSortCriteria
  {
  public:
    AWS_MACIE2_API BucketSortCriteria();
    AWS_MACIE2_API BucketSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline BucketSortCriteria& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline BucketSortCriteria& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket property to sort the results by. This value can be one
     * of the following properties that Amazon Macie defines as bucket metadata:
     * accountId, bucketName, classifiableObjectCount, classifiableSizeInBytes,
     * objectCount, sensitivityScore, or sizeInBytes.</p>
     */
    inline BucketSortCriteria& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline BucketSortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The sort order to apply to the results, based on the value specified by the
     * attributeName property. Valid values are: ASC, sort the results in ascending
     * order; and, DESC, sort the results in descending order.</p>
     */
    inline BucketSortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
