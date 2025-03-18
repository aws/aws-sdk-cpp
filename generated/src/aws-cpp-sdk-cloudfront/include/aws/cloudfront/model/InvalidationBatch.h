/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Paths.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An invalidation batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/InvalidationBatch">AWS
   * API Reference</a></p>
   */
  class InvalidationBatch
  {
  public:
    AWS_CLOUDFRONT_API InvalidationBatch() = default;
    AWS_CLOUDFRONT_API InvalidationBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API InvalidationBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Paths& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Paths>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Paths>
    InvalidationBatch& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that you specify to uniquely identify an invalidation request.
     * CloudFront uses the value to prevent you from accidentally resubmitting an
     * identical request. Whenever you create a new invalidation request, you must
     * specify a new value for <code>CallerReference</code> and change other values in
     * the request as applicable. One way to ensure that the value of
     * <code>CallerReference</code> is unique is to use a <code>timestamp</code>, for
     * example, <code>20120301090000</code>.</p> <p>If you make a second invalidation
     * request with the same value for <code>CallerReference</code>, and if the rest of
     * the request is the same, CloudFront doesn't create a new invalidation request.
     * Instead, CloudFront returns information about the invalidation request that you
     * previously created with the same <code>CallerReference</code>.</p> <p>If
     * <code>CallerReference</code> is a value you already sent in a previous
     * invalidation batch request but the content of any <code>Path</code> is different
     * from the original request, CloudFront returns an
     * <code>InvalidationBatchAlreadyExists</code> error.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    InvalidationBatch& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}
  private:

    Paths m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
