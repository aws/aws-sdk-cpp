/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>An object to delete from the governed table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteObjectInput">AWS
   * API Reference</a></p>
   */
  class DeleteObjectInput
  {
  public:
    AWS_LAKEFORMATION_API DeleteObjectInput();
    AWS_LAKEFORMATION_API DeleteObjectInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DeleteObjectInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline DeleteObjectInput& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline DeleteObjectInput& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the object to delete.</p>
     */
    inline DeleteObjectInput& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline DeleteObjectInput& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline DeleteObjectInput& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline DeleteObjectInput& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline DeleteObjectInput& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline DeleteObjectInput& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline DeleteObjectInput& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline DeleteObjectInput& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of partition values for the object. A value must be specified for each
     * partition key associated with the governed table.</p>
     */
    inline DeleteObjectInput& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
