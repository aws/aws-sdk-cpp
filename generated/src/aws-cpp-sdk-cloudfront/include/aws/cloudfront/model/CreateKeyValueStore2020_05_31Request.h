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
    AWS_CLOUDFRONT_API CreateKeyValueStore2020_05_31Request() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateKeyValueStore2020_05_31Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment of the key value store.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CreateKeyValueStore2020_05_31Request& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that provides the source for the import. The source must be in
     * a valid JSON format.</p>
     */
    inline const ImportSource& GetImportSource() const { return m_importSource; }
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }
    template<typename ImportSourceT = ImportSource>
    void SetImportSource(ImportSourceT&& value) { m_importSourceHasBeenSet = true; m_importSource = std::forward<ImportSourceT>(value); }
    template<typename ImportSourceT = ImportSource>
    CreateKeyValueStore2020_05_31Request& WithImportSource(ImportSourceT&& value) { SetImportSource(std::forward<ImportSourceT>(value)); return *this;}
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
