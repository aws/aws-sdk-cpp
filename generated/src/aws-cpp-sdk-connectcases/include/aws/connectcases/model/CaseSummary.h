/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Case summary information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseSummary">AWS
   * API Reference</a></p>
   */
  class CaseSummary
  {
  public:
    AWS_CONNECTCASES_API CaseSummary();
    AWS_CONNECTCASES_API CaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CaseSummary& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CaseSummary& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CaseSummary& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CaseSummary& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CaseSummary& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CaseSummary& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
