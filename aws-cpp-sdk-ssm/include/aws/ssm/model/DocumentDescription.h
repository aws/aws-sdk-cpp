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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentParameter.h>
#include <aws/ssm/model/PlatformType.h>

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
   * Describes an SSM document.
   */
  class AWS_SSM_API DocumentDescription
  {
  public:
    DocumentDescription();
    DocumentDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    DocumentDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline const Aws::String& GetSha1() const{ return m_sha1; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline void SetSha1(const Aws::String& value) { m_sha1HasBeenSet = true; m_sha1 = value; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline void SetSha1(Aws::String&& value) { m_sha1HasBeenSet = true; m_sha1 = value; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline void SetSha1(const char* value) { m_sha1HasBeenSet = true; m_sha1.assign(value); }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline DocumentDescription& WithSha1(const Aws::String& value) { SetSha1(value); return *this;}

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline DocumentDescription& WithSha1(Aws::String&& value) { SetSha1(value); return *this;}

    /**
     * <p>The SHA1 hash of the document, which you can use for verification
     * purposes.</p>
     */
    inline DocumentDescription& WithSha1(const char* value) { SetSha1(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentDescription& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentDescription& WithName(const char* value) { SetName(value); return *this;}

    /**
     * The date when the SSM document was created.
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * The date when the SSM document was created.
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * The date when the SSM document was created.
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * The date when the SSM document was created.
     */
    inline DocumentDescription& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * The date when the SSM document was created.
     */
    inline DocumentDescription& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The status of the SSM document.</p>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the SSM document.</p>
     */
    inline void SetStatus(const DocumentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSM document.</p>
     */
    inline void SetStatus(DocumentStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSM document.</p>
     */
    inline DocumentDescription& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the SSM document.</p>
     */
    inline DocumentDescription& WithStatus(DocumentStatus&& value) { SetStatus(value); return *this;}

    /**
     * A description of the document.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the document.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the document.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the document.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the document.
     */
    inline DocumentDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the document.
     */
    inline DocumentDescription& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * A description of the document.
     */
    inline DocumentDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline const Aws::Vector<DocumentParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline void SetParameters(const Aws::Vector<DocumentParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline void SetParameters(Aws::Vector<DocumentParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& WithParameters(const Aws::Vector<DocumentParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& WithParameters(Aws::Vector<DocumentParameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& AddParameters(const DocumentParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& AddParameters(DocumentParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const{ return m_platformTypes; }

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline void SetPlatformTypes(const Aws::Vector<PlatformType>& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline void SetPlatformTypes(Aws::Vector<PlatformType>&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline DocumentDescription& WithPlatformTypes(const Aws::Vector<PlatformType>& value) { SetPlatformTypes(value); return *this;}

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline DocumentDescription& WithPlatformTypes(Aws::Vector<PlatformType>&& value) { SetPlatformTypes(value); return *this;}

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline DocumentDescription& AddPlatformTypes(const PlatformType& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

    /**
     * The list of OS platforms compatible with this SSM document.
     */
    inline DocumentDescription& AddPlatformTypes(PlatformType&& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

  private:
    Aws::String m_sha1;
    bool m_sha1HasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
    DocumentStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<DocumentParameter> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
