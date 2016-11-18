﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * An invalidation batch.
   */
  class AWS_CLOUDFRONT_API InvalidationBatch
  {
  public:
    InvalidationBatch();
    InvalidationBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    InvalidationBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The path of the object to invalidate. The path is relative to the distribution
     * and must begin with a slash (/). You must enclose each invalidation object with
     * the Path element tags. If the path includes non-ASCII characters or unsafe
     * characters as defined in RFC 1783 (http://www.ietf.org/rfc/rfc1738.txt), URL
     * encode those characters. Do not URL encode any other characters in the path, or
     * CloudFront will not invalidate the old version of the updated object.
     */
    inline const Paths& GetPaths() const{ return m_paths; }

    /**
     * The path of the object to invalidate. The path is relative to the distribution
     * and must begin with a slash (/). You must enclose each invalidation object with
     * the Path element tags. If the path includes non-ASCII characters or unsafe
     * characters as defined in RFC 1783 (http://www.ietf.org/rfc/rfc1738.txt), URL
     * encode those characters. Do not URL encode any other characters in the path, or
     * CloudFront will not invalidate the old version of the updated object.
     */
    inline void SetPaths(const Paths& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * The path of the object to invalidate. The path is relative to the distribution
     * and must begin with a slash (/). You must enclose each invalidation object with
     * the Path element tags. If the path includes non-ASCII characters or unsafe
     * characters as defined in RFC 1783 (http://www.ietf.org/rfc/rfc1738.txt), URL
     * encode those characters. Do not URL encode any other characters in the path, or
     * CloudFront will not invalidate the old version of the updated object.
     */
    inline void SetPaths(Paths&& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * The path of the object to invalidate. The path is relative to the distribution
     * and must begin with a slash (/). You must enclose each invalidation object with
     * the Path element tags. If the path includes non-ASCII characters or unsafe
     * characters as defined in RFC 1783 (http://www.ietf.org/rfc/rfc1738.txt), URL
     * encode those characters. Do not URL encode any other characters in the path, or
     * CloudFront will not invalidate the old version of the updated object.
     */
    inline InvalidationBatch& WithPaths(const Paths& value) { SetPaths(value); return *this;}

    /**
     * The path of the object to invalidate. The path is relative to the distribution
     * and must begin with a slash (/). You must enclose each invalidation object with
     * the Path element tags. If the path includes non-ASCII characters or unsafe
     * characters as defined in RFC 1783 (http://www.ietf.org/rfc/rfc1738.txt), URL
     * encode those characters. Do not URL encode any other characters in the path, or
     * CloudFront will not invalidate the old version of the updated object.
     */
    inline InvalidationBatch& WithPaths(Paths&& value) { SetPaths(value); return *this;}

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline InvalidationBatch& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
     */
    inline InvalidationBatch& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * A unique name that ensures the request can't be replayed. If the CallerReference
     * is new (no matter the content of the Path object), a new distribution is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an invalidation batch, and the content of each Path element is
     * identical to the original request, the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a distribution but the content of any Path
     * is different from the original request, CloudFront returns an
     * InvalidationBatchAlreadyExists error.
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
