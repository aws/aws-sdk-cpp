﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A ProfileObjectTypeTemplate in a list of
   * ProfileObjectTypeTemplates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypeTemplateItem">AWS
   * API Reference</a></p>
   */
  class ListProfileObjectTypeTemplateItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem();
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline ListProfileObjectTypeTemplateItem& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source of the object template.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline ListProfileObjectTypeTemplateItem& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the object template.</p>
     */
    inline const Aws::String& GetSourceObject() const{ return m_sourceObject; }
    inline bool SourceObjectHasBeenSet() const { return m_sourceObjectHasBeenSet; }
    inline void SetSourceObject(const Aws::String& value) { m_sourceObjectHasBeenSet = true; m_sourceObject = value; }
    inline void SetSourceObject(Aws::String&& value) { m_sourceObjectHasBeenSet = true; m_sourceObject = std::move(value); }
    inline void SetSourceObject(const char* value) { m_sourceObjectHasBeenSet = true; m_sourceObject.assign(value); }
    inline ListProfileObjectTypeTemplateItem& WithSourceObject(const Aws::String& value) { SetSourceObject(value); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithSourceObject(Aws::String&& value) { SetSourceObject(std::move(value)); return *this;}
    inline ListProfileObjectTypeTemplateItem& WithSourceObject(const char* value) { SetSourceObject(value); return *this;}
    ///@}
  private:

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceObject;
    bool m_sourceObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
