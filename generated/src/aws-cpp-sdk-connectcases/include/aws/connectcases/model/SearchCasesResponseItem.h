/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcases/model/FieldValue.h>
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
   * <p>A list of items that represent cases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchCasesResponseItem">AWS
   * API Reference</a></p>
   */
  class SearchCasesResponseItem
  {
  public:
    AWS_CONNECTCASES_API SearchCasesResponseItem();
    AWS_CONNECTCASES_API SearchCasesResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API SearchCasesResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline SearchCasesResponseItem& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline SearchCasesResponseItem& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline SearchCasesResponseItem& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of case field values.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline SearchCasesResponseItem& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}
    inline SearchCasesResponseItem& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}
    inline SearchCasesResponseItem& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline SearchCasesResponseItem& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SearchCasesResponseItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SearchCasesResponseItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SearchCasesResponseItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SearchCasesResponseItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SearchCasesResponseItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SearchCasesResponseItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SearchCasesResponseItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SearchCasesResponseItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SearchCasesResponseItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline SearchCasesResponseItem& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline SearchCasesResponseItem& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline SearchCasesResponseItem& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
