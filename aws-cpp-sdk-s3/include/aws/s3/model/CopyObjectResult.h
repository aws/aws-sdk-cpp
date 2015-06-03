/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    $shape.documentation
  */
  class AWS_S3_API CopyObjectResult
  {
  public:
    CopyObjectResult();
    CopyObjectResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CopyObjectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::String& GetETag() const{ return m_eTag; }
    
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    
    inline CopyObjectResult&  WithETag(const Aws::String& value) { SetETag(value); return *this;}

    
    inline CopyObjectResult& WithETag(const char* value) { SetETag(value); return *this;}

    
    inline double GetLastModified() const{ return m_lastModified; }
    
    inline void SetLastModified(double value) { m_lastModified = value; }

    
    inline CopyObjectResult&  WithLastModified(double value) { SetLastModified(value); return *this;}

  private:
    Aws::String m_eTag;
    double m_lastModified;
  };

} // namespace Model
} // namespace S3
} // namespace Aws