/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Specifies the details of a governed table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TableObject">AWS
   * API Reference</a></p>
   */
  class TableObject
  {
  public:
    AWS_LAKEFORMATION_API TableObject();
    AWS_LAKEFORMATION_API TableObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline TableObject& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline TableObject& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline TableObject& WithUri(const char* value) { SetUri(value); return *this;}


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
    inline TableObject& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline TableObject& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline TableObject& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The size of the Amazon S3 object in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the Amazon S3 object in bytes.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the Amazon S3 object in bytes.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the Amazon S3 object in bytes.</p>
     */
    inline TableObject& WithSize(long long value) { SetSize(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
