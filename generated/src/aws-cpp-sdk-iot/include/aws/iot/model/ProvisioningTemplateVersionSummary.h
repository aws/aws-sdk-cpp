/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ProvisioningTemplateVersionSummary
  {
  public:
    AWS_IOT_API ProvisioningTemplateVersionSummary() = default;
    AWS_IOT_API ProvisioningTemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ProvisioningTemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the fleet provisioning template version.</p>
     */
    inline int GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(int value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline ProvisioningTemplateVersionSummary& WithVersionId(int value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the provisioning template version was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ProvisioningTemplateVersionSummary& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the provisioning template version is the default version, otherwise
     * false.</p>
     */
    inline bool GetIsDefaultVersion() const { return m_isDefaultVersion; }
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }
    inline ProvisioningTemplateVersionSummary& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}
  private:

    int m_versionId{0};
    bool m_versionIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    bool m_isDefaultVersion{false};
    bool m_isDefaultVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
