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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>A summary of information about a fleet provision template
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ProvisioningTemplateVersionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ProvisioningTemplateVersionSummary
  {
  public:
    ProvisioningTemplateVersionSummary();
    ProvisioningTemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningTemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the fleet privisioning template version.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of the fleet privisioning template version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of the fleet privisioning template version.</p>
     */
    inline void SetVersionId(int value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of the fleet privisioning template version.</p>
     */
    inline ProvisioningTemplateVersionSummary& WithVersionId(int value) { SetVersionId(value); return *this;}


    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline ProvisioningTemplateVersionSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when the fleet provisioning template version was created</p>
     */
    inline ProvisioningTemplateVersionSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }

    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }

    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline ProvisioningTemplateVersionSummary& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}

  private:

    int m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_isDefaultVersion;
    bool m_isDefaultVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
