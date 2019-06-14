/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/InvalidationBatch">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API InvalidationBatch
  {
  public:
    InvalidationBatch();
    InvalidationBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    InvalidationBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline const Paths& GetPaths() const{ return m_paths; }

    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline void SetPaths(const Paths& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline void SetPaths(Paths&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline InvalidationBatch& WithPaths(const Paths& value) { SetPaths(value); return *this;}

    /**
     * <p>A complex type that contains information about the objects that you want to
     * invalidate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
     * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
     * </p>
     */
    inline InvalidationBatch& WithPaths(Paths&& value) { SetPaths(std::move(value)); return *this;}


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
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

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
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

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
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

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
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

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
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

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
    inline InvalidationBatch& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

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
    inline InvalidationBatch& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

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
    inline InvalidationBatch& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

  private:

    Paths m_paths;
    bool m_pathsHasBeenSet;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
