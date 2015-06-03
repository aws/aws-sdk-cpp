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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /*
  */
  class AWS_KMS_API UpdateAliasRequest : public KMSRequest
  {
  public:
    UpdateAliasRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     String that contains the name of the alias to be modifed. The name must start with the word "alias" followed by a forward slash (alias/). Aliases that begin with "alias/AWS" are reserved.
    */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    /*
     String that contains the name of the alias to be modifed. The name must start with the word "alias" followed by a forward slash (alias/). Aliases that begin with "alias/AWS" are reserved.
    */
    inline void SetAliasName(const Aws::String& value) { m_aliasName = value; }

    /*
     String that contains the name of the alias to be modifed. The name must start with the word "alias" followed by a forward slash (alias/). Aliases that begin with "alias/AWS" are reserved.
    */
    inline void SetAliasName(const char* value) { m_aliasName.assign(value); }

    /*
     String that contains the name of the alias to be modifed. The name must start with the word "alias" followed by a forward slash (alias/). Aliases that begin with "alias/AWS" are reserved.
    */
    inline UpdateAliasRequest&  WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /*
     String that contains the name of the alias to be modifed. The name must start with the word "alias" followed by a forward slash (alias/). Aliases that begin with "alias/AWS" are reserved.
    */
    inline UpdateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

    /*
     <p>Unique identifier of the customer master key to be associated with the alias. This value can be a globally unique identifier or the fully specified ARN of a key. <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> </ul> </p>
    */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }
    /*
     <p>Unique identifier of the customer master key to be associated with the alias. This value can be a globally unique identifier or the fully specified ARN of a key. <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> </ul> </p>
    */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyId = value; }

    /*
     <p>Unique identifier of the customer master key to be associated with the alias. This value can be a globally unique identifier or the fully specified ARN of a key. <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> </ul> </p>
    */
    inline void SetTargetKeyId(const char* value) { m_targetKeyId.assign(value); }

    /*
     <p>Unique identifier of the customer master key to be associated with the alias. This value can be a globally unique identifier or the fully specified ARN of a key. <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> </ul> </p>
    */
    inline UpdateAliasRequest&  WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /*
     <p>Unique identifier of the customer master key to be associated with the alias. This value can be a globally unique identifier or the fully specified ARN of a key. <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> </ul> </p>
    */
    inline UpdateAliasRequest& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}

  private:
    Aws::String m_aliasName;
    Aws::String m_targetKeyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
