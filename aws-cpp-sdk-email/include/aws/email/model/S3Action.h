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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace SES
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_SES_API S3Action
  {
  public:
    S3Action();
    S3Action(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Action& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    
    inline S3Action&  WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    
    inline S3Action& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    
    inline S3Action&  WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    
    inline S3Action& WithBucketName(const char* value) { SetBucketName(value); return *this;}

    
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }
    
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }

    
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }

    
    inline S3Action&  WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}

    
    inline S3Action& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}

    
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    
    inline S3Action&  WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    
    inline S3Action& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;
    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet;
    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
