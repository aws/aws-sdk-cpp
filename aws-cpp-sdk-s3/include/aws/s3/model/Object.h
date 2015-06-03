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
#include <aws/s3/model/ObjectStorageClass.h>
#include <aws/s3/model/Owner.h>

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
  class AWS_S3_API Object
  {
  public:
    Object();
    Object(const Aws::Utils::Xml::XmlNode& xmlNode);
    Object& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetKey() const{ return m_key; }
    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline Object&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline Object& WithKey(const char* value) { SetKey(value); return *this;}

    
    inline double GetLastModified() const{ return m_lastModified; }
    
    inline void SetLastModified(double value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    
    inline Object&  WithLastModified(double value) { SetLastModified(value); return *this;}

    
    inline const Aws::String& GetETag() const{ return m_eTag; }
    
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    
    inline Object&  WithETag(const Aws::String& value) { SetETag(value); return *this;}

    
    inline Object& WithETag(const char* value) { SetETag(value); return *this;}

    
    inline long GetSize() const{ return m_size; }
    
    inline void SetSize(long value) { m_sizeHasBeenSet = true; m_size = value; }

    
    inline Object&  WithSize(long value) { SetSize(value); return *this;}

    /*
     The class of storage used to store the object.
    */
    inline const ObjectStorageClass& GetStorageClass() const{ return m_storageClass; }
    /*
     The class of storage used to store the object.
    */
    inline void SetStorageClass(const ObjectStorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /*
     The class of storage used to store the object.
    */
    inline Object&  WithStorageClass(const ObjectStorageClass& value) { SetStorageClass(value); return *this;}

    
    inline const Owner& GetOwner() const{ return m_owner; }
    
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    
    inline Object&  WithOwner(const Owner& value) { SetOwner(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    double m_lastModified;
    bool m_lastModifiedHasBeenSet;
    Aws::String m_eTag;
    bool m_eTagHasBeenSet;
    long m_size;
    bool m_sizeHasBeenSet;
    ObjectStorageClass m_storageClass;
    bool m_storageClassHasBeenSet;
    Owner m_owner;
    bool m_ownerHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
