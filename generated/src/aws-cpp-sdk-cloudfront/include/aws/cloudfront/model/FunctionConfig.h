/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionRuntime.h>
#include <aws/cloudfront/model/KeyValueStoreAssociations.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains configuration information about a CloudFront function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionConfig">AWS
   * API Reference</a></p>
   */
  class FunctionConfig
  {
  public:
    AWS_CLOUDFRONT_API FunctionConfig() = default;
    AWS_CLOUDFRONT_API FunctionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A comment to describe the function.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    FunctionConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's runtime environment version.</p>
     */
    inline FunctionRuntime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(FunctionRuntime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline FunctionConfig& WithRuntime(FunctionRuntime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the key value store associations.</p>
     */
    inline const KeyValueStoreAssociations& GetKeyValueStoreAssociations() const { return m_keyValueStoreAssociations; }
    inline bool KeyValueStoreAssociationsHasBeenSet() const { return m_keyValueStoreAssociationsHasBeenSet; }
    template<typename KeyValueStoreAssociationsT = KeyValueStoreAssociations>
    void SetKeyValueStoreAssociations(KeyValueStoreAssociationsT&& value) { m_keyValueStoreAssociationsHasBeenSet = true; m_keyValueStoreAssociations = std::forward<KeyValueStoreAssociationsT>(value); }
    template<typename KeyValueStoreAssociationsT = KeyValueStoreAssociations>
    FunctionConfig& WithKeyValueStoreAssociations(KeyValueStoreAssociationsT&& value) { SetKeyValueStoreAssociations(std::forward<KeyValueStoreAssociationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    FunctionRuntime m_runtime{FunctionRuntime::NOT_SET};
    bool m_runtimeHasBeenSet = false;

    KeyValueStoreAssociations m_keyValueStoreAssociations;
    bool m_keyValueStoreAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
