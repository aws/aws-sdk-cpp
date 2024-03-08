/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/ImportSource.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateKeyValueStore2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateKeyValueStore2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeyValueStore"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Key Value Store. The maximum length of the name is 32
     * characters.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment of the Key Value Store.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline const ImportSource& GetImportSource() const{ return m_importSource; }

    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }

    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline void SetImportSource(const ImportSource& value) { m_importSourceHasBeenSet = true; m_importSource = value; }

    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline void SetImportSource(ImportSource&& value) { m_importSourceHasBeenSet = true; m_importSource = std::move(value); }

    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}

    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline CreateKeyValueStore2020_05_31Request& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    ImportSource m_importSource;
    bool m_importSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
