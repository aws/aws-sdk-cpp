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
  class AWS_S3_API Destination
  {
  public:
    Destination();
    Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /*
     Amazon resource name (ARN) of the bucket where you want Amazon S3 to store replicas of the object identified by the rule.
    */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    /*
     Amazon resource name (ARN) of the bucket where you want Amazon S3 to store replicas of the object identified by the rule.
    */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /*
     Amazon resource name (ARN) of the bucket where you want Amazon S3 to store replicas of the object identified by the rule.
    */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /*
     Amazon resource name (ARN) of the bucket where you want Amazon S3 to store replicas of the object identified by the rule.
    */
    inline Destination&  WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /*
     Amazon resource name (ARN) of the bucket where you want Amazon S3 to store replicas of the object identified by the rule.
    */
    inline Destination& WithBucket(const char* value) { SetBucket(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
