/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Metada includes information like the ARN of the last user and the date/time
   * the parameter was last used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ParameterMetadata
  {
  public:
    ParameterMetadata();
    ParameterMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    ParameterMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The parameter name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The type of parameter. Valid parameter types include the following: String,
     * String list, Secure string.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter. Valid parameter types include the following: String,
     * String list, Secure string.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter. Valid parameter types include the following: String,
     * String list, Secure string.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter. Valid parameter types include the following: String,
     * String list, Secure string.</p>
     */
    inline ParameterMetadata& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter. Valid parameter types include the following: String,
     * String list, Secure string.</p>
     */
    inline ParameterMetadata& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline ParameterMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline ParameterMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the AWS user who last changed the
     * parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ParameterType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
