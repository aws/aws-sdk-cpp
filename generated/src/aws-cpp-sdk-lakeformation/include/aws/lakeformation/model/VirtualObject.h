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
   * <p>An object that defines an Amazon S3 object to be deleted if a transaction
   * cancels, provided that <code>VirtualPut</code> was called before writing the
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/VirtualObject">AWS
   * API Reference</a></p>
   */
  class VirtualObject
  {
  public:
    AWS_LAKEFORMATION_API VirtualObject();
    AWS_LAKEFORMATION_API VirtualObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API VirtualObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline VirtualObject& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline VirtualObject& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 object. Must start with s3://</p>
     */
    inline VirtualObject& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline VirtualObject& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline VirtualObject& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag of the Amazon S3 object.</p>
     */
    inline VirtualObject& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
