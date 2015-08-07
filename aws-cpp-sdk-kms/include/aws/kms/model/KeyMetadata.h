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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/KeyState.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  /*
    Contains metadata associated with a specific key.
  */
  class AWS_KMS_API KeyMetadata
  {
  public:
    KeyMetadata();
    KeyMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    KeyMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>Account ID number.</p>
    */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }
    /*
     <p>Account ID number.</p>
    */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /*
     <p>Account ID number.</p>
    */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /*
     <p>Account ID number.</p>
    */
    inline KeyMetadata&  WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /*
     <p>Account ID number.</p>
    */
    inline KeyMetadata& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}

    /*
     <p>Unique identifier for the key.</p>
    */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    /*
     <p>Unique identifier for the key.</p>
    */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /*
     <p>Unique identifier for the key.</p>
    */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /*
     <p>Unique identifier for the key.</p>
    */
    inline KeyMetadata&  WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /*
     <p>Unique identifier for the key.</p>
    */
    inline KeyMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /*
     <p>Key ARN (Amazon Resource Name).</p>
    */
    inline const Aws::String& GetArn() const{ return m_arn; }
    /*
     <p>Key ARN (Amazon Resource Name).</p>
    */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /*
     <p>Key ARN (Amazon Resource Name).</p>
    */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /*
     <p>Key ARN (Amazon Resource Name).</p>
    */
    inline KeyMetadata&  WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /*
     <p>Key ARN (Amazon Resource Name).</p>
    */
    inline KeyMetadata& WithArn(const char* value) { SetArn(value); return *this;}

    /*
     <p>Date the key was created.</p>
    */
    inline double GetCreationDate() const{ return m_creationDate; }
    /*
     <p>Date the key was created.</p>
    */
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /*
     <p>Date the key was created.</p>
    */
    inline KeyMetadata&  WithCreationDate(double value) { SetCreationDate(value); return *this;}

    /*
     <p>Value that specifies whether the key is enabled.</p>
    */
    inline bool GetEnabled() const{ return m_enabled; }
    /*
     <p>Value that specifies whether the key is enabled.</p>
    */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /*
     <p>Value that specifies whether the key is enabled.</p>
    */
    inline KeyMetadata&  WithEnabled(bool value) { SetEnabled(value); return *this;}

    /*
     <p>The description of the key.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>The description of the key.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>The description of the key.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>The description of the key.</p>
    */
    inline KeyMetadata&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>The description of the key.</p>
    */
    inline KeyMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>A value that specifies what operation(s) the key can perform.</p>
    */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }
    /*
     <p>A value that specifies what operation(s) the key can perform.</p>
    */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /*
     <p>A value that specifies what operation(s) the key can perform.</p>
    */
    inline KeyMetadata&  WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    
    inline const KeyState& GetKeyState() const{ return m_keyState; }
    
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    
    inline KeyMetadata&  WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    
    inline double GetDeletionDate() const{ return m_deletionDate; }
    
    inline void SetDeletionDate(double value) { m_deletionDateHasBeenSet = true; m_deletionDate = value; }

    
    inline KeyMetadata&  WithDeletionDate(double value) { SetDeletionDate(value); return *this;}

  private:
    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    double m_creationDate;
    bool m_creationDateHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;
    KeyState m_keyState;
    bool m_keyStateHasBeenSet;
    double m_deletionDate;
    bool m_deletionDateHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
