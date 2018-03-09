﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API PutParameterRequest : public SSMRequest
  {
  public:
    PutParameterRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutParameter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>For
     * information about parameter name requirements and restrictions, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html#sysman-paramstore-su-create-about">About
     * Creating Systems Manager Parameters</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline PutParameterRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline PutParameterRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter when you choose
     * the SecureString data type. If you don't specify a key ID, the system uses the
     * default key associated with your AWS account.</p>
     */
    inline PutParameterRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline bool GetOverwrite() const{ return m_overwrite; }

    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline void SetOverwrite(bool value) { m_overwriteHasBeenSet = true; m_overwrite = value; }

    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline PutParameterRequest& WithOverwrite(bool value) { SetOverwrite(value); return *this;}


    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ParameterType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    bool m_overwrite;
    bool m_overwriteHasBeenSet;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
