/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionRuntime.h>
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
    AWS_CLOUDFRONT_API FunctionConfig();
    AWS_CLOUDFRONT_API FunctionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A comment to describe the function.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment to describe the function.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment to describe the function.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment to describe the function.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment to describe the function.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment to describe the function.</p>
     */
    inline FunctionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment to describe the function.</p>
     */
    inline FunctionConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment to describe the function.</p>
     */
    inline FunctionConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline const FunctionRuntime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline void SetRuntime(const FunctionRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline void SetRuntime(FunctionRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline FunctionConfig& WithRuntime(const FunctionRuntime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The function's runtime environment. The only valid value is
     * <code>cloudfront-js-1.0</code>.</p>
     */
    inline FunctionConfig& WithRuntime(FunctionRuntime&& value) { SetRuntime(std::move(value)); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    FunctionRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
