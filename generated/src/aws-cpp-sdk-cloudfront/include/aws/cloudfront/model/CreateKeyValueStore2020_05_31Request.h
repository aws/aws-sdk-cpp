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


    ///@{
    /**
     * <p>The name of the key value store. The minimum length is 1 character and the
     * maximum length is 64 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateKeyValueStore2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateKeyValueStore2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateKeyValueStore2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment of the key value store.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline CreateKeyValueStore2020_05_31Request& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CreateKeyValueStore2020_05_31Request& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CreateKeyValueStore2020_05_31Request& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline const ImportSource& GetImportSource() const{ return m_importSource; }
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }
    inline void SetImportSource(const ImportSource& value) { m_importSourceHasBeenSet = true; m_importSource = value; }
    inline void SetImportSource(ImportSource&& value) { m_importSourceHasBeenSet = true; m_importSource = std::move(value); }
    inline CreateKeyValueStore2020_05_31Request& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}
    inline CreateKeyValueStore2020_05_31Request& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}
    ///@}
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
