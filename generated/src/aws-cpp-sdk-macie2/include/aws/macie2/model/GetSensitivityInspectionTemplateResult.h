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
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult();
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetSensitivityInspectionTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The custom description of the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The custom description of the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The custom description of the template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The custom description of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * analyzing data.</p>
     */
    inline const SensitivityInspectionTemplateExcludes& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * analyzing data.</p>
     */
    inline void SetExcludes(const SensitivityInspectionTemplateExcludes& value) { m_excludes = value; }

    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * analyzing data.</p>
     */
    inline void SetExcludes(SensitivityInspectionTemplateExcludes&& value) { m_excludes = std::move(value); }

    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * analyzing data.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithExcludes(const SensitivityInspectionTemplateExcludes& value) { SetExcludes(value); return *this;}

    /**
     * <p>The managed data identifiers that are explicitly excluded (not used) when
     * analyzing data.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithExcludes(SensitivityInspectionTemplateExcludes&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are included (used) when analyzing data.</p>
     */
    inline const SensitivityInspectionTemplateIncludes& GetIncludes() const{ return m_includes; }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are included (used) when analyzing data.</p>
     */
    inline void SetIncludes(const SensitivityInspectionTemplateIncludes& value) { m_includes = value; }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are included (used) when analyzing data.</p>
     */
    inline void SetIncludes(SensitivityInspectionTemplateIncludes&& value) { m_includes = std::move(value); }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are included (used) when analyzing data.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithIncludes(const SensitivityInspectionTemplateIncludes& value) { SetIncludes(value); return *this;}

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers that
     * are included (used) when analyzing data.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithIncludes(SensitivityInspectionTemplateIncludes&& value) { SetIncludes(std::move(value)); return *this;}


    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the template.</p>
     */
    inline const Aws::String& GetSensitivityInspectionTemplateId() const{ return m_sensitivityInspectionTemplateId; }

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline void SetSensitivityInspectionTemplateId(const Aws::String& value) { m_sensitivityInspectionTemplateId = value; }

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline void SetSensitivityInspectionTemplateId(Aws::String&& value) { m_sensitivityInspectionTemplateId = std::move(value); }

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline void SetSensitivityInspectionTemplateId(const char* value) { m_sensitivityInspectionTemplateId.assign(value); }

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithSensitivityInspectionTemplateId(const Aws::String& value) { SetSensitivityInspectionTemplateId(value); return *this;}

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithSensitivityInspectionTemplateId(Aws::String&& value) { SetSensitivityInspectionTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the template.</p>
     */
    inline GetSensitivityInspectionTemplateResult& WithSensitivityInspectionTemplateId(const char* value) { SetSensitivityInspectionTemplateId(value); return *this;}

  private:

    Aws::String m_description;

    SensitivityInspectionTemplateExcludes m_excludes;

    SensitivityInspectionTemplateIncludes m_includes;

    Aws::String m_name;

    Aws::String m_sensitivityInspectionTemplateId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
