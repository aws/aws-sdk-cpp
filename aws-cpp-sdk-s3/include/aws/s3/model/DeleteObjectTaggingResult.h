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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class AWS_S3_API DeleteObjectTaggingResult
  {
  public:
    DeleteObjectTaggingResult();
    DeleteObjectTaggingResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteObjectTaggingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = value; }

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline DeleteObjectTaggingResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline DeleteObjectTaggingResult& WithVersionId(Aws::String&& value) { SetVersionId(value); return *this;}

    /**
     * The versionId of the object the tag-set was removed from.
     */
    inline DeleteObjectTaggingResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:
    Aws::String m_versionId;
  };

} // namespace Model
} // namespace S3
} // namespace Aws