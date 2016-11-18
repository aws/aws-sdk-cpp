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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Contains information indicating the ways in which a product can be
   * provisioned.</p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifact
  {
  public:
    ProvisioningArtifact();
    ProvisioningArtifact(const Aws::Utils::Json::JsonValue& jsonValue);
    ProvisioningArtifact& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline ProvisioningArtifact& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline ProvisioningArtifact& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the artifact.</p>
     */
    inline ProvisioningArtifact& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the artifact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the artifact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the artifact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the artifact.</p>
     */
    inline ProvisioningArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the artifact.</p>
     */
    inline ProvisioningArtifact& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the artifact.</p>
     */
    inline ProvisioningArtifact& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The text description of the artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the artifact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the artifact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the artifact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the artifact.</p>
     */
    inline ProvisioningArtifact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the artifact.</p>
     */
    inline ProvisioningArtifact& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the artifact.</p>
     */
    inline ProvisioningArtifact& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline ProvisioningArtifact& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline ProvisioningArtifact& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
