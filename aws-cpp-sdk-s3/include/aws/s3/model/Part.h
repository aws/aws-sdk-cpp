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
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_S3_API Part
  {
  public:
    Part();
    Part(const Aws::Utils::Xml::XmlNode& xmlNode);
    Part& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /*
     Part number identifying the part.
    */
    inline long GetPartNumber() const{ return m_partNumber; }
    /*
     Part number identifying the part.
    */
    inline void SetPartNumber(long value) { m_partNumberHasBeenSet = true; m_partNumber = value; }

    /*
     Part number identifying the part.
    */
    inline Part&  WithPartNumber(long value) { SetPartNumber(value); return *this;}

    /*
     Date and time at which the part was uploaded.
    */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }
    /*
     Date and time at which the part was uploaded.
    */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /*
     Date and time at which the part was uploaded.
    */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /*
     Date and time at which the part was uploaded.
    */
    inline Part&  WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /*
     Date and time at which the part was uploaded.
    */
    inline Part& WithLastModified(const char* value) { SetLastModified(value); return *this;}

    /*
     Entity tag returned when the part was uploaded.
    */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    /*
     Entity tag returned when the part was uploaded.
    */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /*
     Entity tag returned when the part was uploaded.
    */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /*
     Entity tag returned when the part was uploaded.
    */
    inline Part&  WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /*
     Entity tag returned when the part was uploaded.
    */
    inline Part& WithETag(const char* value) { SetETag(value); return *this;}

    /*
     Size of the uploaded part data.
    */
    inline long GetSize() const{ return m_size; }
    /*
     Size of the uploaded part data.
    */
    inline void SetSize(long value) { m_sizeHasBeenSet = true; m_size = value; }

    /*
     Size of the uploaded part data.
    */
    inline Part&  WithSize(long value) { SetSize(value); return *this;}

  private:
    long m_partNumber;
    bool m_partNumberHasBeenSet;
    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet;
    Aws::String m_eTag;
    bool m_eTagHasBeenSet;
    long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
