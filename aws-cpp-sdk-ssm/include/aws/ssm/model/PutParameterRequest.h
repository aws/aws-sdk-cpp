/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline PutParameterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system</p>
     */
    inline PutParameterRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system</p>
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
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

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
    inline PutParameterRequest& WithValue(Aws::String&& value) { SetValue(value); return *this;}

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
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithType(ParameterType&& value) { SetType(value); return *this;}

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
     */
    inline PutParameterRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The parameter key ID that you want to add to the system.</p>
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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
