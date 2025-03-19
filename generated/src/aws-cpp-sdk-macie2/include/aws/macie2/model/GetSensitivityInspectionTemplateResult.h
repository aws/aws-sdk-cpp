/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SensitivityInspectionTemplateExcludes.h>
#include <aws/macie2/model/SensitivityInspectionTemplateIncludes.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetSensitivityInspectionTemplateResult
  {
  public:
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult() = default;
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The custom description of the template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSensitivityInspectionTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * performing automated sensitive data discovery.</p>
     */
    inline const SensitivityInspectionTemplateExcludes& GetExcludes() const { return m_excludes; }
    template<typename ExcludesT = SensitivityInspectionTemplateExcludes>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = SensitivityInspectionTemplateExcludes>
    GetSensitivityInspectionTemplateResult& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are explicitly included (used) when performing automated sensitive data
     * discovery.</p>
     */
    inline const SensitivityInspectionTemplateIncludes& GetIncludes() const { return m_includes; }
    template<typename IncludesT = SensitivityInspectionTemplateIncludes>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = SensitivityInspectionTemplateIncludes>
    GetSensitivityInspectionTemplateResult& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template: automated-sensitive-data-discovery.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetSensitivityInspectionTemplateResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the template.</p>
     */
    inline const Aws::String& GetSensitivityInspectionTemplateId() const { return m_sensitivityInspectionTemplateId; }
    template<typename SensitivityInspectionTemplateIdT = Aws::String>
    void SetSensitivityInspectionTemplateId(SensitivityInspectionTemplateIdT&& value) { m_sensitivityInspectionTemplateIdHasBeenSet = true; m_sensitivityInspectionTemplateId = std::forward<SensitivityInspectionTemplateIdT>(value); }
    template<typename SensitivityInspectionTemplateIdT = Aws::String>
    GetSensitivityInspectionTemplateResult& WithSensitivityInspectionTemplateId(SensitivityInspectionTemplateIdT&& value) { SetSensitivityInspectionTemplateId(std::forward<SensitivityInspectionTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSensitivityInspectionTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SensitivityInspectionTemplateExcludes m_excludes;
    bool m_excludesHasBeenSet = false;

    SensitivityInspectionTemplateIncludes m_includes;
    bool m_includesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sensitivityInspectionTemplateId;
    bool m_sensitivityInspectionTemplateIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
